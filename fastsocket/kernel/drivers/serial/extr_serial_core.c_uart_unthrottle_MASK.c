
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {struct uart_port* uart_port; } ;
struct uart_port {scalar_t__ x_char; } ;
struct tty_struct {TYPE_1__* termios; struct uart_state* driver_data; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct tty_struct*,int ) ;
 int FUNC_3 (struct uart_port*,int ) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_4)
{
 struct uart_state *VAR_5 = VAR_4->driver_data;
 struct uart_port *VAR_6 = VAR_5->uart_port;

 if (FUNC_0(VAR_4)) {
  if (VAR_6->x_char)
   VAR_6->x_char = 0;
  else
   FUNC_2(VAR_4, FUNC_1(VAR_4));
 }

 if (VAR_4->termios->c_cflag & VAR_1)
  FUNC_3(VAR_6, VAR_3);
 if (VAR_4->termios->c_cflag & VAR_0)
  FUNC_3(VAR_6, VAR_2);
}
