
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int flags; unsigned int custom_divisor; int uartclk; } ;


 int VAR_0 ;
 int VAR_1 ;

unsigned int
FUNC_0(struct uart_port *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;




 if (VAR_3 == 38400 && (VAR_2->flags & VAR_1) == VAR_0)
  VAR_4 = VAR_2->custom_divisor;
 else
  VAR_4 = (VAR_2->uartclk + (8 * VAR_3)) / (16 * VAR_3);

 return VAR_4;
}
