
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_9__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct net_device {int trans_start; TYPE_3__ stats; } ;
struct hso_net {TYPE_6__* parent; TYPE_4__* mux_bulk_tx_urb; int mux_bulk_tx_buf; TYPE_1__* out_endp; struct sk_buff* skb_tx_buf; } ;
typedef int netdev_tx_t ;
struct TYPE_11__ {TYPE_2__* interface; int usb; } ;
struct TYPE_10__ {int transfer_flags; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int bEndpointAddress; } ;


 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (TYPE_6__*) ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 struct hso_net* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (TYPE_4__*,int ,int ,int ,scalar_t__,int ,struct hso_net*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (TYPE_4__*,int ) ;
 int VAR_6 ;

__attribute__((used)) static netdev_tx_t FUNC_12(struct sk_buff *VAR_7,
         struct net_device *VAR_8)
{
 struct hso_net *VAR_9 = FUNC_6(VAR_8);
 int VAR_10;


 FUNC_8(VAR_8);
 if (FUNC_4(VAR_9->parent) == -VAR_0) {
  VAR_9->skb_tx_buf = VAR_7;
  return VAR_3;
 }


 FUNC_1(VAR_7->data, VAR_7->len);

 FUNC_5(VAR_9->mux_bulk_tx_buf, VAR_7->data, VAR_7->len);
 FUNC_0("len: %d/%d", VAR_7->len, VAR_2);


 FUNC_9(VAR_9->mux_bulk_tx_urb,
     VAR_9->parent->usb,
     FUNC_10(VAR_9->parent->usb,
       VAR_9->out_endp->
       bEndpointAddress & 0x7F),
     VAR_9->mux_bulk_tx_buf, VAR_7->len, VAR_6,
     VAR_9);


 VAR_9->mux_bulk_tx_urb->transfer_flags |= VAR_4;


 VAR_10 = FUNC_11(VAR_9->mux_bulk_tx_urb, VAR_1);
 if (VAR_10) {
  FUNC_3(&VAR_9->parent->interface->dev,
   "failed mux_bulk_tx_urb %d", VAR_10);
  VAR_8->stats.tx_errors++;
  FUNC_7(VAR_8);
 } else {
  VAR_8->stats.tx_packets++;
  VAR_8->stats.tx_bytes += VAR_7->len;

  VAR_8->trans_start = VAR_5;
 }
 FUNC_2(VAR_7);

 return VAR_3;
}
