
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {int acr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_8250_port*,int ,int) ;
 unsigned int FUNC_1 (struct uart_8250_port*,int ) ;
 int FUNC_2 (struct uart_8250_port*,int ,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_8250_port *VAR_4, int VAR_5)
{
 unsigned int VAR_6;

 FUNC_0(VAR_4, VAR_0, VAR_4->acr | VAR_1);
 FUNC_2(VAR_4, VAR_3, VAR_5);
 VAR_6 = FUNC_1(VAR_4, VAR_2);
 FUNC_0(VAR_4, VAR_0, VAR_4->acr);

 return VAR_6;
}
