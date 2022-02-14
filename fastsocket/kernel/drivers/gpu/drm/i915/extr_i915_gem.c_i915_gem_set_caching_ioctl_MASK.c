
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int base; } ;
struct drm_i915_gem_caching {int caching; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_gem_object*,int) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;
 struct drm_i915_gem_object* FUNC_5 (int ) ;

int FUNC_6(struct drm_device *VAR_4, void *VAR_5,
          struct drm_file *VAR_6)
{
 struct drm_i915_gem_caching *VAR_7 = VAR_5;
 struct drm_i915_gem_object *VAR_8;
 enum i915_cache_level VAR_9;
 int VAR_10;

 switch (VAR_7->caching) {
 case 128:
  VAR_9 = VAR_3;
  break;
 case 129:
  VAR_9 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 VAR_10 = FUNC_3(VAR_4);
 if (VAR_10)
  return VAR_10;

 VAR_8 = FUNC_5(FUNC_0(VAR_4, VAR_6, VAR_7->handle));
 if (&VAR_8->base == ((void*)0)) {
  VAR_10 = -VAR_1;
  goto unlock;
 }

 VAR_10 = FUNC_2(VAR_8, VAR_9);

 FUNC_1(&VAR_8->base);
unlock:
 FUNC_4(&VAR_4->struct_mutex);
 return VAR_10;
}
