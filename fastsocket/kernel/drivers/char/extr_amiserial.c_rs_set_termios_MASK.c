
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; scalar_t__ hw_stopped; int flags; struct async_struct* driver_data; } ;
struct ktermios {unsigned int c_cflag; } ;
struct async_struct {int MCR; int open_wait; } ;
struct TYPE_2__ {unsigned int c_cflag; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct async_struct*,struct ktermios*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_6, struct ktermios *VAR_7)
{
 struct async_struct *VAR_8 = VAR_6->driver_data;
 unsigned long VAR_9;
 unsigned int VAR_10 = VAR_6->termios->c_cflag;

 FUNC_0(VAR_8, VAR_7);


 if ((VAR_7->c_cflag & VAR_0) &&
     !(VAR_10 & VAR_0)) {
  VAR_8->MCR &= ~(VAR_3|VAR_4);
  FUNC_2(VAR_9);
  FUNC_4(VAR_8->MCR);
  FUNC_1(VAR_9);
 }


 if (!(VAR_7->c_cflag & VAR_0) &&
     (VAR_10 & VAR_0)) {
  VAR_8->MCR |= VAR_3;
  if (!(VAR_6->termios->c_cflag & VAR_2) ||
      !FUNC_5(VAR_5, &VAR_6->flags)) {
   VAR_8->MCR |= VAR_4;
  }
  FUNC_2(VAR_9);
  FUNC_4(VAR_8->MCR);
  FUNC_1(VAR_9);
 }


 if ((VAR_7->c_cflag & VAR_2) &&
     !(VAR_6->termios->c_cflag & VAR_2)) {
  VAR_6->hw_stopped = 0;
  FUNC_3(VAR_6);
 }
}
