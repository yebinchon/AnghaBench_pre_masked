
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct iuu_private {int tiostatus; int lock; } ;
struct file {int dummy; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct iuu_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0, struct file *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_0->driver_data;
 struct iuu_private *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4;
 int VAR_5;

 FUNC_0(&VAR_3->lock, VAR_4);
 VAR_5 = VAR_3->tiostatus;
 FUNC_1(&VAR_3->lock, VAR_4);

 return VAR_5;
}
