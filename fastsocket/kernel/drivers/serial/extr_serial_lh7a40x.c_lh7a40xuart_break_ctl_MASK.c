
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;


 int FUNC_0 (struct uart_port*,int ,int ) ;
 int FUNC_1 (struct uart_port*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4 (struct uart_port* VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 if (VAR_3 == -1)
  FUNC_1 (VAR_2, VAR_1, VAR_0);
 else
  FUNC_0 (VAR_2, VAR_1, VAR_0);
 FUNC_3(&VAR_2->lock, VAR_4);
}
