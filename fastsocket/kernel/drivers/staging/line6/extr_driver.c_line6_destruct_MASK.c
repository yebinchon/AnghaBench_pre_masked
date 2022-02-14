
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {int urb_listen; struct usb_line6* buffer_listen; struct usb_line6* buffer_message; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (struct usb_line6*) ;
 int FUNC_1 (int ) ;
 struct usb_line6* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct usb_line6 *VAR_1;

 if (VAR_0 == ((void*)0))
  return;
 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0))
  return;


 FUNC_0(VAR_1->buffer_message);
 FUNC_0(VAR_1->buffer_listen);


 FUNC_1(VAR_1->urb_listen);


 FUNC_3(VAR_0, ((void*)0));


 FUNC_0(VAR_1);
}
