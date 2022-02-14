
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; } ;
struct circ_buf {int dummy; } ;
struct TYPE_2__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 scalar_t__ FUNC_2 (struct circ_buf*) ;
 scalar_t__ FUNC_3 (struct circ_buf*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_1)
{
 struct circ_buf *VAR_2 = &VAR_1->state->xmit;

 if (FUNC_3(VAR_2) || FUNC_4(VAR_1)) {
  FUNC_0(VAR_1);
  return;
 }

 FUNC_1(VAR_1);

 if (FUNC_2(VAR_2) < VAR_0)
  FUNC_5(VAR_1);
}
