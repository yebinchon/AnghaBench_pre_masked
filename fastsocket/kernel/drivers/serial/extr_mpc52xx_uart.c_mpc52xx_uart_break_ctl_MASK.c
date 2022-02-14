
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_2__ {int command; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct uart_port *VAR_2, int VAR_3)
{
 unsigned long VAR_4;
 FUNC_2(&VAR_2->lock, VAR_4);

 if (VAR_3 == -1)
  FUNC_1(&FUNC_0(VAR_2)->command, VAR_0);
 else
  FUNC_1(&FUNC_0(VAR_2)->command, VAR_1);

 FUNC_3(&VAR_2->lock, VAR_4);
}
