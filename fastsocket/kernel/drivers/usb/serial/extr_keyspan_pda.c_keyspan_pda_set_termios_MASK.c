
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {int termios; } ;
struct ktermios {int dummy; } ;
typedef scalar_t__ speed_t ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct usb_serial*,scalar_t__) ;
 int FUNC_2 (struct tty_struct*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct ktermios*) ;
 int FUNC_5 (int ,struct ktermios*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_0,
  struct usb_serial_port *VAR_1, struct ktermios *VAR_2)
{
 struct usb_serial *VAR_3 = VAR_1->serial;
 speed_t VAR_4;
 VAR_4 = FUNC_3(VAR_0);
 VAR_4 = FUNC_1(VAR_3, VAR_4);

 if (VAR_4 == 0) {
  FUNC_0("can't handle requested baud rate");

  VAR_4 = FUNC_4(VAR_2);
 }


 FUNC_5(VAR_0->termios, VAR_2);
 FUNC_2(VAR_0, VAR_4, VAR_4);
}
