
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {struct usb_interface* intf; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usbhid_device *VAR_0)
{
 struct usb_interface *VAR_1 = VAR_0->intf;

 FUNC_1(FUNC_0(VAR_1));
}
