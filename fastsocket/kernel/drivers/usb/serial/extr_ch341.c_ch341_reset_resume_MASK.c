
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int * port; } ;
struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct ch341_private {int dummy; } ;


 int FUNC_0 (struct usb_device*,struct ch341_private*) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 struct usb_serial* FUNC_2 (struct usb_interface*) ;
 struct ch341_private* FUNC_3 (int ) ;
 int FUNC_4 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_0)
{
 struct usb_device *VAR_1 = FUNC_1(VAR_0);
 struct usb_serial *VAR_2 = ((void*)0);
 struct ch341_private *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_3(VAR_2->port[0]);


 FUNC_0(VAR_1, VAR_3);

 FUNC_4(VAR_0);

 return 0;
}
