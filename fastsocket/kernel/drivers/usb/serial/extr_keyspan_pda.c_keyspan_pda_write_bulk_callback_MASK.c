
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {scalar_t__ write_urb_busy; } ;
struct urb {struct usb_serial_port* context; } ;
struct keyspan_pda_private {int wakeup_work; } ;


 int FUNC_0 (int *) ;
 struct keyspan_pda_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->context;
 struct keyspan_pda_private *VAR_2;

 VAR_1->write_urb_busy = 0;
 VAR_2 = FUNC_1(VAR_1);


 FUNC_0(&VAR_2->wakeup_work);
}
