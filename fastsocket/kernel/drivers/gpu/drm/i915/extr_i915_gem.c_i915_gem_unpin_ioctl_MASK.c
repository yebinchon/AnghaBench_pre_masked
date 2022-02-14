
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_pin {int handle; } ;
struct drm_i915_gem_object {scalar_t__ user_pin_count; int base; struct drm_file* pin_filp; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 struct drm_i915_gem_object* FUNC_6 (int ) ;

int
FUNC_7(struct drm_device *VAR_2, void *VAR_3,
       struct drm_file *VAR_4)
{
 struct drm_i915_gem_pin *VAR_5 = VAR_3;
 struct drm_i915_gem_object *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_6(FUNC_1(VAR_2, VAR_4, VAR_5->handle));
 if (&VAR_6->base == ((void*)0)) {
  VAR_7 = -VAR_1;
  goto unlock;
 }

 if (VAR_6->pin_filp != VAR_4) {
  FUNC_0("Not pinned by caller in i915_gem_pin_ioctl(): %d\n",
     VAR_5->handle);
  VAR_7 = -VAR_0;
  goto out;
 }
 VAR_6->user_pin_count--;
 if (VAR_6->user_pin_count == 0) {
  VAR_6->pin_filp = ((void*)0);
  FUNC_3(VAR_6);
 }

out:
 FUNC_2(&VAR_6->base);
unlock:
 FUNC_5(&VAR_2->struct_mutex);
 return VAR_7;
}
