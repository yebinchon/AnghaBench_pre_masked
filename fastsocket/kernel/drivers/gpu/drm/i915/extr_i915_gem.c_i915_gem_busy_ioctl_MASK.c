
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int active; int base; scalar_t__ ring; } ;
struct drm_i915_gem_busy {int busy; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 struct drm_i915_gem_object* FUNC_7 (int ) ;

int
FUNC_8(struct drm_device *VAR_2, void *VAR_3,
      struct drm_file *VAR_4)
{
 struct drm_i915_gem_busy *VAR_5 = VAR_3;
 struct drm_i915_gem_object *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_7(FUNC_1(VAR_2, VAR_4, VAR_5->handle));
 if (&VAR_6->base == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto unlock;
 }






 VAR_7 = FUNC_3(VAR_6);

 VAR_5->busy = VAR_6->active;
 if (VAR_6->ring) {
  FUNC_0(VAR_1 > 16);
  VAR_5->busy |= FUNC_5(VAR_6->ring) << 16;
 }

 FUNC_2(&VAR_6->base);
unlock:
 FUNC_6(&VAR_2->struct_mutex);
 return VAR_7;
}
