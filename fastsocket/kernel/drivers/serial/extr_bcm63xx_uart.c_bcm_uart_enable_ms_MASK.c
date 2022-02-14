
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 VAR_3 |= FUNC_0(VAR_0);
 FUNC_2(VAR_2, VAR_3, VAR_1);
}
