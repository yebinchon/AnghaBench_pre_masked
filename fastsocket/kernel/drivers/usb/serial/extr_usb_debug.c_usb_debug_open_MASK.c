
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int bulk_out_size; } ;
struct tty_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*,struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1, struct usb_serial_port *VAR_2)
{
 VAR_2->bulk_out_size = VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
