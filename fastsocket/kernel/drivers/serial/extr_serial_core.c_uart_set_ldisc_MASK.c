
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {struct uart_port* uart_port; } ;
struct uart_port {TYPE_1__* ops; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct TYPE_2__ {int (* set_ldisc ) (struct uart_port*) ;} ;


 int FUNC_0 (struct uart_port*) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_0)
{
 struct uart_state *VAR_1 = VAR_0->driver_data;
 struct uart_port *VAR_2 = VAR_1->uart_port;

 if (VAR_2->ops->set_ldisc)
  VAR_2->ops->set_ldisc(VAR_2);
}
