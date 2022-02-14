
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct uart_port*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_1)
{
 FUNC_1(0, VAR_1->membase + VAR_0) ;

 FUNC_0(VAR_1->irq, VAR_1);
}
