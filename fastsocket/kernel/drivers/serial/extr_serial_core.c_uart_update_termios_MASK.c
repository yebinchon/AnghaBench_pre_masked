
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct tty_struct* tty; } ;
struct uart_state {struct uart_port* uart_port; TYPE_2__ port; } ;
struct uart_port {TYPE_3__* cons; } ;
struct tty_struct {int flags; TYPE_1__* termios; } ;
struct TYPE_6__ {int cflag; } ;
struct TYPE_4__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_state*,int *) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int) ;

__attribute__((used)) static void FUNC_3(struct uart_state *VAR_4)
{
 struct tty_struct *VAR_5 = VAR_4->port.tty;
 struct uart_port *VAR_6 = VAR_4->uart_port;

 if (FUNC_1(VAR_6) && VAR_6->cons->cflag) {
  VAR_5->termios->c_cflag = VAR_6->cons->cflag;
  VAR_6->cons->cflag = 0;
 }






 if (!(VAR_5->flags & (1 << VAR_3))) {



  FUNC_0(VAR_4, ((void*)0));




  if (VAR_5->termios->c_cflag & VAR_0)
   FUNC_2(VAR_6, VAR_1 | VAR_2);
 }
}
