
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_pmac_port {int * node; } ;


 unsigned int VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 unsigned char FUNC_1 (struct uart_pmac_port*) ;
 struct uart_pmac_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_2)
{
 struct uart_pmac_port *VAR_3 = FUNC_2(VAR_2);
 unsigned char VAR_4;

 if (FUNC_0(VAR_3) || VAR_3->node == ((void*)0))
  return VAR_0;

 VAR_4 = FUNC_1(FUNC_2(VAR_2));
 if (VAR_4 & VAR_1)
  return VAR_0;
 return 0;
}
