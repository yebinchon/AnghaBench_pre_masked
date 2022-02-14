
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_pmac_port {int * node; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 unsigned char FUNC_1 (struct uart_pmac_port*,int ) ;
 struct uart_pmac_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_7)
{
 struct uart_pmac_port *VAR_8 = FUNC_2(VAR_7);
 unsigned char VAR_9;
 unsigned int VAR_10;

 if (FUNC_0(VAR_8) || VAR_8->node == ((void*)0))
  return 0;

 VAR_9 = FUNC_1(VAR_8, VAR_2);

 VAR_10 = 0;
 if (VAR_9 & VAR_1)
  VAR_10 |= VAR_4;
 if (VAR_9 & VAR_3)
  VAR_10 |= VAR_6;
 if (!(VAR_9 & VAR_0))
  VAR_10 |= VAR_5;

 return VAR_10;
}
