
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tty_port {int flags; TYPE_3__* tty; int blocked_open; int count; int open_wait; int mutex; } ;
struct uart_state {struct tty_port port; struct uart_port* uart_port; } ;
struct uart_port {int lock; TYPE_2__* ops; } ;
struct file {int f_flags; } ;
struct TYPE_6__ {int flags; TYPE_1__* termios; } ;
struct TYPE_5__ {unsigned int (* get_mctrl ) (struct uart_port*) ;int (* enable_ms ) (struct uart_port*) ;} ;
struct TYPE_4__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int *) ;
 int VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct uart_port*) ;
 unsigned int FUNC_11 (struct uart_port*) ;
 scalar_t__ FUNC_12 (struct file*) ;
 int FUNC_13 (struct uart_port*,int ) ;
 int VAR_13 ;

__attribute__((used)) static int
FUNC_14(struct file *VAR_14, struct uart_state *VAR_15)
{
 FUNC_0(VAR_13, VAR_12);
 struct uart_port *VAR_16 = VAR_15->uart_port;
 struct tty_port *VAR_17 = &VAR_15->port;
 unsigned int VAR_18;

 VAR_17->blocked_open++;
 VAR_17->count--;

 FUNC_1(&VAR_17->open_wait, &VAR_13);
 while (1) {
  FUNC_6(VAR_7);




  if (FUNC_12(VAR_14) || VAR_17->tty == ((void*)0))
   break;




  if (!(VAR_17->flags & VAR_0))
   break;
  if ((VAR_14->f_flags & VAR_6) ||
      (VAR_17->tty->termios->c_cflag & VAR_3) ||
      (VAR_17->tty->flags & (1 << VAR_11)))
   break;






  if (VAR_17->tty->termios->c_cflag & VAR_1 &&
      !(VAR_17->tty->termios->c_cflag & VAR_2))
   FUNC_13(VAR_16, VAR_10);





  FUNC_8(&VAR_16->lock);
  VAR_16->ops->enable_ms(VAR_16);
  VAR_18 = VAR_16->ops->get_mctrl(VAR_16);
  FUNC_9(&VAR_16->lock);
  if (VAR_18 & VAR_9)
   break;

  FUNC_3(&VAR_17->mutex);
  FUNC_5();
  FUNC_2(&VAR_17->mutex);

  if (FUNC_7(VAR_12))
   break;
 }
 FUNC_6(VAR_8);
 FUNC_4(&VAR_17->open_wait, &VAR_13);

 VAR_17->count++;
 VAR_17->blocked_open--;

 if (FUNC_7(VAR_12))
  return -VAR_5;

 if (!VAR_17->tty || FUNC_12(VAR_14))
  return -VAR_4;

 return 0;
}
