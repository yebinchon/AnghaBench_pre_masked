
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {TYPE_1__* termios; struct sdio_uart_port* driver_data; } ;
struct sdio_uart_port {int func; int x_char; } ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct sdio_uart_port*) ;
 int FUNC_3 (struct sdio_uart_port*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sdio_uart_port*) ;
 int FUNC_6 (struct sdio_uart_port*) ;

__attribute__((used)) static void FUNC_7(struct tty_struct *VAR_2)
{
 struct sdio_uart_port *VAR_3 = VAR_2->driver_data;

 if (!FUNC_0(VAR_2) && !(VAR_2->termios->c_cflag & VAR_0))
  return;

 if (FUNC_2(VAR_3) != 0)
  return;

 if (FUNC_0(VAR_2)) {
  VAR_3->x_char = FUNC_1(VAR_2);
  FUNC_6(VAR_3);
 }

 if (VAR_2->termios->c_cflag & VAR_0)
  FUNC_3(VAR_3, VAR_1);

 FUNC_4(VAR_3->func);
 FUNC_5(VAR_3);
}
