
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct radeon_vm {int list; } ;
struct TYPE_2__ {int lru_vm; } ;
struct radeon_device {TYPE_1__ vm_manager; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct radeon_device *VAR_0, struct radeon_vm *VAR_1)
{
 FUNC_1(&VAR_1->list);
 FUNC_0(&VAR_1->list, &VAR_0->vm_manager.lru_vm);
}
