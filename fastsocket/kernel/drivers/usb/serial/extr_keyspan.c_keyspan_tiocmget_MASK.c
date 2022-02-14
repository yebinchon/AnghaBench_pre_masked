
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct keyspan_port_private {scalar_t__ ri_state; scalar_t__ dcd_state; scalar_t__ dsr_state; scalar_t__ cts_state; scalar_t__ dtr_state; scalar_t__ rts_state; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct keyspan_port_private* FUNC_0 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_6, struct file *VAR_7)
{
 struct usb_serial_port *VAR_8 = VAR_6->driver_data;
 struct keyspan_port_private *VAR_9 = FUNC_0(VAR_8);
 unsigned int VAR_10;

 VAR_10 = ((VAR_9->rts_state) ? VAR_5 : 0) |
  ((VAR_9->dtr_state) ? VAR_3 : 0) |
  ((VAR_9->cts_state) ? VAR_1 : 0) |
  ((VAR_9->dsr_state) ? VAR_2 : 0) |
  ((VAR_9->dcd_state) ? VAR_0 : 0) |
  ((VAR_9->ri_state) ? VAR_4 : 0);

 return VAR_10;
}
