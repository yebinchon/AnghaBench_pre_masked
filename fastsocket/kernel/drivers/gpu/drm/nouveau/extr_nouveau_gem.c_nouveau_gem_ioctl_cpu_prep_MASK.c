
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* bdev; } ;
struct nouveau_bo {TYPE_2__ bo; } ;
struct drm_nouveau_gem_cpu_prep {int flags; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct TYPE_3__ {int fence_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_gem_object* FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (struct drm_gem_object*) ;
 struct nouveau_bo* FUNC_2 (struct drm_gem_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int,int,int) ;

int
FUNC_6(struct drm_device *VAR_3, void *VAR_4,
      struct drm_file *VAR_5)
{
 struct drm_nouveau_gem_cpu_prep *VAR_6 = VAR_4;
 struct drm_gem_object *VAR_7;
 struct nouveau_bo *VAR_8;
 bool VAR_9 = !!(VAR_6->flags & VAR_2);
 int VAR_10 = -VAR_0;

 VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_6->handle);
 if (!VAR_7)
  return -VAR_1;
 VAR_8 = FUNC_2(VAR_7);

 FUNC_3(&VAR_8->bo.bdev->fence_lock);
 VAR_10 = FUNC_5(&VAR_8->bo, 1, 1, VAR_9);
 FUNC_4(&VAR_8->bo.bdev->fence_lock);
 FUNC_1(VAR_7);
 return VAR_10;
}
