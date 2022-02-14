
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {int uart_port; } ;
struct tty_struct {TYPE_1__* termios; struct uart_state* driver_data; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tty_struct*,int ) ;

__attribute__((used)) static void FUNC_4(struct tty_struct *VAR_4)
{
 struct uart_state *VAR_5 = VAR_4->driver_data;

 if (FUNC_0(VAR_4))
  FUNC_3(VAR_4, FUNC_1(VAR_4));

 if (VAR_4->termios->c_cflag & VAR_1)
  FUNC_2(VAR_5->uart_port, VAR_3);
 if (VAR_4->termios->c_cflag & VAR_0)
  FUNC_2(VAR_5->uart_port, VAR_2);
}
