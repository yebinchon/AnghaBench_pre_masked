
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int kref; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {int vm_lock; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ttm_buffer_object **VAR_1)
{
 struct ttm_buffer_object *VAR_2 = *VAR_1;
 struct ttm_bo_device *VAR_3 = VAR_2->bdev;

 *VAR_1 = ((void*)0);
 FUNC_1(&VAR_3->vm_lock);
 FUNC_0(&VAR_2->kref, VAR_0);
 FUNC_2(&VAR_3->vm_lock);
}
