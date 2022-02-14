
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_port {int mutex; int count; } ;
struct uart_state {TYPE_1__* uart_port; struct tty_port port; } ;
struct uart_driver {struct uart_state* state; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct uart_state* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct uart_state *FUNC_3(struct uart_driver *VAR_3, int VAR_4)
{
 struct uart_state *VAR_5;
 struct tty_port *VAR_6;
 int VAR_7 = 0;

 VAR_5 = VAR_3->state + VAR_4;
 VAR_6 = &VAR_5->port;
 if (FUNC_1(&VAR_6->mutex)) {
  VAR_7 = -VAR_1;
  goto err;
 }

 VAR_6->count++;
 if (!VAR_5->uart_port || VAR_5->uart_port->flags & VAR_2) {
  VAR_7 = -VAR_0;
  goto err_unlock;
 }
 return VAR_5;

 err_unlock:
 VAR_6->count--;
 FUNC_2(&VAR_6->mutex);
 err:
 return FUNC_0(VAR_7);
}
