
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6 {int dummy; } ;
struct usb_line6_toneport {struct usb_line6 line6; } ;
struct usb_interface {int dummy; } ;


 int FUNC_0 (struct usb_line6*) ;
 struct usb_line6_toneport* FUNC_1 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_2(struct usb_interface *VAR_0)
{
 struct usb_line6_toneport *VAR_1 = FUNC_1(VAR_0);
 struct usb_line6 *VAR_2;

 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = &VAR_1->line6;
 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_2);
}
