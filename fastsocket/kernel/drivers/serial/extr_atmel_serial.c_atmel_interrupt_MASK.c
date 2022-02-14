
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (struct uart_port*,unsigned int,unsigned int) ;
 int FUNC_4 (struct uart_port*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct uart_port *VAR_5 = VAR_4;
 unsigned int VAR_6, VAR_7, VAR_8 = 0;

 do {
  VAR_6 = FUNC_0(VAR_5);
  VAR_7 = VAR_6 & FUNC_1(VAR_5);
  if (!VAR_7)
   break;

  FUNC_2(VAR_5, VAR_7);
  FUNC_3(VAR_5, VAR_7, VAR_6);
  FUNC_4(VAR_5, VAR_7);
 } while (VAR_8++ < VAR_0);

 return VAR_8 ? VAR_1 : VAR_2;
}
