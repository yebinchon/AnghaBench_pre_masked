
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int index; struct ktermios* termios; struct ktermios* termios_locked; TYPE_1__* driver; } ;
struct ktermios {int c_ospeed; int c_ispeed; } ;
struct TYPE_2__ {struct ktermios** termios; int init_termios; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ktermios* FUNC_0 (int,int ) ;
 int FUNC_1 (struct ktermios*,int *,int) ;
 int FUNC_2 (struct ktermios*) ;
 int FUNC_3 (struct ktermios*) ;

int FUNC_4(struct tty_struct *VAR_2)
{
 struct ktermios *VAR_3;
 int VAR_4 = VAR_2->index;

 VAR_3 = VAR_2->driver->termios[VAR_4];
 if (VAR_3 == ((void*)0)) {
  VAR_3 = FUNC_0(sizeof(struct ktermios[2]), VAR_1);
  if (VAR_3 == ((void*)0))
   return -VAR_0;
  FUNC_1(VAR_3, &VAR_2->driver->init_termios,
      sizeof(struct ktermios));
  VAR_2->driver->termios[VAR_4] = VAR_3;
 }
 VAR_2->termios = VAR_3;
 VAR_2->termios_locked = VAR_3 + 1;


 VAR_2->termios->c_ispeed = FUNC_3(VAR_2->termios);
 VAR_2->termios->c_ospeed = FUNC_2(VAR_2->termios);
 return 0;
}
