
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; } ;


 int FUNC_0 (char*,int ) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_0)
{
 FUNC_0("CPM uart[%d]:enable ms\n", VAR_0->line);
}
