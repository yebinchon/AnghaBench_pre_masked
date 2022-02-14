
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; TYPE_1__* termios; int name; struct specialix_port* driver_data; } ;
struct specialix_port {int lock; } ;
struct specialix_board {int dummy; } ;
struct ktermios {int c_cflag; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 struct specialix_board* FUNC_0 (struct specialix_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct specialix_board*,struct specialix_port*) ;
 scalar_t__ FUNC_4 (struct specialix_port*,int ,char*) ;
 int FUNC_5 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_6(struct tty_struct *VAR_1,
     struct ktermios *VAR_2)
{
 struct specialix_port *VAR_3 = VAR_1->driver_data;
 unsigned long VAR_4;
 struct specialix_board *VAR_5;

 if (FUNC_4(VAR_3, VAR_1->name, "sx_set_termios"))
  return;

 VAR_5 = FUNC_0(VAR_3);
 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_3(FUNC_0(VAR_3), VAR_3);
 FUNC_2(&VAR_3->lock, VAR_4);

 if ((VAR_2->c_cflag & VAR_0) &&
     !(VAR_1->termios->c_cflag & VAR_0)) {
  VAR_1->hw_stopped = 0;
  FUNC_5(VAR_1);
 }
}
