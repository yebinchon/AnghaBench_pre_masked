
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dummy; } ;
struct tty_struct {TYPE_1__* termios; struct usb_serial_port* driver_data; } ;
struct TYPE_2__ {unsigned int c_cflag; } ;


 int FUNC_0 (struct usb_serial_port*,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct tty_struct*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0,
 struct usb_serial_port *VAR_1)
{
 unsigned int VAR_2;

 if (VAR_0) {
  FUNC_0(VAR_0->driver_data,
   &VAR_0->termios->c_cflag, &VAR_2);
  FUNC_1(VAR_0, VAR_2, VAR_2);
 }

 else {
  unsigned int VAR_3;
  VAR_3 = 0;
  FUNC_0(VAR_1, &VAR_3, &VAR_2);
 }
}
