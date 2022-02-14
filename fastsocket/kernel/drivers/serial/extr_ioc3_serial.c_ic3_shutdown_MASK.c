
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delta_msr_wait; } ;
struct uart_state {TYPE_1__ port; } ;
struct uart_port {int lock; struct uart_state* state; } ;
struct ioc3_port {int dummy; } ;


 int VAR_0 ;
 struct ioc3_port* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct ioc3_port*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_1)
{
 unsigned long VAR_2;
 struct ioc3_port *VAR_3;
 struct uart_state *VAR_4;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return;

 VAR_4 = VAR_1->state;
 FUNC_4(&VAR_4->port.delta_msr_wait);

 FUNC_2(&VAR_1->lock, VAR_2);
 FUNC_1(VAR_3, VAR_0, 0);
 FUNC_3(&VAR_1->lock, VAR_2);
}
