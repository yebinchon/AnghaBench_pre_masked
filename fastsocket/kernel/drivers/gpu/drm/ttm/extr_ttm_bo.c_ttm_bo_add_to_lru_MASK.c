
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_mem_type_manager {int lru; } ;
struct TYPE_3__ {int placement; size_t mem_type; } ;
struct ttm_buffer_object {int list_kref; TYPE_2__* glob; int swap; int * ttm; int lru; TYPE_1__ mem; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {struct ttm_mem_type_manager* man; } ;
struct TYPE_4__ {int swap_lru; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_buffer_object*) ;

void FUNC_5(struct ttm_buffer_object *VAR_1)
{
 struct ttm_bo_device *VAR_2 = VAR_1->bdev;
 struct ttm_mem_type_manager *VAR_3;

 FUNC_0(!FUNC_4(VAR_1));

 if (!(VAR_1->mem.placement & VAR_0)) {

  FUNC_0(!FUNC_3(&VAR_1->lru));

  VAR_3 = &VAR_2->man[VAR_1->mem.mem_type];
  FUNC_2(&VAR_1->lru, &VAR_3->lru);
  FUNC_1(&VAR_1->list_kref);

  if (VAR_1->ttm != ((void*)0)) {
   FUNC_2(&VAR_1->swap, &VAR_1->glob->swap_lru);
   FUNC_1(&VAR_1->list_kref);
  }
 }
}
