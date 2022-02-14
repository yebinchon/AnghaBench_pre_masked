
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {void* sync_obj; int priv_flags; struct ttm_bo_device* bdev; } ;
struct ttm_bo_driver {int (* sync_obj_wait ) (void*,int,int) ;int (* sync_obj_unref ) (void**) ;void* (* sync_obj_ref ) (void*) ;scalar_t__ (* sync_obj_signaled ) (void*) ;} ;
struct ttm_bo_device {int fence_lock; struct ttm_bo_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (void**) ;
 void* FUNC_6 (void*) ;
 int FUNC_7 (void*,int,int) ;
 int FUNC_8 (void**) ;
 int FUNC_9 (void**) ;
 int FUNC_10 (void**) ;
 int FUNC_11 (void**) ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct ttm_buffer_object *VAR_2,
  bool VAR_3, bool VAR_4, bool VAR_5)
{
 struct ttm_bo_driver *VAR_6 = VAR_2->bdev->driver;
 struct ttm_bo_device *VAR_7 = VAR_2->bdev;
 void *VAR_8;
 int VAR_9 = 0;

 if (FUNC_1(VAR_2->sync_obj == ((void*)0)))
  return 0;

 while (VAR_2->sync_obj) {

  if (VAR_6->sync_obj_signaled(VAR_2->sync_obj)) {
   void *VAR_10 = VAR_2->sync_obj;
   VAR_2->sync_obj = ((void*)0);
   FUNC_0(VAR_1, &VAR_2->priv_flags);
   FUNC_3(&VAR_7->fence_lock);
   VAR_6->sync_obj_unref(&VAR_10);
   FUNC_2(&VAR_7->fence_lock);
   continue;
  }

  if (VAR_5)
   return -VAR_0;

  VAR_8 = VAR_6->sync_obj_ref(VAR_2->sync_obj);
  FUNC_3(&VAR_7->fence_lock);
  VAR_9 = VAR_6->sync_obj_wait(VAR_8,
         VAR_3, VAR_4);
  if (FUNC_12(VAR_9 != 0)) {
   VAR_6->sync_obj_unref(&VAR_8);
   FUNC_2(&VAR_7->fence_lock);
   return VAR_9;
  }
  FUNC_2(&VAR_7->fence_lock);
  if (FUNC_1(VAR_2->sync_obj == VAR_8)) {
   void *VAR_11 = VAR_2->sync_obj;
   VAR_2->sync_obj = ((void*)0);
   FUNC_0(VAR_1,
      &VAR_2->priv_flags);
   FUNC_3(&VAR_7->fence_lock);
   VAR_6->sync_obj_unref(&VAR_8);
   VAR_6->sync_obj_unref(&VAR_11);
   FUNC_2(&VAR_7->fence_lock);
  } else {
   FUNC_3(&VAR_7->fence_lock);
   VAR_6->sync_obj_unref(&VAR_8);
   FUNC_2(&VAR_7->fence_lock);
  }
 }
 return 0;
}
