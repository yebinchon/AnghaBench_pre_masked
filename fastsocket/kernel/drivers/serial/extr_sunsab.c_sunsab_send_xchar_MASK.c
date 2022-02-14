
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct uart_sunsab_port {TYPE_3__ port; TYPE_2__* regs; } ;
struct uart_port {int dummy; } ;
struct TYPE_4__ {int tic; } ;
struct TYPE_5__ {TYPE_1__ w; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uart_sunsab_port*) ;
 int FUNC_3 (char,int *) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_0, char VAR_1)
{
 struct uart_sunsab_port *VAR_2 = (struct uart_sunsab_port *) VAR_0;
 unsigned long VAR_3;

 FUNC_0(&VAR_2->port.lock, VAR_3);

 FUNC_2(VAR_2);
 FUNC_3(VAR_1, &VAR_2->regs->w.tic);

 FUNC_1(&VAR_2->port.lock, VAR_3);
}
