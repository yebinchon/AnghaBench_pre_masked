
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
struct drm_gem_object {scalar_t__ name; } ;
struct drm_gem_flink {void* name; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int object_name_lock; int object_name_idr; TYPE_1__* driver; } ;
struct TYPE_2__ {int driver_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct drm_gem_object* FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int *,struct drm_gem_object*,int,scalar_t__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct drm_device *VAR_6, void *VAR_7,
      struct drm_file *VAR_8)
{
 struct drm_gem_flink *VAR_9 = VAR_7;
 struct drm_gem_object *VAR_10;
 int VAR_11;

 if (!(VAR_6->driver->driver_features & VAR_0))
  return -VAR_2;

 VAR_10 = FUNC_0(VAR_6, VAR_8, VAR_9->handle);
 if (VAR_10 == ((void*)0))
  return -VAR_3;

again:
 if (FUNC_4(&VAR_6->object_name_idr, VAR_5) == 0) {
  VAR_11 = -VAR_4;
  goto err;
 }

 FUNC_5(&VAR_6->object_name_lock);
 if (!VAR_10->name) {
  VAR_11 = FUNC_3(&VAR_6->object_name_idr, VAR_10, 1,
     &VAR_10->name);
  VAR_9->name = (uint64_t) VAR_10->name;
  FUNC_6(&VAR_6->object_name_lock);

  if (VAR_11 == -VAR_1)
   goto again;
  else if (VAR_11)
   goto err;


  FUNC_1(VAR_10);
 } else {
  VAR_9->name = (uint64_t) VAR_10->name;
  FUNC_6(&VAR_6->object_name_lock);
  VAR_11 = 0;
 }

err:
 FUNC_2(VAR_10);
 return VAR_11;
}
