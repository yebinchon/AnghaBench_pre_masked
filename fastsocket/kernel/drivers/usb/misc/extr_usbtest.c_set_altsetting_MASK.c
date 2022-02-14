
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usbtest_dev {struct usb_interface* intf; } ;
struct usb_interface {TYPE_2__* altsetting; } ;
struct usb_device {int dummy; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_device*,int ,int) ;

__attribute__((used)) static int FUNC_2 (struct usbtest_dev *VAR_1, int VAR_2)
{
 struct usb_interface *VAR_3 = VAR_1->intf;
 struct usb_device *VAR_4;

 if (VAR_2 < 0 || VAR_2 >= 256)
  return -VAR_0;

 VAR_4 = FUNC_0 (VAR_3);
 return FUNC_1 (VAR_4,
   VAR_3->altsetting [0].desc.bInterfaceNumber,
   VAR_2);
}
