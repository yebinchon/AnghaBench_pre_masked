
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_vm {size_t id; void* fence; } ;
struct radeon_fence {int dummy; } ;
struct TYPE_2__ {void** active; } ;
struct radeon_device {TYPE_1__ vm_manager; } ;


 void* FUNC_0 (struct radeon_fence*) ;
 int FUNC_1 (void**) ;

void FUNC_2(struct radeon_device *VAR_0,
       struct radeon_vm *VAR_1,
       struct radeon_fence *VAR_2)
{
 FUNC_1(&VAR_0->vm_manager.active[VAR_1->id]);
 VAR_0->vm_manager.active[VAR_1->id] = FUNC_0(VAR_2);

 FUNC_1(&VAR_1->fence);
 VAR_1->fence = FUNC_0(VAR_2);
}
