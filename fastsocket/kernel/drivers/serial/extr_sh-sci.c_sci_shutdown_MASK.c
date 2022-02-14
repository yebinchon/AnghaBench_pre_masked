
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct sci_port {int (* disable ) (struct uart_port*) ;} ;


 int FUNC_0 (struct sci_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 struct sci_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_0)
{
 struct sci_port *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(VAR_0);
 FUNC_2(VAR_0);
 FUNC_0(VAR_1);

 if (VAR_1->disable)
  VAR_1->disable(VAR_0);
}
