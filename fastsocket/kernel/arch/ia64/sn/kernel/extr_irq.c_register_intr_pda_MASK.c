
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sn_irq_info {int irq_irq; int irq_cpuid; } ;
struct TYPE_2__ {int sn_last_irq; int sn_first_irq; } ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct sn_irq_info *VAR_0)
{
 int VAR_1 = VAR_0->irq_irq;
 int VAR_2 = VAR_0->irq_cpuid;

 if (FUNC_0(VAR_2)->sn_last_irq < VAR_1) {
  FUNC_0(VAR_2)->sn_last_irq = VAR_1;
 }

 if (FUNC_0(VAR_2)->sn_first_irq == 0 || FUNC_0(VAR_2)->sn_first_irq > VAR_1)
  FUNC_0(VAR_2)->sn_first_irq = VAR_1;
}
