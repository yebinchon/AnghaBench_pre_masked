
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_buffer_object {int dummy; } ;
struct TYPE_2__ {int mclk_lock; } ;
struct radeon_device {TYPE_1__ pm; } ;
struct radeon_bo {struct ttm_buffer_object tbo; struct radeon_device* rdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ttm_buffer_object**) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct radeon_bo **VAR_0)
{
 struct ttm_buffer_object *VAR_1;
 struct radeon_device *VAR_2;

 if ((*VAR_0) == ((void*)0))
  return;
 VAR_2 = (*VAR_0)->rdev;
 VAR_1 = &((*VAR_0)->tbo);
 FUNC_0(&VAR_2->pm.mclk_lock);
 FUNC_1(&VAR_1);
 FUNC_2(&VAR_2->pm.mclk_lock);
 if (VAR_1 == ((void*)0))
  *VAR_0 = ((void*)0);
}
