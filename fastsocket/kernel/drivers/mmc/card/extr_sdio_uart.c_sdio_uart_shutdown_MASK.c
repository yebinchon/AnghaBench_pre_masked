
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ buf; } ;
struct sdio_uart_port {int lcr; TYPE_3__ xmit; int func; scalar_t__ ier; TYPE_2__* tty; } ;
struct TYPE_5__ {TYPE_1__* termios; } ;
struct TYPE_4__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sdio_uart_port*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sdio_uart_port*) ;
 int FUNC_5 (struct sdio_uart_port*,int) ;
 int FUNC_6 (struct sdio_uart_port*) ;
 int FUNC_7 (struct sdio_uart_port*) ;

__attribute__((used)) static void FUNC_8(struct sdio_uart_port *VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_4(VAR_11);
 if (VAR_12)
  goto skip;

 FUNC_7(VAR_11);




 if (VAR_11->tty->termios->c_cflag & VAR_0)
  FUNC_5(VAR_11, VAR_1 | VAR_3);


 FUNC_3(VAR_11->func);
 VAR_11->ier = 0;
 FUNC_2(VAR_11, VAR_8, 0);

 FUNC_5(VAR_11, VAR_2);


 VAR_11->lcr &= ~VAR_10;
 FUNC_2(VAR_11, VAR_9, VAR_11->lcr);
 FUNC_2(VAR_11, VAR_4, VAR_7 |
     VAR_5 |
     VAR_6);
 FUNC_2(VAR_11, VAR_4, 0);

 FUNC_1(VAR_11->func);

 FUNC_6(VAR_11);

skip:

 FUNC_0((unsigned long)VAR_11->xmit.buf);
}
