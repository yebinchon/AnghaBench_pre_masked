
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx88_core {int pci_irqmask; struct cx88_IR* ir; } ;
struct cx88_IR {int timer; scalar_t__ polling; scalar_t__ sampling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 struct cx88_core *VAR_3 = VAR_2;
 struct cx88_IR *VAR_4;

 if (!VAR_3 || !VAR_3->ir)
  return;

 VAR_4 = VAR_3->ir;
 if (VAR_4->sampling) {
  FUNC_0(VAR_0, 0x0);
  VAR_3->pci_irqmask &= ~VAR_1;
 }

 if (VAR_4->polling)
  FUNC_1(&VAR_4->timer);
}
