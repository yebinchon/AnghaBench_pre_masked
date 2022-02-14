
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int num_pages; } ;
struct ttm_buffer_object {int addr_space_offset; TYPE_2__* vm_node; TYPE_1__ mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {int vm_lock; int addr_space_mm; } ;
struct TYPE_6__ {scalar_t__ start; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ttm_buffer_object *VAR_2)
{
 struct ttm_bo_device *VAR_3 = VAR_2->bdev;
 int VAR_4;

retry_pre_get:
 VAR_4 = FUNC_1(&VAR_3->addr_space_mm);
 if (FUNC_4(VAR_4 != 0))
  return VAR_4;

 FUNC_5(&VAR_3->vm_lock);
 VAR_2->vm_node = FUNC_2(&VAR_3->addr_space_mm,
      VAR_2->mem.num_pages, 0, 0);

 if (FUNC_4(VAR_2->vm_node == ((void*)0))) {
  VAR_4 = -VAR_0;
  goto out_unlock;
 }

 VAR_2->vm_node = FUNC_0(VAR_2->vm_node,
           VAR_2->mem.num_pages, 0);

 if (FUNC_4(VAR_2->vm_node == ((void*)0))) {
  FUNC_6(&VAR_3->vm_lock);
  goto retry_pre_get;
 }

 FUNC_3(VAR_2);
 FUNC_6(&VAR_3->vm_lock);
 VAR_2->addr_space_offset = ((uint64_t) VAR_2->vm_node->start) << VAR_1;

 return 0;
out_unlock:
 FUNC_6(&VAR_3->vm_lock);
 return VAR_4;
}
