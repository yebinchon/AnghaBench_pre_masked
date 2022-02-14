
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; TYPE_1__* termios; scalar_t__ driver_data; } ;
struct m68k_serial {int dummy; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int FUNC_0 (struct m68k_serial*) ;
 int FUNC_1 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1, struct ktermios *VAR_2)
{
 struct m68k_serial *VAR_3 = (struct m68k_serial *)VAR_1->driver_data;

 FUNC_0(VAR_3);

 if ((VAR_2->c_cflag & VAR_0) &&
     !(VAR_1->termios->c_cflag & VAR_0)) {
  VAR_1->hw_stopped = 0;
  FUNC_1(VAR_1);
 }

}
