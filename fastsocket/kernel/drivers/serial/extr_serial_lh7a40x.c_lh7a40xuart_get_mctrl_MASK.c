
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1 (struct uart_port* VAR_7)
{
 unsigned int VAR_8 = 0;
 unsigned int VAR_9 = FUNC_0 (VAR_7, VAR_6);

 if (VAR_9 & VAR_1)
  VAR_8 |= VAR_3;
 if (VAR_9 & VAR_2)
  VAR_8 |= VAR_5;
 if (VAR_9 & VAR_0)
  VAR_8 |= VAR_4;

 return VAR_8;
}
