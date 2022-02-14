
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int line; int irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static inline unsigned int FUNC_0(struct uart_port *VAR_3)
{
 if (VAR_3->line == 0)
  return VAR_2;
 if (VAR_3->line == 1 && VAR_3->irq != -1)
  return VAR_1;

 return VAR_0;
}
