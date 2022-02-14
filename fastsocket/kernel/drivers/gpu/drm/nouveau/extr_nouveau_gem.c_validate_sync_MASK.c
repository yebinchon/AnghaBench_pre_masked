
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nouveau_fence {int dummy; } ;
struct nouveau_channel {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bdev; scalar_t__ sync_obj; } ;
struct nouveau_bo {TYPE_2__ bo; } ;
struct TYPE_3__ {int fence_lock; } ;


 struct nouveau_fence* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct nouveau_fence*,struct nouveau_channel*) ;
 int FUNC_2 (struct nouveau_fence**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_channel *VAR_0, struct nouveau_bo *VAR_1)
{
 struct nouveau_fence *VAR_2 = ((void*)0);
 int VAR_3 = 0;

 FUNC_3(&VAR_1->bo.bdev->fence_lock);
 if (VAR_1->bo.sync_obj)
  VAR_2 = FUNC_0(VAR_1->bo.sync_obj);
 FUNC_4(&VAR_1->bo.bdev->fence_lock);

 if (VAR_2) {
  VAR_3 = FUNC_1(VAR_2, VAR_0);
  FUNC_2(&VAR_2);
 }

 return VAR_3;
}
