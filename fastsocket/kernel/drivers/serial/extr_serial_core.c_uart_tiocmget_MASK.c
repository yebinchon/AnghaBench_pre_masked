
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int mutex; } ;
struct uart_state {struct uart_port* uart_port; struct tty_port port; } ;
struct uart_port {int mctrl; int lock; TYPE_1__* ops; } ;
struct tty_struct {int flags; struct uart_state* driver_data; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* get_mctrl ) (struct uart_port*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_2, struct file *VAR_3)
{
 struct uart_state *VAR_4 = VAR_2->driver_data;
 struct tty_port *VAR_5 = &VAR_4->port;
 struct uart_port *VAR_6 = VAR_4->uart_port;
 int VAR_7 = -VAR_0;

 FUNC_0(&VAR_5->mutex);
 if ((!VAR_3 || !FUNC_5(VAR_3)) &&
     !(VAR_2->flags & (1 << VAR_1))) {
  VAR_7 = VAR_6->mctrl;

  FUNC_2(&VAR_6->lock);
  VAR_7 |= VAR_6->ops->get_mctrl(VAR_6);
  FUNC_3(&VAR_6->lock);
 }
 FUNC_1(&VAR_5->mutex);

 return VAR_7;
}
