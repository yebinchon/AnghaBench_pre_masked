
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct usb_interface {int dummy; } ;
struct opticon_private {int bulk_read_urb; } ;
typedef int pm_message_t ;


 struct usb_serial* FUNC_0 (struct usb_interface*) ;
 struct opticon_private* FUNC_1 (struct usb_serial*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_0, pm_message_t VAR_1)
{
 struct usb_serial *VAR_2 = FUNC_0(VAR_0);
 struct opticon_private *VAR_3 = FUNC_1(VAR_2);

 FUNC_2(VAR_3->bulk_read_urb);
 return 0;
}
