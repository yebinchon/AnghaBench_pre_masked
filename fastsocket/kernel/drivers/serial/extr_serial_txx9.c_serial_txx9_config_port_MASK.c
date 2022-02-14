
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ line; TYPE_1__* cons; int fifosize; } ;
struct uart_txx9_port {TYPE_2__ port; } ;
struct uart_port {int type; } ;
struct TYPE_3__ {scalar_t__ index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_txx9_port*) ;
 struct uart_txx9_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2, int VAR_3)
{
 struct uart_txx9_port *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;





 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 < 0)
  return;
 VAR_2->type = VAR_0;
 VAR_4->port.fifosize = VAR_1;





 FUNC_0(VAR_2);
}
