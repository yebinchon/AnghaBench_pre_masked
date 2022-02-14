
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; int * pflip; } ;
struct radeon_device {int num_crtc; TYPE_2__ irq; TYPE_1__* ddev; } ;
struct TYPE_3__ {int irq_enabled; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct radeon_device *VAR_0, int VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1 < 0 || VAR_1 >= VAR_0->num_crtc)
  return;

 if (!VAR_0->ddev->irq_enabled)
  return;

 if (FUNC_0(&VAR_0->irq.pflip[VAR_1]) == 1) {
  FUNC_2(&VAR_0->irq.lock, VAR_2);
  FUNC_1(VAR_0);
  FUNC_3(&VAR_0->irq.lock, VAR_2);
 }
}
