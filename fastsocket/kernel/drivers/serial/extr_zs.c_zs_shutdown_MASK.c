
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zs_scc {int irq_guard; int zlock; } ;
struct TYPE_2__ {int irq; } ;
struct zs_port {TYPE_1__ port; int * regs; struct zs_scc* scc; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,struct zs_scc*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct zs_port* FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct zs_port*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_3)
{
 struct zs_port *VAR_4 = FUNC_4(VAR_3);
 struct zs_scc *VAR_5 = VAR_4->scc;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_2(&VAR_5->zlock, VAR_6);

 VAR_4->regs[3] &= ~VAR_2;
 FUNC_5(VAR_4, VAR_1, VAR_4->regs[5]);
 FUNC_5(VAR_4, VAR_0, VAR_4->regs[3]);

 FUNC_3(&VAR_5->zlock, VAR_6);

 VAR_7 = FUNC_0(-1, &VAR_5->irq_guard);
 if (!VAR_7)
  FUNC_1(VAR_4->port.irq, VAR_5);
}
