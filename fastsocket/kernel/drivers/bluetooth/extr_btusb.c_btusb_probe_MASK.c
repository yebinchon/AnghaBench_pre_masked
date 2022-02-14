
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int driver_info; } ;
struct TYPE_8__ {int bcdDevice; } ;
struct usb_device {TYPE_4__ descriptor; } ;
struct sk_buff {int dummy; } ;
struct hci_dev {int driver_init; int quirks; int owner; int notify; int destruct; int send; int flush; int close; int open; struct btusb_data* driver_data; int type; } ;
struct btusb_data {int * isoc; struct usb_device* udev; int cmdreq_type; struct hci_dev* hdev; int deferred; int isoc_anchor; int bulk_anchor; int intr_anchor; int tx_anchor; int txlock; int waker; int work; int lock; struct usb_interface* intf; struct usb_endpoint_descriptor* bulk_rx_ep; struct usb_endpoint_descriptor* bulk_tx_ep; struct usb_endpoint_descriptor* intr_ep; } ;
typedef int cmd ;
struct TYPE_5__ {scalar_t__ bInterfaceNumber; int bNumEndpoints; } ;
struct TYPE_7__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,struct usb_interface*,struct usb_device_id const*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct hci_dev*,int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 struct hci_dev* FUNC_4 () ;
 int FUNC_5 (struct hci_dev*) ;
 int FUNC_6 (struct hci_dev*) ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 int FUNC_7 (int *) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (struct btusb_data*) ;
 struct btusb_data* FUNC_10 (int,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,unsigned char*,int) ;
 int VAR_32 ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (int *,struct sk_buff*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int *,struct btusb_data*) ;
 scalar_t__ FUNC_18 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_19 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_20 (struct usb_endpoint_descriptor*) ;
 int * FUNC_21 (struct usb_device*,int) ;
 struct usb_device_id* FUNC_22 (struct usb_interface*,int ) ;
 int FUNC_23 (struct usb_interface*,struct btusb_data*) ;

