
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; int number; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{






 struct usb_serial_port *VAR_1 = VAR_0->driver_data;
 FUNC_0("keyspan_pda_rx_throttle port %d", VAR_1->number);
 FUNC_1(VAR_1->interrupt_in_urb);
}
