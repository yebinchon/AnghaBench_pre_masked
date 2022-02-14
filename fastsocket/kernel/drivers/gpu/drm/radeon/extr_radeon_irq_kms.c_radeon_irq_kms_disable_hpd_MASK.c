
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* hpd; int lock; } ;
struct radeon_device {TYPE_2__ irq; TYPE_1__* ddev; } ;
struct TYPE_3__ {int irq_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct radeon_device *VAR_1, unsigned VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 if (!VAR_1->ddev->irq_enabled)
  return;

 FUNC_1(&VAR_1->irq.lock, VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4)
  VAR_1->irq.hpd[VAR_4] &= !(VAR_2 & (1 << VAR_4));
 FUNC_0(VAR_1);
 FUNC_2(&VAR_1->irq.lock, VAR_3);
}