__attribute__((used)) static int FUNC_24(struct usb_interface *VAR_33,
    const struct usb_device_id *VAR_34)
{
 struct usb_endpoint_descriptor *VAR_35;
 struct btusb_data *VAR_36;
 struct hci_dev *VAR_37;
 int VAR_38, VAR_39;

 FUNC_0("intf %p id %p", VAR_33, VAR_34);


 if (VAR_33->cur_altsetting->desc.bInterfaceNumber != 0)
  return -VAR_7;

 if (!VAR_34->driver_info) {
  const struct usb_device_id *VAR_40;
  VAR_40 = FUNC_22(VAR_33, VAR_17);
  if (VAR_40)
   VAR_34 = VAR_40;
 }

 if (VAR_34->driver_info == VAR_4)
  return -VAR_7;

 if (VAR_30 && VAR_34->driver_info & VAR_3)
  return -VAR_7;

 if (VAR_29 && VAR_34->driver_info & VAR_2)
  return -VAR_7;

 if (VAR_31 && VAR_34->driver_info & VAR_5)
  return -VAR_7;

 VAR_36 = FUNC_10(sizeof(*VAR_36), VAR_9);
 if (!VAR_36)
  return -VAR_8;

 for (VAR_38 = 0; VAR_38 < VAR_33->cur_altsetting->desc.bNumEndpoints; VAR_38++) {
  VAR_35 = &VAR_33->cur_altsetting->endpoint[VAR_38].desc;

  if (!VAR_36->intr_ep && FUNC_20(VAR_35)) {
   VAR_36->intr_ep = VAR_35;
   continue;
  }

  if (!VAR_36->bulk_tx_ep && FUNC_19(VAR_35)) {
   VAR_36->bulk_tx_ep = VAR_35;
   continue;
  }

  if (!VAR_36->bulk_rx_ep && FUNC_18(VAR_35)) {
   VAR_36->bulk_rx_ep = VAR_35;
   continue;
  }
 }

 if (!VAR_36->intr_ep || !VAR_36->bulk_tx_ep || !VAR_36->bulk_rx_ep) {
  FUNC_9(VAR_36);
  return -VAR_7;
 }

 VAR_36->cmdreq_type = VAR_15;

 VAR_36->udev = FUNC_8(VAR_33);
 VAR_36->intf = VAR_33;

 FUNC_16(&VAR_36->lock);

 FUNC_1(&VAR_36->work, VAR_26);
 FUNC_1(&VAR_36->waker, VAR_25);
 FUNC_16(&VAR_36->txlock);

 FUNC_7(&VAR_36->tx_anchor);
 FUNC_7(&VAR_36->intr_anchor);
 FUNC_7(&VAR_36->bulk_anchor);
 FUNC_7(&VAR_36->isoc_anchor);
 FUNC_7(&VAR_36->deferred);

 VAR_37 = FUNC_4();
 if (!VAR_37) {
  FUNC_9(VAR_36);
  return -VAR_8;
 }

 VAR_37->type = VAR_13;
 VAR_37->driver_data = VAR_36;

 VAR_36->hdev = VAR_37;

 FUNC_2(VAR_37, &VAR_33->dev);

 VAR_37->open = VAR_23;
 VAR_37->close = VAR_18;
 VAR_37->flush = VAR_21;
 VAR_37->send = VAR_24;
 VAR_37->destruct = VAR_19;
 VAR_37->notify = VAR_22;

 VAR_37->owner = VAR_14;


 VAR_36->isoc = FUNC_21(VAR_36->udev, 1);

 if (!VAR_32)
  FUNC_13(VAR_11, &VAR_37->quirks);

 if (VAR_28 || VAR_34->driver_info & VAR_6) {
  if (!VAR_27)
   FUNC_13(VAR_10, &VAR_37->quirks);
 }

 if (VAR_34->driver_info & VAR_1)
  VAR_36->isoc = ((void*)0);

 if (VAR_34->driver_info & VAR_3) {
  VAR_36->cmdreq_type = VAR_16;
  FUNC_13(VAR_11, &VAR_37->quirks);
 }

 if (VAR_34->driver_info & VAR_2) {
  struct usb_device *VAR_41 = VAR_36->udev;


  if (FUNC_11(VAR_41->descriptor.bcdDevice) < 0x117)
   FUNC_13(VAR_11, &VAR_37->quirks);
 }

 if (VAR_34->driver_info & VAR_5) {
  struct usb_device *VAR_42 = VAR_36->udev;


  if (FUNC_11(VAR_42->descriptor.bcdDevice) > 0x997)
   FUNC_13(VAR_12, &VAR_37->quirks);

  VAR_36->isoc = ((void*)0);
 }

 if (VAR_34->driver_info & VAR_0) {
  unsigned char VAR_43[] = { 0x3b, 0xfc, 0x01, 0x00 };
  struct sk_buff *VAR_44;

  VAR_44 = FUNC_3(sizeof(VAR_43), VAR_9);
  if (VAR_44) {
   FUNC_12(FUNC_14(VAR_44, sizeof(VAR_43)), VAR_43, sizeof(VAR_43));
   FUNC_15(&VAR_37->driver_init, VAR_44);
  }
 }

 if (VAR_36->isoc) {
  VAR_39 = FUNC_17(&VAR_20,
       VAR_36->isoc, VAR_36);
  if (VAR_39 < 0) {
   FUNC_5(VAR_37);
   FUNC_9(VAR_36);
   return VAR_39;
  }
 }

 VAR_39 = FUNC_6(VAR_37);
 if (VAR_39 < 0) {
  FUNC_5(VAR_37);
  FUNC_9(VAR_36);
  return VAR_39;
 }

 FUNC_23(VAR_33, VAR_36);

 return 0;
}
