
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct usb_interface {size_t minor; TYPE_3__* altsetting; int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_9__ {int bNumConfigurations; int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;
typedef TYPE_4__* pdabusb_t ;
struct TYPE_12__ {size_t devnum; struct usb_device* usbdev; int mutex; scalar_t__ remove_pending; } ;
struct TYPE_10__ {int bInterfaceNumber; } ;
struct TYPE_11__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int *) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int *,char*) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usb_interface*,int *) ;
 scalar_t__ FUNC_9 (struct usb_device*) ;
 scalar_t__ FUNC_10 (struct usb_device*,int ,int ) ;
 int FUNC_11 (struct usb_interface*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_12 (struct usb_interface *VAR_5,
    const struct usb_device_id *VAR_6)
{
 struct usb_device *VAR_7 = FUNC_4(VAR_5);
 int VAR_8;
 pdabusb_t VAR_9;

 FUNC_2("dabusb: probe: vendor id 0x%x, device id 0x%x ifnum:%d",
     FUNC_5(VAR_7->descriptor.idVendor),
     FUNC_5(VAR_7->descriptor.idProduct),
     VAR_5->altsetting->desc.bInterfaceNumber);


 if (VAR_7->descriptor.bNumConfigurations != 1)
  return -VAR_0;

 if (VAR_5->altsetting->desc.bInterfaceNumber != VAR_2 &&
     FUNC_5(VAR_7->descriptor.idProduct) == 0x9999)
  return -VAR_0;



 VAR_9 = &VAR_3[VAR_5->minor];

 FUNC_6(&VAR_9->mutex);
 VAR_9->remove_pending = 0;
 VAR_9->usbdev = VAR_7;
 VAR_9->devnum = VAR_5->minor;

 if (FUNC_9 (VAR_7) < 0) {
  FUNC_3(&VAR_5->dev, "reset_configuration failed\n");
  goto reject;
 }
 if (FUNC_5(VAR_7->descriptor.idProduct) == 0x2131) {
  FUNC_1 (VAR_9, ((void*)0));
  goto reject;
 }
 else {
  FUNC_0 (VAR_9, ((void*)0));

  if (FUNC_10 (VAR_9->usbdev, VAR_2, 0) < 0) {
   FUNC_3(&VAR_5->dev, "set_interface failed\n");
   goto reject;
  }
 }
 FUNC_2("bound to interface: %d", VAR_5->altsetting->desc.bInterfaceNumber);
 FUNC_11 (VAR_5, VAR_9);
 FUNC_7(&VAR_9->mutex);

 VAR_8 = FUNC_8(VAR_5, &VAR_4);
 if (VAR_8) {
  FUNC_11 (VAR_5, ((void*)0));
  return -VAR_1;
 }

 return 0;

      reject:
 FUNC_7(&VAR_9->mutex);
 VAR_9->usbdev = ((void*)0);
 return -VAR_0;
}
