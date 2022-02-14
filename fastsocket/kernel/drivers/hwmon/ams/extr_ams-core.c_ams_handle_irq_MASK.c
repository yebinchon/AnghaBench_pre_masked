
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum ams_irq { ____Placeholder_ams_irq } ams_irq ;
struct TYPE_2__ {int worker_irqs; int irq_lock; int worker; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 enum ams_irq VAR_2 = *((enum ams_irq *)VAR_1);

 FUNC_1(&VAR_0.irq_lock);

 VAR_0.worker_irqs |= VAR_2;
 FUNC_0(&VAR_0.worker);

 FUNC_2(&VAR_0.irq_lock);
}
