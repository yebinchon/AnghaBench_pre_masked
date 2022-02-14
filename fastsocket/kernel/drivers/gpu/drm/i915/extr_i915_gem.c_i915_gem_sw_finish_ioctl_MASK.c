
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_sw_finish {int handle; } ;
struct drm_i915_gem_object {int base; scalar_t__ pin_count; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int *) ;
 struct drm_i915_gem_object* FUNC_5 (int ) ;

int
FUNC_6(struct drm_device *VAR_1, void *VAR_2,
    struct drm_file *VAR_3)
{
 struct drm_i915_gem_sw_finish *VAR_4 = VAR_2;
 struct drm_i915_gem_object *VAR_5;
 int VAR_6 = 0;

 VAR_6 = FUNC_3(VAR_1);
 if (VAR_6)
  return VAR_6;

 VAR_5 = FUNC_5(FUNC_0(VAR_1, VAR_3, VAR_4->handle));
 if (&VAR_5->base == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto unlock;
 }


 if (VAR_5->pin_count)
  FUNC_2(VAR_5);

 FUNC_1(&VAR_5->base);
unlock:
 FUNC_4(&VAR_1->struct_mutex);
 return VAR_6;
}
