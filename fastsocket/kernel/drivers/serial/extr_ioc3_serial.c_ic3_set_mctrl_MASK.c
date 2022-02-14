
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int FUNC_0 (struct uart_port*,unsigned char,int ) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_11, unsigned int VAR_12)
{
 unsigned char VAR_13 = 0;

 if (VAR_12 & VAR_5)
  VAR_13 |= VAR_10;
 if (VAR_12 & VAR_1)
  VAR_13 |= VAR_6;
 if (VAR_12 & VAR_3)
  VAR_13 |= VAR_8;
 if (VAR_12 & VAR_4)
  VAR_13 |= VAR_9;
 if (VAR_12 & VAR_2)
  VAR_13 |= VAR_7;

 FUNC_0(VAR_11, VAR_13, VAR_0);
}
