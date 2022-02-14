
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbpn_dev {int disconnected; int dev; struct usb_interface* intf; struct usb_interface* data_intf; struct usb_device* usb; } ;
struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct usb_interface*) ;
 struct usbpn_dev* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_device*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_1)
{
 struct usbpn_dev *VAR_2 = FUNC_2(VAR_1);
 struct usb_device *VAR_3 = VAR_2->usb;

 if (VAR_2->disconnected)
  return;

 VAR_2->disconnected = 1;
 FUNC_1(&VAR_0,
   (VAR_2->intf == VAR_1) ? VAR_2->data_intf : VAR_2->intf);
 FUNC_0(VAR_2->dev);
 FUNC_3(VAR_3);
}
