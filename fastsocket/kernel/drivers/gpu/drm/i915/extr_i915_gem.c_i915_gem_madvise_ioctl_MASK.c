
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int madv; int base; int * pages; scalar_t__ pin_count; } ;
struct drm_i915_gem_madvise {int madv; int retained; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (int *) ;
 struct drm_i915_gem_object* FUNC_6 (int ) ;

int
FUNC_7(struct drm_device *VAR_3, void *VAR_4,
         struct drm_file *VAR_5)
{
 struct drm_i915_gem_madvise *VAR_6 = VAR_4;
 struct drm_i915_gem_object *VAR_7;
 int VAR_8;

 switch (VAR_6->madv) {
 case 129:
 case 128:
     break;
 default:
     return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_7 = FUNC_6(FUNC_0(VAR_3, VAR_5, VAR_6->handle));
 if (&VAR_7->base == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto unlock;
 }

 if (VAR_7->pin_count) {
  VAR_8 = -VAR_0;
  goto out;
 }

 if (VAR_7->madv != VAR_2)
  VAR_7->madv = VAR_6->madv;


 if (FUNC_2(VAR_7) && VAR_7->pages == ((void*)0))
  FUNC_3(VAR_7);

 VAR_6->retained = VAR_7->madv != VAR_2;

out:
 FUNC_1(&VAR_7->base);
unlock:
 FUNC_5(&VAR_3->struct_mutex);
 return VAR_8;
}
