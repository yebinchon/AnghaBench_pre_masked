
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct urb {int transfer_dma; int transfer_flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device_stats {int tx_dropped; } ;
struct TYPE_6__ {int parent; } ;
struct net_device {int trans_start; TYPE_3__ dev; struct net_device_stats stats; } ;
struct ems_usb {int free_slots; int active_tx_urbs; int udev; int tx_submitted; struct ems_tx_urb_context* tx_contexts; } ;
struct ems_tx_urb_context {int echo_index; int dlc; struct ems_usb* dev; } ;
struct TYPE_4__ {int id; int length; int * msg; } ;
struct TYPE_5__ {TYPE_1__ can_msg; } ;
struct ems_cpc_msg {TYPE_2__ msg; void* length; int type; } ;
struct cpc_can_msg {int dummy; } ;
struct can_frame {int can_id; int can_dlc; int * data; } ;
typedef int netdev_tx_t ;


 int CAN_EFF_FLAG ;
 int CAN_ERR_MASK ;
 int CAN_RTR_FLAG ;
 void* CPC_CAN_MSG_MIN_SIZE ;
 int CPC_CMD_TYPE_CAN_FRAME ;
 int CPC_CMD_TYPE_EXT_CAN_FRAME ;
 int CPC_CMD_TYPE_EXT_RTR_FRAME ;
 int CPC_CMD_TYPE_RTR_FRAME ;
 int CPC_HEADER_SIZE ;
 int CPC_MSG_HEADER_LEN ;
 int ENODEV ;
 int GFP_ATOMIC ;
 int MAX_TX_URBS ;
 int NETDEV_TX_BUSY ;
 int NETDEV_TX_OK ;
 int URB_NO_TRANSFER_DMA_MAP ;
 int atomic_dec (int *) ;
 int atomic_inc (int *) ;
 int atomic_read (int *) ;
 int can_free_echo_skb (struct net_device*,int) ;
 int can_put_echo_skb (struct sk_buff*,struct net_device*,int) ;
 int cpu_to_le32 (int) ;
 int dev_err (int ,char*) ;
 int dev_kfree_skb (struct sk_buff*) ;
 int dev_warn (int ,char*,...) ;
 int ems_usb_write_bulk_callback ;
 int jiffies ;
 struct ems_usb* netdev_priv (struct net_device*) ;
 int netif_device_detach (struct net_device*) ;
 int netif_stop_queue (struct net_device*) ;
 scalar_t__ unlikely (int) ;
 struct urb* usb_alloc_urb (int ,int ) ;
 int usb_anchor_urb (struct urb*,int *) ;
 int * usb_buffer_alloc (int ,size_t,int ,int *) ;
 int usb_buffer_free (int ,size_t,int *,int ) ;
 int usb_fill_bulk_urb (struct urb*,int ,int ,int *,size_t,int ,struct ems_tx_urb_context*) ;
 int usb_free_urb (struct urb*) ;
 int usb_sndbulkpipe (int ,int) ;
 int usb_submit_urb (struct urb*,int ) ;
 int usb_unanchor_urb (struct urb*) ;

__attribute__((used)) static netdev_tx_t ems_usb_start_xmit(struct sk_buff *skb, struct net_device *netdev)
{
 struct ems_usb *dev = netdev_priv(netdev);
 struct ems_tx_urb_context *context = ((void*)0);
 struct net_device_stats *stats = &netdev->stats;
 struct can_frame *cf = (struct can_frame *)skb->data;
 struct ems_cpc_msg *msg;
 struct urb *urb;
 u8 *buf;
 int i, err;
 size_t size = CPC_HEADER_SIZE + CPC_MSG_HEADER_LEN
   + sizeof(struct cpc_can_msg);


 urb = usb_alloc_urb(0, GFP_ATOMIC);
 if (!urb) {
  dev_err(netdev->dev.parent, "No memory left for URBs\n");
  goto nomem;
 }

 buf = usb_buffer_alloc(dev->udev, size, GFP_ATOMIC, &urb->transfer_dma);
 if (!buf) {
  dev_err(netdev->dev.parent, "No memory left for USB buffer\n");
  usb_free_urb(urb);
  goto nomem;
 }

 msg = (struct ems_cpc_msg *)&buf[CPC_HEADER_SIZE];

 msg->msg.can_msg.id = cf->can_id & CAN_ERR_MASK;
 msg->msg.can_msg.length = cf->can_dlc;

 if (cf->can_id & CAN_RTR_FLAG) {
  msg->type = cf->can_id & CAN_EFF_FLAG ?
   CPC_CMD_TYPE_EXT_RTR_FRAME : CPC_CMD_TYPE_RTR_FRAME;

  msg->length = CPC_CAN_MSG_MIN_SIZE;
 } else {
  msg->type = cf->can_id & CAN_EFF_FLAG ?
   CPC_CMD_TYPE_EXT_CAN_FRAME : CPC_CMD_TYPE_CAN_FRAME;

  for (i = 0; i < cf->can_dlc; i++)
   msg->msg.can_msg.msg[i] = cf->data[i];

  msg->length = CPC_CAN_MSG_MIN_SIZE + cf->can_dlc;
 }


 msg->msg.can_msg.id = cpu_to_le32(msg->msg.can_msg.id);

 for (i = 0; i < MAX_TX_URBS; i++) {
  if (dev->tx_contexts[i].echo_index == MAX_TX_URBS) {
   context = &dev->tx_contexts[i];
   break;
  }
 }





 if (!context) {
  usb_unanchor_urb(urb);
  usb_buffer_free(dev->udev, size, buf, urb->transfer_dma);

  dev_warn(netdev->dev.parent, "couldn't find free context\n");

  return NETDEV_TX_BUSY;
 }

 context->dev = dev;
 context->echo_index = i;
 context->dlc = cf->can_dlc;

 usb_fill_bulk_urb(urb, dev->udev, usb_sndbulkpipe(dev->udev, 2), buf,
     size, ems_usb_write_bulk_callback, context);
 urb->transfer_flags |= URB_NO_TRANSFER_DMA_MAP;
 usb_anchor_urb(urb, &dev->tx_submitted);

 can_put_echo_skb(skb, netdev, context->echo_index);

 atomic_inc(&dev->active_tx_urbs);

 err = usb_submit_urb(urb, GFP_ATOMIC);
 if (unlikely(err)) {
  can_free_echo_skb(netdev, context->echo_index);

  usb_unanchor_urb(urb);
  usb_buffer_free(dev->udev, size, buf, urb->transfer_dma);
  dev_kfree_skb(skb);

  atomic_dec(&dev->active_tx_urbs);

  if (err == -ENODEV) {
   netif_device_detach(netdev);
  } else {
   dev_warn(netdev->dev.parent, "failed tx_urb %d\n", err);

   stats->tx_dropped++;
  }
 } else {
  netdev->trans_start = jiffies;


  if (atomic_read(&dev->active_tx_urbs) >= MAX_TX_URBS ||
      dev->free_slots < 5) {
   netif_stop_queue(netdev);
  }
 }





 usb_free_urb(urb);

 return NETDEV_TX_OK;

nomem:
 if (skb)
  dev_kfree_skb(skb);

 stats->tx_dropped++;

 return NETDEV_TX_OK;
}
