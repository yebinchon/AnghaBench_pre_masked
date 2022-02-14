
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (int ,struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_3)
{
 unsigned int VAR_4, VAR_5;




 FUNC_6(FUNC_2(VAR_3), VAR_3);
 FUNC_6(FUNC_0(VAR_3), VAR_3);




 VAR_5 = FUNC_4(FUNC_1(VAR_3));
 VAR_5 &= ~VAR_0;
 FUNC_5(VAR_5, FUNC_1(VAR_3));




 VAR_4 = FUNC_4(FUNC_3(VAR_3));
 VAR_4 &= ~(VAR_2 | VAR_1);
 FUNC_5(VAR_4, FUNC_3(VAR_3));
}
