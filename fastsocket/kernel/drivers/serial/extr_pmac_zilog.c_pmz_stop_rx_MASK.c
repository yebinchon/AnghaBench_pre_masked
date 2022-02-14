
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_pmac_port {int * curregs; int * node; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct uart_pmac_port*) ;
 struct uart_pmac_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2)
{
 struct uart_pmac_port *VAR_3 = FUNC_3(VAR_2);

 if (FUNC_0(VAR_3) || VAR_3->node == ((void*)0))
  return;

 FUNC_1("pmz: stop_rx()()\n");


 VAR_3->curregs[VAR_0] &= ~VAR_1;
 FUNC_2(VAR_3);

 FUNC_1("pmz: stop_rx() done.\n");
}
