
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned char* buf; } ;
struct tty_port {int flags; TYPE_3__* tty; } ;
struct uart_state {TYPE_4__ xmit; struct tty_port port; struct uart_port* uart_port; } ;
struct uart_port {scalar_t__ type; int lock; TYPE_2__* ops; } ;
struct TYPE_7__ {int flags; int hw_stopped; TYPE_1__* termios; } ;
struct TYPE_6__ {int (* startup ) (struct uart_port*) ;int (* get_mctrl ) (struct uart_port*) ;} ;
struct TYPE_5__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int*) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct uart_port*) ;
 int FUNC_7 (struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct uart_state*,int *) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (struct uart_port*,int) ;

__attribute__((used)) static int FUNC_12(struct uart_state *VAR_14, int VAR_15)
{
 struct uart_port *VAR_16 = VAR_14->uart_port;
 struct tty_port *VAR_17 = &VAR_14->port;
 unsigned long VAR_18;
 int VAR_19 = 0;

 if (VAR_17->flags & VAR_3)
  return 0;






 FUNC_3(VAR_13, &VAR_17->tty->flags);

 if (VAR_16->type == VAR_8)
  return 0;





 if (!VAR_14->xmit.buf) {

  VAR_18 = FUNC_2(VAR_7);
  if (!VAR_18)
   return -VAR_6;

  VAR_14->xmit.buf = (unsigned char *) VAR_18;
  FUNC_10(&VAR_14->xmit);
 }

 VAR_19 = VAR_16->ops->startup(VAR_16);
 if (VAR_19 == 0) {
  if (VAR_15) {



   FUNC_9(VAR_14, ((void*)0));





   if (VAR_17->tty->termios->c_cflag & VAR_5)
    FUNC_11(VAR_16, VAR_12 | VAR_11);
  }

  if (VAR_17->flags & VAR_1) {
   FUNC_4(&VAR_16->lock);
   if (!(VAR_16->ops->get_mctrl(VAR_16) & VAR_9))
    VAR_17->tty->hw_stopped = 1;
   FUNC_5(&VAR_16->lock);
  }

  if (VAR_17->flags & VAR_2) {
   FUNC_4(&VAR_16->lock);
   if (!(VAR_16->ops->get_mctrl(VAR_16) & VAR_10))
    VAR_17->tty->hw_stopped = 1;
   FUNC_5(&VAR_16->lock);
  }

  FUNC_3(VAR_0, &VAR_17->flags);

  FUNC_1(VAR_13, &VAR_17->tty->flags);
 }

 if (VAR_19 && FUNC_0(VAR_4))
  VAR_19 = 0;

 return VAR_19;
}
