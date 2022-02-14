
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_state {int tlet; } ;
struct uart_port {struct uart_state* state; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct uart_port *VAR_0)
{
 struct uart_state *VAR_1 = VAR_0->state;




 FUNC_0(!VAR_1);
 FUNC_1(&VAR_1->tlet);
}
