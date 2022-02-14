
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_gem_open {int size; int handle; scalar_t__ name; } ;
struct drm_gem_object {int size; } ;
struct drm_file {int dummy; } ;
struct drm_device {int object_name_lock; int object_name_idr; TYPE_1__* driver; } ;
struct TYPE_2__ {int driver_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_file*,struct drm_gem_object*,int *) ;
 int FUNC_1 (struct drm_gem_object*) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct drm_gem_object* FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(struct drm_device *VAR_3, void *VAR_4,
     struct drm_file *VAR_5)
{
 struct drm_gem_open *VAR_6 = VAR_4;
 struct drm_gem_object *VAR_7;
 int VAR_8;
 u32 VAR_9;

 if (!(VAR_3->driver->driver_features & VAR_0))
  return -VAR_1;

 FUNC_4(&VAR_3->object_name_lock);
 VAR_7 = FUNC_3(&VAR_3->object_name_idr, (int) VAR_6->name);
 if (VAR_7)
  FUNC_1(VAR_7);
 FUNC_5(&VAR_3->object_name_lock);
 if (!VAR_7)
  return -VAR_2;

 VAR_8 = FUNC_0(VAR_5, VAR_7, &VAR_9);
 FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_6->handle = VAR_9;
 VAR_6->size = VAR_7->size;

 return 0;
}
