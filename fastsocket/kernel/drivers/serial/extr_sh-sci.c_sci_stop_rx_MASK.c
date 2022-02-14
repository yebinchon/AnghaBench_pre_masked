
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3)
{
 unsigned short VAR_4;


 VAR_4 = FUNC_0(VAR_3, VAR_2);
 VAR_4 &= ~(VAR_1 | VAR_0);
 FUNC_1(VAR_3, VAR_2, VAR_4);
}
