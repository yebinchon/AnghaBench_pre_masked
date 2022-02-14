
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct sierra_port_private {int rts_state; int dtr_state; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct usb_serial_port*) ;
 struct sierra_port_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2, struct file *VAR_3,
   unsigned int VAR_4, unsigned int VAR_5)
{
 struct usb_serial_port *VAR_6 = VAR_2->driver_data;
 struct sierra_port_private *VAR_7;

 VAR_7 = FUNC_1(VAR_6);

 if (VAR_4 & VAR_1)
  VAR_7->rts_state = 1;
 if (VAR_4 & VAR_0)
  VAR_7->dtr_state = 1;

 if (VAR_5 & VAR_1)
  VAR_7->rts_state = 0;
 if (VAR_5 & VAR_0)
  VAR_7->dtr_state = 0;
 return FUNC_0(VAR_6);
}
