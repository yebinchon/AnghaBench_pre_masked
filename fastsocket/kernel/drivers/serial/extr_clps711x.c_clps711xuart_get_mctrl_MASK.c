
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int FUNC_1 (unsigned int) ;

__attribute__((used)) static unsigned int FUNC_2(struct uart_port *VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8 == VAR_0) {
  VAR_10 = FUNC_1(VAR_0);
  if (VAR_10 & VAR_2)
   VAR_9 |= VAR_4;
  if (VAR_10 & VAR_3)
   VAR_9 |= VAR_6;
  if (VAR_10 & VAR_1)
   VAR_9 |= VAR_5;
 }

 return VAR_9;
}
