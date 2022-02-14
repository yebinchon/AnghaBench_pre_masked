
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct uart_port *VAR_3 = VAR_2;
 unsigned long VAR_4;

 FUNC_1(&VAR_3->lock, VAR_4);
 FUNC_0(VAR_3);
 FUNC_2(&VAR_3->lock, VAR_4);

 return VAR_0;
}
