
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buf; } ;
struct uart_state {TYPE_2__ xmit; struct uart_port* uart_port; } ;
struct uart_port {TYPE_1__* ops; } ;
struct tty_struct {int hw_stopped; int stopped; struct uart_state* driver_data; } ;
struct TYPE_3__ {int (* start_tx ) (struct uart_port*) ;} ;


 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_0)
{
 struct uart_state *VAR_1 = VAR_0->driver_data;
 struct uart_port *VAR_2 = VAR_1->uart_port;

 if (!FUNC_1(&VAR_1->xmit) && VAR_1->xmit.buf &&
     !VAR_0->stopped && !VAR_0->hw_stopped)
  VAR_2->ops->start_tx(VAR_2);
}
