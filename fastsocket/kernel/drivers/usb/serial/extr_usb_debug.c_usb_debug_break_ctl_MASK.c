
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty_struct*,struct usb_serial_port*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_2, int VAR_3)
{
 struct usb_serial_port *VAR_4 = VAR_2->driver_data;
 if (!VAR_3)
  return;
 FUNC_0(VAR_2, VAR_4, VAR_0, VAR_1);
}
