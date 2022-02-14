
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int ddestroy; int list_kref; int event_queue; int reserved; scalar_t__ sync_obj; struct ttm_bo_global* glob; struct ttm_bo_device* bdev; } ;
struct ttm_bo_global {int lru_lock; } ;
struct ttm_bo_driver {int (* sync_obj_unref ) (void**) ;int (* sync_obj_flush ) (void*) ;void* (* sync_obj_ref ) (scalar_t__) ;} ;
struct ttm_bo_device {int wq; int ddestroy; int fence_lock; struct ttm_bo_driver* driver; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (void**) ;
 int FUNC_9 (struct ttm_buffer_object*) ;
 int FUNC_10 (struct ttm_buffer_object*) ;
 int FUNC_11 (struct ttm_buffer_object*,int,int) ;
 int FUNC_12 (struct ttm_buffer_object*,int,int,int,int ) ;
 int FUNC_13 (struct ttm_buffer_object*,int,int,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct ttm_buffer_object *VAR_1)
{
 struct ttm_bo_device *VAR_2 = VAR_1->bdev;
 struct ttm_bo_global *VAR_3 = VAR_1->glob;
 struct ttm_bo_driver *VAR_4 = VAR_2->driver;
 void *VAR_5 = ((void*)0);
 int VAR_6;
 int VAR_7;

 FUNC_4(&VAR_3->lru_lock);
 VAR_7 = FUNC_12(VAR_1, 0, 1, 0, 0);

 FUNC_4(&VAR_2->fence_lock);
 (void) FUNC_13(VAR_1, 0, 0, 1);
 if (!VAR_7 && !VAR_1->sync_obj) {
  FUNC_5(&VAR_2->fence_lock);
  VAR_6 = FUNC_10(VAR_1);

  FUNC_5(&VAR_3->lru_lock);
  FUNC_9(VAR_1);

  FUNC_11(VAR_1, VAR_6, 1);

  return;
 }
 if (VAR_1->sync_obj)
  VAR_5 = VAR_4->sync_obj_ref(VAR_1->sync_obj);
 FUNC_5(&VAR_2->fence_lock);

 if (!VAR_7) {
  FUNC_0(&VAR_1->reserved, 0);
  FUNC_14(&VAR_1->event_queue);
 }

 FUNC_1(&VAR_1->list_kref);
 FUNC_2(&VAR_1->ddestroy, &VAR_2->ddestroy);
 FUNC_5(&VAR_3->lru_lock);

 if (VAR_5) {
  VAR_4->sync_obj_flush(VAR_5);
  VAR_4->sync_obj_unref(&VAR_5);
 }
 FUNC_3(&VAR_2->wq,
         ((VAR_0 / 100) < 1) ? 1 : VAR_0 / 100);
}
