
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ closing; TYPE_1__* termios; } ;
struct tty_port {int flags; int lock; int close_wait; int open_wait; scalar_t__ close_delay; scalar_t__ blocked_open; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct tty_struct*) ;
 int FUNC_5 (struct tty_port*) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct tty_port *VAR_3, struct tty_struct *VAR_4)
{
 unsigned long VAR_5;

 FUNC_4(VAR_4);

 if (VAR_4->termios->c_cflag & VAR_2)
  FUNC_5(VAR_3);

 FUNC_2(&VAR_3->lock, VAR_5);
 VAR_4->closing = 0;

 if (VAR_3->blocked_open) {
  FUNC_3(&VAR_3->lock, VAR_5);
  if (VAR_3->close_delay) {
   FUNC_1(
    FUNC_0(VAR_3->close_delay));
  }
  FUNC_2(&VAR_3->lock, VAR_5);
  FUNC_6(&VAR_3->open_wait);
 }
 VAR_3->flags &= ~(VAR_1 | VAR_0);
 FUNC_6(&VAR_3->close_wait);
 FUNC_3(&VAR_3->lock, VAR_5);
}
