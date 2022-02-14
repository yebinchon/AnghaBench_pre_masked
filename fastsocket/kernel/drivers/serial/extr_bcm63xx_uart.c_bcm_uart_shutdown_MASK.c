
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int ,int ) ;
 int FUNC_3 (int ,struct uart_port*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_1)
{
 unsigned long VAR_2;

 FUNC_4(&VAR_1->lock, VAR_2);
 FUNC_2(VAR_1, 0, VAR_0);
 FUNC_5(&VAR_1->lock, VAR_2);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1->irq, VAR_1);
}
