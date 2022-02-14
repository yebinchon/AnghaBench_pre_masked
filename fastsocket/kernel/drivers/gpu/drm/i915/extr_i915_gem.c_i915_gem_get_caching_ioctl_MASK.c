
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {scalar_t__ cache_level; int base; } ;
struct drm_i915_gem_caching {int caching; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 struct drm_i915_gem_object* FUNC_4 (int ) ;

int FUNC_5(struct drm_device *VAR_2, void *VAR_3,
          struct drm_file *VAR_4)
{
 struct drm_i915_gem_caching *VAR_5 = VAR_3;
 struct drm_i915_gem_object *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_4(FUNC_0(VAR_2, VAR_4, VAR_5->handle));
 if (&VAR_6->base == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto unlock;
 }

 VAR_5->caching = VAR_6->cache_level != VAR_1;

 FUNC_1(&VAR_6->base);
unlock:
 FUNC_3(&VAR_2->struct_mutex);
 return VAR_7;
}
