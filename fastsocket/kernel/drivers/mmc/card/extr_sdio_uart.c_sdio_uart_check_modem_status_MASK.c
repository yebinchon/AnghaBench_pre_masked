
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cts; int dcd; int dsr; int rng; } ;
struct sdio_uart_port {TYPE_3__* tty; TYPE_1__ icount; } ;
struct TYPE_6__ {int hw_stopped; TYPE_2__* termios; } ;
struct TYPE_5__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sdio_uart_port*,int ) ;
 int FUNC_1 (struct sdio_uart_port*) ;
 int FUNC_2 (struct sdio_uart_port*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct sdio_uart_port *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_1);

 if ((VAR_9 & VAR_2) == 0)
  return;

 if (VAR_9 & VAR_7)
  VAR_8->icount.rng++;
 if (VAR_9 & VAR_6)
  VAR_8->icount.dsr++;
 if (VAR_9 & VAR_5)
  VAR_8->icount.dcd++;
 if (VAR_9 & VAR_4) {
  VAR_8->icount.cts++;
  if (VAR_8->tty->termios->c_cflag & VAR_0) {
   int VAR_10 = (VAR_9 & VAR_3);
   if (VAR_8->tty->hw_stopped) {
    if (VAR_10) {
     VAR_8->tty->hw_stopped = 0;
     FUNC_1(VAR_8);
     FUNC_3(VAR_8->tty);
    }
   } else {
    if (!VAR_10) {
     VAR_8->tty->hw_stopped = 1;
     FUNC_2(VAR_8);
    }
   }
  }
 }
}
