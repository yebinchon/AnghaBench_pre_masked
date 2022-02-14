
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;


 unsigned int* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;

 FUNC_0(&VAR_2->lock, VAR_4);
 VAR_5 = *VAR_0;
 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;
 *VAR_0 = VAR_5;
 FUNC_1(&VAR_2->lock, VAR_4);
}
