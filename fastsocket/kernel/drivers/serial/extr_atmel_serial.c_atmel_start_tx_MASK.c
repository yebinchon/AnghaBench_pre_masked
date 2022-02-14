
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*,int) ;
 int FUNC_2 (struct uart_port*,int) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_4)
{
 if (FUNC_3(VAR_4)) {
  if (FUNC_0(VAR_4) & VAR_0)


   return;

  FUNC_1(VAR_4, VAR_1 | VAR_2);

  FUNC_2(VAR_4, VAR_0);
 } else
  FUNC_1(VAR_4, VAR_3);
}
