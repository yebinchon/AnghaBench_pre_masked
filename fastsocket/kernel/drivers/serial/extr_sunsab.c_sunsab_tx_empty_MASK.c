
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_sunsab_port {int irqflags; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_2)
{
 struct uart_sunsab_port *VAR_3 = (struct uart_sunsab_port *) VAR_2;
 int VAR_4;


 if (FUNC_0(VAR_0, &VAR_3->irqflags))
  VAR_4 = VAR_1;
 else
  VAR_4 = 0;

 return VAR_4;
}
