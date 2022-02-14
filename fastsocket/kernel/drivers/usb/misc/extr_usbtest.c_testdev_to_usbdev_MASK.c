
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {int intf; } ;
struct usb_device {int dummy; } ;


 struct usb_device* FUNC_0 (int ) ;

__attribute__((used)) static struct usb_device *FUNC_1 (struct usbtest_dev *VAR_0)
{
 return FUNC_0 (VAR_0->intf);
}
