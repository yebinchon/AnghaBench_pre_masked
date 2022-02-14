
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;
struct parport_uss720_private {int ref_count; int * pp; struct usb_device* usbdev; } ;
struct parport {struct parport_uss720_private* private_data; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct parport_uss720_private*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct parport*) ;
 int FUNC_4 (struct parport*) ;
 struct parport* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_1)
{
 struct parport *VAR_2 = FUNC_5(VAR_1);
 struct parport_uss720_private *VAR_3;
 struct usb_device *VAR_4;

 FUNC_0("disconnect");
 FUNC_6(VAR_1, ((void*)0));
 if (VAR_2) {
  VAR_3 = VAR_2->private_data;
  VAR_4 = VAR_3->usbdev;
  VAR_3->usbdev = ((void*)0);
  VAR_3->pp = ((void*)0);
  FUNC_0("parport_remove_port");
  FUNC_4(VAR_2);
  FUNC_3(VAR_2);
  FUNC_1(VAR_3);
  FUNC_2(&VAR_3->ref_count, VAR_0);
 }
 FUNC_0("disconnect done");
}
