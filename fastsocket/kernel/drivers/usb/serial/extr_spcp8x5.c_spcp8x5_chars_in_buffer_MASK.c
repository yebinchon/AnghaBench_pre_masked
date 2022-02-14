
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct spcp8x5_private {int lock; int buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct spcp8x5_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_0)
{
 struct usb_serial_port *VAR_1 = VAR_0->driver_data;
 struct spcp8x5_private *VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = 0;
 unsigned long VAR_4;

 FUNC_1(&VAR_2->lock, VAR_4);
 VAR_3 = FUNC_0(VAR_2->buf);
 FUNC_2(&VAR_2->lock, VAR_4);

 return VAR_3;
}
