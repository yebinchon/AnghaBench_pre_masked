
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct aircable_private {int tx_buf; } ;


 int FUNC_0 (int ) ;
 struct aircable_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->driver_data;
 struct aircable_private *VAR_2 = FUNC_1(VAR_1);
 return FUNC_0(VAR_2->tx_buf);
}
