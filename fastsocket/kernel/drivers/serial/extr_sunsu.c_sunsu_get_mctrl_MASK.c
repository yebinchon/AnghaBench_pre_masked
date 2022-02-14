
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sunsu_port {int dummy; } ;
struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char FUNC_0 (struct uart_sunsu_port*,int ) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_9)
{
 struct uart_sunsu_port *VAR_10 = (struct uart_sunsu_port *) VAR_9;
 unsigned char VAR_11;
 unsigned int VAR_12;

 VAR_11 = FUNC_0(VAR_10, VAR_4);

 VAR_12 = 0;
 if (VAR_11 & VAR_6)
  VAR_12 |= VAR_0;
 if (VAR_11 & VAR_8)
  VAR_12 |= VAR_3;
 if (VAR_11 & VAR_7)
  VAR_12 |= VAR_2;
 if (VAR_11 & VAR_5)
  VAR_12 |= VAR_1;
 return VAR_12;
}
