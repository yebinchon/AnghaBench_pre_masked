
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbhid_device {int lock; int iofl; } ;
struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct usb_device {int dummy; } ;
struct hid_device {struct usbhid_device* driver_data; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct usb_device*,int ,int ,int ) ;
 int FUNC_3 (struct hid_device*) ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct hid_device* FUNC_7 (struct usb_interface*) ;
 int FUNC_8 (struct usbhid_device*) ;

__attribute__((used)) static int FUNC_9(struct usb_interface *VAR_1)
{
 struct usb_device *VAR_2 = FUNC_4 (VAR_1);
 struct hid_device *VAR_3 = FUNC_7(VAR_1);
 struct usbhid_device *VAR_4 = VAR_3->driver_data;
 int VAR_5;

 FUNC_5(&VAR_4->lock);
 FUNC_0(VAR_0, &VAR_4->iofl);
 FUNC_6(&VAR_4->lock);
 FUNC_2(VAR_2, VAR_1->cur_altsetting->desc.bInterfaceNumber, 0, 0);
 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 < 0)
  FUNC_1(VAR_3);
 FUNC_8(VAR_4);

 return 0;
}
