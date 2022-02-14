
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct radeon_device {TYPE_1__ vm_manager; } ;
struct radeon_bo_va {int bo_list; TYPE_2__* vm; int vm_list; int bo; scalar_t__ soffset; } ;
struct TYPE_4__ {int mutex; } ;


 int FUNC_0 (struct radeon_bo_va*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct radeon_device*,TYPE_2__*,int ,int *) ;

int FUNC_5(struct radeon_device *VAR_0,
       struct radeon_bo_va *VAR_1)
{
 int VAR_2 = 0;

 FUNC_2(&VAR_0->vm_manager.lock);
 FUNC_2(&VAR_1->vm->mutex);
 if (VAR_1->soffset) {
  VAR_2 = FUNC_4(VAR_0, VAR_1->vm, VAR_1->bo, ((void*)0));
 }
 FUNC_3(&VAR_0->vm_manager.lock);
 FUNC_1(&VAR_1->vm_list);
 FUNC_3(&VAR_1->vm->mutex);
 FUNC_1(&VAR_1->bo_list);

 FUNC_0(VAR_1);
 return VAR_2;
}
