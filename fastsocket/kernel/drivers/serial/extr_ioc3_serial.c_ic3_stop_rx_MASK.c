
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct ioc3_port {int ip_flags; } ;


 int VAR_0 ;
 struct ioc3_port* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_1)
{
 struct ioc3_port *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2)
  VAR_2->ip_flags &= ~VAR_0;
}
