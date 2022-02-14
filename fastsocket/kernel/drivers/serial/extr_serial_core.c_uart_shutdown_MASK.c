
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * buf; } ;
struct tty_port {int delta_msr_wait; int flags; struct tty_struct* tty; } ;
struct uart_state {TYPE_3__ xmit; int tlet; struct tty_port port; struct uart_port* uart_port; } ;
struct uart_port {int irq; TYPE_2__* ops; } ;
struct tty_struct {TYPE_1__* termios; int flags; } ;
struct TYPE_5__ {int (* shutdown ) (struct uart_port*) ;} ;
struct TYPE_4__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (struct uart_port*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct uart_state *VAR_5)
{
 struct uart_port *VAR_6 = VAR_5->uart_port;
 struct tty_port *VAR_7 = &VAR_5->port;
 struct tty_struct *VAR_8 = VAR_7->tty;




 if (VAR_8)
  FUNC_1(VAR_4, &VAR_8->flags);

 if (FUNC_5(VAR_0, &VAR_7->flags)) {



  if (!VAR_8 || (VAR_8->termios->c_cflag & VAR_1))
   FUNC_6(VAR_6, VAR_2 | VAR_3);
  FUNC_7(&VAR_7->delta_msr_wait);




  VAR_6->ops->shutdown(VAR_6);




  FUNC_3(VAR_6->irq);
 }




 FUNC_4(&VAR_5->tlet);




 if (VAR_5->xmit.buf) {
  FUNC_0((unsigned long)VAR_5->xmit.buf);
  VAR_5->xmit.buf = ((void*)0);
 }
}
