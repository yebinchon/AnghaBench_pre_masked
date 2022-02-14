
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usb_ctrlrequest {int wLength; int wValue; int wIndex; int bRequest; int bRequestType; } ;
struct urb {unsigned int pipe; int setup_packet; int transfer_buffer_length; int transfer_buffer; int transfer_flags; int interval; int complete; struct sk_buff* context; int dev; } ;
struct sk_buff {int len; int data; scalar_t__ dev; } ;
struct TYPE_9__ {int sco_tx; int acl_tx; int cmd_tx; } ;
struct TYPE_7__ {int acl_num; int sco_num; } ;
struct hci_dev {int name; TYPE_4__ stat; TYPE_2__ conn_hash; int flags; struct btusb_data* driver_data; } ;
struct btusb_data {int udev; int tx_anchor; int waker; int deferred; TYPE_3__* isoc_tx_ep; TYPE_1__* bulk_tx_ep; int cmdreq_type; } ;
struct TYPE_10__ {int pkt_type; } ;
struct TYPE_8__ {int wMaxPacketSize; int bInterval; int bEndpointAddress; } ;
struct TYPE_6__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,struct urb*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;

 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct urb*,int ,int ) ;
 TYPE_5__* FUNC_4 (struct sk_buff*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct btusb_data*) ;
 int FUNC_6 (int ) ;
 struct usb_ctrlrequest* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 struct urb* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct urb*,int *) ;
 int FUNC_13 (struct urb*,int ,unsigned int,int ,int ,int ,struct sk_buff*) ;
 int FUNC_14 (struct urb*,int ,unsigned int,void*,int ,int ,int ,struct sk_buff*) ;
 int FUNC_15 (struct urb*) ;
 int FUNC_16 (int ) ;
 unsigned int FUNC_17 (int ,int ) ;
 unsigned int FUNC_18 (int ,int) ;
 unsigned int FUNC_19 (int ,int ) ;
 int FUNC_20 (struct urb*,int ) ;
 int FUNC_21 (struct urb*) ;

__attribute__((used)) static int FUNC_22(struct sk_buff *VAR_10)
{
 struct hci_dev *VAR_11 = (struct hci_dev *) VAR_10->dev;
 struct btusb_data *VAR_12 = VAR_11->driver_data;
 struct usb_ctrlrequest *VAR_13;
 struct urb *VAR_14;
 unsigned int VAR_15;
 int VAR_16;

 FUNC_0("%s", VAR_11->name);

 if (!FUNC_10(VAR_6, &VAR_11->flags))
  return -VAR_1;

 switch (FUNC_4(VAR_10)->pkt_type) {
 case 129:
  VAR_14 = FUNC_11(0, VAR_5);
  if (!VAR_14)
   return -VAR_4;

  VAR_13 = FUNC_7(sizeof(*VAR_13), VAR_5);
  if (!VAR_13) {
   FUNC_15(VAR_14);
   return -VAR_4;
  }

  VAR_13->bRequestType = VAR_12->cmdreq_type;
  VAR_13->bRequest = 0;
  VAR_13->wIndex = 0;
  VAR_13->wValue = 0;
  VAR_13->wLength = FUNC_2(VAR_10->len);

  VAR_15 = FUNC_18(VAR_12->udev, 0x00);

  FUNC_14(VAR_14, VAR_12->udev, VAR_15, (void *) VAR_13,
    VAR_10->data, VAR_10->len, VAR_9, VAR_10);

  VAR_11->stat.cmd_tx++;
  break;

 case 130:
  if (!VAR_12->bulk_tx_ep || VAR_11->conn_hash.acl_num < 1)
   return -VAR_3;

  VAR_14 = FUNC_11(0, VAR_5);
  if (!VAR_14)
   return -VAR_4;

  VAR_15 = FUNC_17(VAR_12->udev,
     VAR_12->bulk_tx_ep->bEndpointAddress);

  FUNC_13(VAR_14, VAR_12->udev, VAR_15,
    VAR_10->data, VAR_10->len, VAR_9, VAR_10);

  VAR_11->stat.acl_tx++;
  break;

 case 128:
  if (!VAR_12->isoc_tx_ep || VAR_11->conn_hash.sco_num < 1)
   return -VAR_3;

  VAR_14 = FUNC_11(VAR_0, VAR_5);
  if (!VAR_14)
   return -VAR_4;

  VAR_15 = FUNC_19(VAR_12->udev,
     VAR_12->isoc_tx_ep->bEndpointAddress);

  VAR_14->dev = VAR_12->udev;
  VAR_14->pipe = VAR_15;
  VAR_14->context = VAR_10;
  VAR_14->complete = VAR_8;
  VAR_14->interval = VAR_12->isoc_tx_ep->bInterval;

  VAR_14->transfer_flags = VAR_7;
  VAR_14->transfer_buffer = VAR_10->data;
  VAR_14->transfer_buffer_length = VAR_10->len;

  FUNC_3(VAR_14, VAR_10->len,
    FUNC_8(VAR_12->isoc_tx_ep->wMaxPacketSize));

  VAR_11->stat.sco_tx++;
  goto skip_waking;

 default:
  return -VAR_2;
 }

 VAR_16 = FUNC_5(VAR_12);
 if (VAR_16) {
  FUNC_12(VAR_14, &VAR_12->deferred);
  FUNC_9(&VAR_12->waker);
  VAR_16 = 0;
  goto done;
 }

skip_waking:
 FUNC_12(VAR_14, &VAR_12->tx_anchor);

 VAR_16 = FUNC_20(VAR_14, VAR_5);
 if (VAR_16 < 0) {
  FUNC_1("%s urb %p submission failed", VAR_11->name, VAR_14);
  FUNC_6(VAR_14->setup_packet);
  FUNC_21(VAR_14);
 } else {
  FUNC_16(VAR_12->udev);
 }

 FUNC_15(VAR_14);

done:
 return VAR_16;
}
