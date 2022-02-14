
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; TYPE_1__* termios; scalar_t__ driver_data; } ;
struct ktermios {int c_cflag; scalar_t__ c_ispeed; scalar_t__ c_ospeed; } ;
typedef int modem_info ;
struct TYPE_2__ {int c_cflag; scalar_t__ c_ispeed; scalar_t__ c_ospeed; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct tty_struct *VAR_1, struct ktermios *VAR_2)
{
 modem_info *VAR_3 = (modem_info *) VAR_1->driver_data;

 if (!VAR_2)
  FUNC_0(VAR_3);
 else {
  if (VAR_1->termios->c_cflag == VAR_2->c_cflag &&
      VAR_1->termios->c_ispeed == VAR_2->c_ispeed &&
      VAR_1->termios->c_ospeed == VAR_2->c_ospeed)
   return;
  FUNC_0(VAR_3);
  if ((VAR_2->c_cflag & VAR_0) &&
      !(VAR_1->termios->c_cflag & VAR_0))
   VAR_1->hw_stopped = 0;
 }
}
