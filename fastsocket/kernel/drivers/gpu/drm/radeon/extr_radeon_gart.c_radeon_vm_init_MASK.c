
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_vm {int va; int list; int mutex; int * fence; scalar_t__ id; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct radeon_device *VAR_0, struct radeon_vm *VAR_1)
{
 VAR_1->id = 0;
 VAR_1->fence = ((void*)0);
 FUNC_1(&VAR_1->mutex);
 FUNC_0(&VAR_1->list);
 FUNC_0(&VAR_1->va);
}
