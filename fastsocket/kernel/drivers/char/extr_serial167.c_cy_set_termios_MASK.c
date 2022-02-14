
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; scalar_t__ stopped; int name; struct cyclades_port* driver_data; } ;
struct ktermios {int c_cflag; } ;
struct cyclades_port {int open_wait; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cyclades_port*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_2, struct ktermios *VAR_3)
{
 struct cyclades_port *VAR_4 = VAR_2->driver_data;





 if (VAR_2->termios->c_cflag == VAR_3->c_cflag)
  return;
 FUNC_0(VAR_4);

 if ((VAR_3->c_cflag & VAR_1) &&
     !(VAR_2->termios->c_cflag & VAR_1)) {
  VAR_2->stopped = 0;
  FUNC_1(VAR_2);
 }





}
