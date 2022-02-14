
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_end; int vm_start; int vm_flags; struct ttm_buffer_object* vm_private_data; int * vm_ops; int vm_pgoff; } ;
struct ttm_buffer_object {TYPE_1__* bdev; } ;
struct ttm_bo_driver {int (* verify_access ) (struct ttm_buffer_object*,struct file*) ;} ;
struct ttm_bo_device {int vm_lock; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct ttm_bo_driver* driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ttm_buffer_object*,struct file*) ;
 int FUNC_5 (struct ttm_buffer_object*) ;
 int FUNC_6 (struct ttm_buffer_object**) ;
 struct ttm_buffer_object* FUNC_7 (struct ttm_bo_device*,int ,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct file *VAR_8, struct vm_area_struct *VAR_9,
  struct ttm_bo_device *VAR_10)
{
 struct ttm_bo_driver *VAR_11;
 struct ttm_buffer_object *VAR_12;
 int VAR_13;

 FUNC_2(&VAR_10->vm_lock);
 VAR_12 = FUNC_7(VAR_10, VAR_9->vm_pgoff,
     (VAR_9->vm_end - VAR_9->vm_start) >> VAR_2);
 if (FUNC_0(VAR_12 != ((void*)0)))
  FUNC_5(VAR_12);
 FUNC_3(&VAR_10->vm_lock);

 if (FUNC_8(VAR_12 == ((void*)0))) {
  FUNC_1("Could not find buffer object to map\n");
  return -VAR_0;
 }

 VAR_11 = VAR_12->bdev->driver;
 if (FUNC_8(!VAR_11->verify_access)) {
  VAR_13 = -VAR_1;
  goto out_unref;
 }
 VAR_13 = VAR_11->verify_access(VAR_12, VAR_8);
 if (FUNC_8(VAR_13 != 0))
  goto out_unref;

 VAR_9->vm_ops = &VAR_7;






 VAR_9->vm_private_data = VAR_12;
 VAR_9->vm_flags |= VAR_6 | VAR_4 | VAR_5 | VAR_3;
 return 0;
out_unref:
 FUNC_6(&VAR_12);
 return VAR_13;
}
