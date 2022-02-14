
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_type_manager {int has_type; int use_type; int lru; } ;
struct ttm_bo_global {int lru_lock; int device_list_mutex; } ;
struct ttm_bo_device {int vm_lock; int addr_space_mm; struct ttm_mem_type_manager* man; int ddestroy; int wq; int device_list; struct ttm_bo_global* glob; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,unsigned int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (struct ttm_bo_device*,unsigned int) ;
 scalar_t__ FUNC_13 (struct ttm_bo_device*,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct ttm_bo_device *VAR_3)
{
 int VAR_4 = 0;
 unsigned VAR_5 = VAR_1;
 struct ttm_mem_type_manager *VAR_6;
 struct ttm_bo_global *VAR_7 = VAR_3->glob;

 while (VAR_5--) {
  VAR_6 = &VAR_3->man[VAR_5];
  if (VAR_6->has_type) {
   VAR_6->use_type = 0;
   if ((VAR_5 != VAR_2) && FUNC_12(VAR_3, VAR_5)) {
    VAR_4 = -VAR_0;
    FUNC_9("DRM memory manager type %d is not clean\n",
           VAR_5);
   }
   VAR_6->has_type = 0;
  }
 }

 FUNC_7(&VAR_7->device_list_mutex);
 FUNC_5(&VAR_3->device_list);
 FUNC_8(&VAR_7->device_list_mutex);

 FUNC_2(&VAR_3->wq);

 while (FUNC_13(VAR_3, 1))
  ;

 FUNC_10(&VAR_7->lru_lock);
 if (FUNC_6(&VAR_3->ddestroy))
  FUNC_1("Delayed destroy list was clean\n");

 if (FUNC_6(&VAR_3->man[0].lru))
  FUNC_1("Swap list was clean\n");
 FUNC_11(&VAR_7->lru_lock);

 FUNC_0(!FUNC_3(&VAR_3->addr_space_mm));
 FUNC_14(&VAR_3->vm_lock);
 FUNC_4(&VAR_3->addr_space_mm);
 FUNC_15(&VAR_3->vm_lock);

 return VAR_4;
}
