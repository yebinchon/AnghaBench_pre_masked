
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; scalar_t__ membase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_3, int VAR_4)
{
 unsigned long VAR_5;

 FUNC_0(&VAR_3->lock, VAR_5);
 if (VAR_4 == -1)
  FUNC_2(VAR_1, VAR_3->membase + VAR_0);
 else
  FUNC_2(VAR_2, VAR_3->membase + VAR_0);
 FUNC_1(&VAR_3->lock, VAR_5);
}
