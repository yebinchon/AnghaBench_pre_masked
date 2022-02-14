
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_8)
{
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 & VAR_5)
  VAR_9 |= VAR_0;
 if (VAR_10 & VAR_6)
  VAR_9 |= VAR_2;
 if (VAR_10 & VAR_4)
  VAR_9 |= VAR_1;
 if (VAR_10 & VAR_7)
  VAR_9 |= VAR_3;

 return VAR_9;
}
