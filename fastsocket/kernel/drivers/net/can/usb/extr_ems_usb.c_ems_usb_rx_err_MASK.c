
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int protocol; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_errors; int rx_over_errors; } ;
struct TYPE_15__ {int bus_error; int error_passive; int error_warning; } ;
struct TYPE_16__ {scalar_t__ state; TYPE_6__ can_stats; } ;
struct ems_usb {TYPE_7__ can; TYPE_8__* netdev; } ;
struct TYPE_10__ {int ecc; int txerr; int rxerr; } ;
struct TYPE_11__ {TYPE_1__ sja1000; } ;
struct TYPE_12__ {TYPE_2__ regs; } ;
struct TYPE_13__ {TYPE_3__ cc; } ;
struct TYPE_14__ {int can_state; TYPE_4__ error; } ;
struct ems_cpc_msg {scalar_t__ type; TYPE_5__ msg; } ;
struct can_frame {int can_id; int* data; scalar_t__ can_dlc; } ;
struct TYPE_17__ {struct net_device_stats stats; } ;


 int CAN_ERR_BUSERROR ;
 int CAN_ERR_BUSOFF ;
 int CAN_ERR_CRTL ;
 int CAN_ERR_CRTL_RX_OVERFLOW ;
 int CAN_ERR_CRTL_RX_PASSIVE ;
 int CAN_ERR_CRTL_TX_PASSIVE ;
 scalar_t__ CAN_ERR_DLC ;
 int CAN_ERR_FLAG ;
 int CAN_ERR_PROT ;
 int CAN_ERR_PROT_BIT ;
 int CAN_ERR_PROT_FORM ;
 int CAN_ERR_PROT_STUFF ;
 int CAN_ERR_PROT_TX ;
 int CAN_ERR_PROT_UNSPEC ;
 scalar_t__ CAN_STATE_BUS_OFF ;
 scalar_t__ CAN_STATE_ERROR_ACTIVE ;
 scalar_t__ CAN_STATE_ERROR_PASSIVE ;
 scalar_t__ CAN_STATE_ERROR_WARNING ;
 scalar_t__ CPC_MSG_TYPE_CAN_FRAME_ERROR ;
 scalar_t__ CPC_MSG_TYPE_CAN_STATE ;
 scalar_t__ CPC_MSG_TYPE_OVERRUN ;
 int ETH_P_CAN ;

 int SJA1000_ECC_DIR ;

 int SJA1000_ECC_MASK ;
 int SJA1000_ECC_SEG ;

 int SJA1000_SR_BS ;
 int SJA1000_SR_ES ;
 int can_bus_off (TYPE_8__*) ;
 int htons (int ) ;
 int memset (struct can_frame*,int ,int) ;
 struct sk_buff* netdev_alloc_skb (TYPE_8__*,int) ;
 int netif_rx (struct sk_buff*) ;
 scalar_t__ skb_put (struct sk_buff*,int) ;

__attribute__((used)) static void ems_usb_rx_err(struct ems_usb *dev, struct ems_cpc_msg *msg)
{
 struct can_frame *cf;
 struct sk_buff *skb;
 struct net_device_stats *stats = &dev->netdev->stats;

 skb = netdev_alloc_skb(dev->netdev, sizeof(struct can_frame));
 if (skb == ((void*)0))
  return;

 skb->protocol = htons(ETH_P_CAN);

 cf = (struct can_frame *)skb_put(skb, sizeof(struct can_frame));
 memset(cf, 0, sizeof(struct can_frame));

 cf->can_id = CAN_ERR_FLAG;
 cf->can_dlc = CAN_ERR_DLC;

 if (msg->type == CPC_MSG_TYPE_CAN_STATE) {
  u8 state = msg->msg.can_state;

  if (state & SJA1000_SR_BS) {
   dev->can.state = CAN_STATE_BUS_OFF;
   cf->can_id |= CAN_ERR_BUSOFF;

   can_bus_off(dev->netdev);
  } else if (state & SJA1000_SR_ES) {
   dev->can.state = CAN_STATE_ERROR_WARNING;
   dev->can.can_stats.error_warning++;
  } else {
   dev->can.state = CAN_STATE_ERROR_ACTIVE;
   dev->can.can_stats.error_passive++;
  }
 } else if (msg->type == CPC_MSG_TYPE_CAN_FRAME_ERROR) {
  u8 ecc = msg->msg.error.cc.regs.sja1000.ecc;
  u8 txerr = msg->msg.error.cc.regs.sja1000.txerr;
  u8 rxerr = msg->msg.error.cc.regs.sja1000.rxerr;


  dev->can.can_stats.bus_error++;
  stats->rx_errors++;

  cf->can_id |= CAN_ERR_PROT | CAN_ERR_BUSERROR;

  switch (ecc & SJA1000_ECC_MASK) {
  case 130:
   cf->data[2] |= CAN_ERR_PROT_BIT;
   break;
  case 129:
   cf->data[2] |= CAN_ERR_PROT_FORM;
   break;
  case 128:
   cf->data[2] |= CAN_ERR_PROT_STUFF;
   break;
  default:
   cf->data[2] |= CAN_ERR_PROT_UNSPEC;
   cf->data[3] = ecc & SJA1000_ECC_SEG;
   break;
  }


  if ((ecc & SJA1000_ECC_DIR) == 0)
   cf->data[2] |= CAN_ERR_PROT_TX;

  if (dev->can.state == CAN_STATE_ERROR_WARNING ||
      dev->can.state == CAN_STATE_ERROR_PASSIVE) {
   cf->data[1] = (txerr > rxerr) ?
       CAN_ERR_CRTL_TX_PASSIVE : CAN_ERR_CRTL_RX_PASSIVE;
  }
 } else if (msg->type == CPC_MSG_TYPE_OVERRUN) {
  cf->can_id |= CAN_ERR_CRTL;
  cf->data[1] = CAN_ERR_CRTL_RX_OVERFLOW;

  stats->rx_over_errors++;
  stats->rx_errors++;
 }

 netif_rx(skb);

 stats->rx_packets++;
 stats->rx_bytes += cf->can_dlc;
}
