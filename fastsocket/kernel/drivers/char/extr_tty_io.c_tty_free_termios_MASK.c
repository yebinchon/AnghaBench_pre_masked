
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; TYPE_1__* driver; struct ktermios* termios; } ;
struct ktermios {int dummy; } ;
struct TYPE_2__ {int flags; int ** termios; } ;


 int VAR_0 ;
 int FUNC_0 (struct ktermios*) ;

void FUNC_1(struct tty_struct *VAR_1)
{
 struct ktermios *VAR_2;
 int VAR_3 = VAR_1->index;

 if (VAR_1->driver->flags & VAR_0) {

  VAR_2 = VAR_1->termios;
  VAR_1->driver->termios[VAR_3] = ((void*)0);
  FUNC_0(VAR_2);
 }
}
