
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_8250_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int FUNC_0 (struct uart_8250_port*) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_8)
{
 struct uart_8250_port *VAR_9 = (struct uart_8250_port *)VAR_8;
 unsigned int VAR_10;
 unsigned int VAR_11;

 VAR_10 = FUNC_0(VAR_9);

 VAR_11 = 0;
 if (VAR_10 & VAR_5)
  VAR_11 |= VAR_0;
 if (VAR_10 & VAR_7)
  VAR_11 |= VAR_3;
 if (VAR_10 & VAR_6)
  VAR_11 |= VAR_2;
 if (VAR_10 & VAR_4)
  VAR_11 |= VAR_1;
 return VAR_11;
}
