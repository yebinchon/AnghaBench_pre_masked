
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct usb_serial_port*,struct file*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1 (struct tty_struct *VAR_0, struct file *VAR_1,
  unsigned int VAR_2, unsigned int VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_0->driver_data;
 return FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
