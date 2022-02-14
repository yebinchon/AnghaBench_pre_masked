
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; } ;
struct sierra_port_private {int * in_urbs; } ;


 int FUNC_0 (int *) ;
 struct sierra_port_private* FUNC_1 (struct usb_serial_port*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_serial_port *VAR_0)
{
 int VAR_1;
 struct sierra_port_private *VAR_2 = FUNC_1(VAR_0);

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_2->in_urbs); VAR_1++)
  FUNC_2(VAR_2->in_urbs[VAR_1]);

 FUNC_2(VAR_0->interrupt_in_urb);
}
