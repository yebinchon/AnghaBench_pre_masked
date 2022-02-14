
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; scalar_t__ membase; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_1, int VAR_2)
{
 unsigned int VAR_3;
 VAR_2 = FUNC_0(VAR_1, VAR_2) << VAR_1->regshift;
 if (VAR_2 == VAR_0) {
  VAR_3 = FUNC_2(VAR_1->membase + (VAR_0 & ~3));
  return (VAR_3 >> 16) & 0xff;
 } else
  return FUNC_1(VAR_1->membase + VAR_2);
}
