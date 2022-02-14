
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int ddestroy; int event_queue; int reserved; int sync_obj; struct ttm_bo_global* glob; struct ttm_bo_device* bdev; } ;
struct ttm_bo_global {int lru_lock; } ;
struct ttm_bo_driver {int (* sync_obj_wait ) (void*,int,int) ;int (* sync_obj_unref ) (void**) ;void* (* sync_obj_ref ) (int ) ;} ;
struct ttm_bo_device {int fence_lock; struct ttm_bo_driver* driver; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void*,int,int) ;
 int FUNC_8 (void**) ;
 int FUNC_9 (struct ttm_buffer_object*) ;
 int FUNC_10 (struct ttm_buffer_object*) ;
 int FUNC_11 (struct ttm_buffer_object*,int,int) ;
 int FUNC_12 (struct ttm_buffer_object*,int,int,int,int ) ;
 int FUNC_13 (struct ttm_buffer_object*,int,int,int) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct ttm_buffer_object *VAR_0,
       bool VAR_1,
       bool VAR_2)
{
 struct ttm_bo_device *VAR_3 = VAR_0->bdev;
 struct ttm_bo_driver *VAR_4 = VAR_3->driver;
 struct ttm_bo_global *VAR_5 = VAR_0->glob;
 int VAR_6;
 int VAR_7;

 FUNC_4(&VAR_3->fence_lock);
 VAR_7 = FUNC_13(VAR_0, 0, 0, 1);

 if (VAR_7 && !VAR_2) {
  void *VAR_8;






  VAR_8 = VAR_4->sync_obj_ref(VAR_0->sync_obj);
  FUNC_5(&VAR_3->fence_lock);

  FUNC_1(&VAR_0->reserved, 0);
  FUNC_15(&VAR_0->event_queue);
  FUNC_5(&VAR_5->lru_lock);

  VAR_7 = VAR_4->sync_obj_wait(VAR_8, 0, VAR_1);
  VAR_4->sync_obj_unref(&VAR_8);
  if (VAR_7)
   return VAR_7;





  FUNC_4(&VAR_3->fence_lock);
  VAR_7 = FUNC_13(VAR_0, 0, 0, 1);
  FUNC_0(VAR_7);
  FUNC_5(&VAR_3->fence_lock);
  if (VAR_7)
   return VAR_7;

  FUNC_4(&VAR_5->lru_lock);
  VAR_7 = FUNC_12(VAR_0, 0, 1, 0, 0);
  if (VAR_7) {
   FUNC_5(&VAR_5->lru_lock);
   return 0;
  }
 } else
  FUNC_5(&VAR_3->fence_lock);

 if (VAR_7 || FUNC_14(FUNC_3(&VAR_0->ddestroy))) {
  FUNC_1(&VAR_0->reserved, 0);
  FUNC_15(&VAR_0->event_queue);
  FUNC_5(&VAR_5->lru_lock);
  return VAR_7;
 }

 VAR_6 = FUNC_10(VAR_0);
 FUNC_2(&VAR_0->ddestroy);
 ++VAR_6;

 FUNC_5(&VAR_5->lru_lock);
 FUNC_9(VAR_0);

 FUNC_11(VAR_0, VAR_6, 1);

 return 0;
}
