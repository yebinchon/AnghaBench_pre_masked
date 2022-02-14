
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; TYPE_2__* cur_altsetting; } ;
struct usb_device_id {int dummy; } ;
struct hci_dev {int quirks; int owner; int destruct; int send; int flush; int close; int open; struct bpa10x_data* driver_data; int type; } ;
struct bpa10x_data {struct hci_dev* hdev; int rx_anchor; int tx_anchor; int udev; } ;
struct TYPE_3__ {scalar_t__ bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int FUNC_0 (char*,struct usb_interface*,struct usb_device_id const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hci_dev*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct hci_dev* FUNC_2 () ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct bpa10x_data*) ;
 struct bpa10x_data* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct usb_interface*,struct bpa10x_data*) ;

__attribute__((used)) static int FUNC_11(struct usb_interface *VAR_11, const struct usb_device_id *VAR_12)
{
 struct bpa10x_data *VAR_13;
 struct hci_dev *VAR_14;
 int VAR_15;

 FUNC_0("intf %p id %p", VAR_11, VAR_12);

 if (VAR_11->cur_altsetting->desc.bInterfaceNumber != 0)
  return -VAR_0;

 VAR_13 = FUNC_8(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->udev = FUNC_6(VAR_11);

 FUNC_5(&VAR_13->tx_anchor);
 FUNC_5(&VAR_13->rx_anchor);

 VAR_14 = FUNC_2();
 if (!VAR_14) {
  FUNC_7(VAR_13);
  return -VAR_1;
 }

 VAR_14->type = VAR_4;
 VAR_14->driver_data = VAR_13;

 VAR_13->hdev = VAR_14;

 FUNC_1(VAR_14, &VAR_11->dev);

 VAR_14->open = VAR_9;
 VAR_14->close = VAR_6;
 VAR_14->flush = VAR_8;
 VAR_14->send = VAR_10;
 VAR_14->destruct = VAR_7;

 VAR_14->owner = VAR_5;

 FUNC_9(VAR_3, &VAR_14->quirks);

 VAR_15 = FUNC_4(VAR_14);
 if (VAR_15 < 0) {
  FUNC_3(VAR_14);
  FUNC_7(VAR_13);
  return VAR_15;
 }

 FUNC_10(VAR_11, VAR_13);

 return 0;
}
