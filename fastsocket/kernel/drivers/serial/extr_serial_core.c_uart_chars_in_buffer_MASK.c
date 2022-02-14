
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {TYPE_1__* uart_port; int xmit; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_0)
{
 struct uart_state *VAR_1 = VAR_0->driver_data;
 unsigned long VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1->uart_port->lock, VAR_2);
 VAR_3 = FUNC_2(&VAR_1->xmit);
 FUNC_1(&VAR_1->uart_port->lock, VAR_2);
 return VAR_3;
}
