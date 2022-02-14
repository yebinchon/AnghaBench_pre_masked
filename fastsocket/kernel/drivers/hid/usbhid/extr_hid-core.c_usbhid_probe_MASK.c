
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usbhid_device {int lock; int io_retry; int restart_work; int reset_work; int wait; int ifnum; struct usb_interface* intf; struct hid_device* hid; } ;
struct usb_interface {int dev; TYPE_4__* altsetting; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_12__ {unsigned int bNumEndpoints; scalar_t__ bInterfaceProtocol; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_6__ desc; TYPE_1__* endpoint; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_11__ {int iSerialNumber; int idProduct; int idVendor; } ;
struct usb_device {char* product; TYPE_5__ descriptor; scalar_t__ manufacturer; } ;
struct TYPE_8__ {int * parent; } ;
struct hid_device {int vendor; int product; struct usbhid_device* driver_data; scalar_t__* uniq; scalar_t__* phys; scalar_t__* name; int type; int bus; TYPE_2__ dev; int hiddev_report_event; int hiddev_hid_event; int hiddev_disconnect; int hiddev_connect; int ff_init; int hid_output_raw_report; int * ll_driver; } ;
struct TYPE_9__ {int bInterfaceNumber; } ;
struct TYPE_10__ {TYPE_3__ desc; } ;
struct TYPE_7__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct hid_device*) ;
 struct hid_device* FUNC_6 () ;
 int FUNC_7 (struct hid_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_8 (int *) ;
 struct usb_device* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct usbhid_device*) ;
 struct usbhid_device* FUNC_11 (int,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,unsigned long) ;
 int FUNC_14 (scalar_t__*,int,char*,int,...) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (scalar_t__*,char*,int) ;
 int FUNC_17 (scalar_t__*,scalar_t__,int) ;
 size_t FUNC_18 (scalar_t__*) ;
 scalar_t__ FUNC_19 (int *) ;
 int VAR_14 ;
 int FUNC_20 (struct usb_device*,scalar_t__*,int) ;
 int FUNC_21 (struct usb_interface*,struct hid_device*) ;
 scalar_t__ FUNC_22 (struct usb_device*,int ,scalar_t__*,int) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_23(struct usb_interface *VAR_16, const struct usb_device_id *VAR_17)
{
 struct usb_host_interface *VAR_18 = VAR_16->cur_altsetting;
 struct usb_device *VAR_19 = FUNC_9(VAR_16);
 struct usbhid_device *VAR_20;
 struct hid_device *VAR_21;
 unsigned int VAR_22, VAR_23 = 0;
 size_t VAR_24;
 int VAR_25;

 FUNC_3("HID probe called for ifnum %d\n",
   VAR_16->altsetting->desc.bInterfaceNumber);

 for (VAR_22 = 0; VAR_22 < VAR_18->desc.bNumEndpoints; VAR_22++)
  if (FUNC_19(&VAR_18->endpoint[VAR_22].desc))
   VAR_23++;
 if (!VAR_23) {
  FUNC_4(&VAR_16->dev, "couldn't find an input interrupt "
    "endpoint\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_6();
 if (FUNC_1(VAR_21))
  return FUNC_2(VAR_21);

 FUNC_21(VAR_16, VAR_21);
 VAR_21->ll_driver = &VAR_14;
 VAR_21->hid_output_raw_report = VAR_15;
 VAR_21->ff_init = VAR_7;






 VAR_21->dev.parent = &VAR_16->dev;
 VAR_21->bus = VAR_0;
 VAR_21->vendor = FUNC_12(VAR_19->descriptor.idVendor);
 VAR_21->product = FUNC_12(VAR_19->descriptor.idProduct);
 VAR_21->name[0] = 0;
 if (VAR_16->cur_altsetting->desc.bInterfaceProtocol ==
   VAR_5)
  VAR_21->type = VAR_4;

 if (VAR_19->manufacturer)
  FUNC_17(VAR_21->name, VAR_19->manufacturer, sizeof(VAR_21->name));

 if (VAR_19->product) {
  if (VAR_19->manufacturer)
   FUNC_16(VAR_21->name, " ", sizeof(VAR_21->name));
  FUNC_16(VAR_21->name, VAR_19->product, sizeof(VAR_21->name));
 }

 if (!FUNC_18(VAR_21->name))
  FUNC_14(VAR_21->name, sizeof(VAR_21->name), "HID %04x:%04x",
    FUNC_12(VAR_19->descriptor.idVendor),
    FUNC_12(VAR_19->descriptor.idProduct));

 FUNC_20(VAR_19, VAR_21->phys, sizeof(VAR_21->phys));
 FUNC_16(VAR_21->phys, "/input", sizeof(VAR_21->phys));
 VAR_24 = FUNC_18(VAR_21->phys);
 if (VAR_24 < sizeof(VAR_21->phys) - 1)
  FUNC_14(VAR_21->phys + VAR_24, sizeof(VAR_21->phys) - VAR_24,
    "%d", VAR_16->altsetting[0].desc.bInterfaceNumber);

 if (FUNC_22(VAR_19, VAR_19->descriptor.iSerialNumber, VAR_21->uniq, 64) <= 0)
  VAR_21->uniq[0] = 0;

 VAR_20 = FUNC_11(sizeof(*VAR_20), VAR_3);
 if (VAR_20 == ((void*)0)) {
  VAR_25 = -VAR_2;
  goto err;
 }

 VAR_21->driver_data = VAR_20;
 VAR_20->hid = VAR_21;
 VAR_20->intf = VAR_16;
 VAR_20->ifnum = VAR_18->desc.bInterfaceNumber;

 FUNC_8(&VAR_20->wait);
 FUNC_0(&VAR_20->reset_work, VAR_8);
 FUNC_0(&VAR_20->restart_work, VAR_6);
 FUNC_13(&VAR_20->io_retry, VAR_9, (unsigned long) VAR_21);
 FUNC_15(&VAR_20->lock);

 VAR_25 = FUNC_5(VAR_21);
 if (VAR_25) {
  if (VAR_25 != -VAR_1)
   FUNC_4(&VAR_16->dev, "can't add hid device: %d\n", VAR_25);
  goto err_free;
 }

 return 0;
err_free:
 FUNC_10(VAR_20);
err:
 FUNC_7(VAR_21);
 return VAR_25;
}
