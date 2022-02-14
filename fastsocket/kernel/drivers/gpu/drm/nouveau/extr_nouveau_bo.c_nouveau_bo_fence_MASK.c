
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_fence {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bdev; struct nouveau_fence* sync_obj; } ;
struct nouveau_bo {TYPE_2__ bo; } ;
struct TYPE_3__ {int fence_lock; } ;


 scalar_t__ FUNC_0 (struct nouveau_fence*) ;
 int FUNC_1 (struct nouveau_fence*) ;
 int FUNC_2 (struct nouveau_fence**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct nouveau_bo *VAR_0, struct nouveau_fence *VAR_1)
{
 struct nouveau_fence *VAR_2 = ((void*)0);

 if (FUNC_0(VAR_1))
  FUNC_1(VAR_1);

 FUNC_3(&VAR_0->bo.bdev->fence_lock);
 VAR_2 = VAR_0->bo.sync_obj;
 VAR_0->bo.sync_obj = VAR_1;
 FUNC_4(&VAR_0->bo.bdev->fence_lock);

 FUNC_2(&VAR_2);
}
