
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; } ;
struct tty_struct {int dummy; } ;
struct ktermios {int dummy; } ;
struct ch341_private {unsigned int baud_rate; int line_control; int lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ch341_private*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int FUNC_5 (struct tty_struct*) ;
 struct ch341_private* FUNC_6 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_2,
  struct usb_serial_port *VAR_3, struct ktermios *VAR_4)
{
 struct ch341_private *VAR_5 = FUNC_6(VAR_3);
 unsigned VAR_6;
 unsigned long VAR_7;

 FUNC_2("ch341_set_termios()");

 VAR_6 = FUNC_5(VAR_2);

 VAR_5->baud_rate = VAR_6;

 if (VAR_6) {
  FUNC_3(&VAR_5->lock, VAR_7);
  VAR_5->line_control |= (VAR_0 | VAR_1);
  FUNC_4(&VAR_5->lock, VAR_7);
  FUNC_0(VAR_3->serial->dev, VAR_5);
 } else {
  FUNC_3(&VAR_5->lock, VAR_7);
  VAR_5->line_control &= ~(VAR_0 | VAR_1);
  FUNC_4(&VAR_5->lock, VAR_7);
 }

 FUNC_1(VAR_3->serial->dev, VAR_5->line_control);






}
