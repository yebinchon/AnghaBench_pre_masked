
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object {int base; } ;
struct drm_device {int struct_mutex; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 struct drm_i915_gem_object* FUNC_4 (struct drm_device*,int) ;
 int FUNC_5 (struct drm_i915_gem_object*,int,int,int) ;
 int FUNC_6 (struct drm_i915_gem_object*,int) ;
 int FUNC_7 (struct drm_i915_gem_object*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct drm_i915_gem_object *
FUNC_9(struct drm_device *VAR_0)
{
 struct drm_i915_gem_object *VAR_1;
 int VAR_2;

 FUNC_2(!FUNC_8(&VAR_0->struct_mutex));

 VAR_1 = FUNC_4(VAR_0, 4096);
 if (!VAR_1) {
  FUNC_0("failed to alloc power context, RC6 disabled\n");
  return ((void*)0);
 }

 VAR_2 = FUNC_5(VAR_1, 4096, 1, 0);
 if (VAR_2) {
  FUNC_1("failed to pin power context: %d\n", VAR_2);
  goto err_unref;
 }

 VAR_2 = FUNC_6(VAR_1, 1);
 if (VAR_2) {
  FUNC_1("failed to set-domain on power context: %d\n", VAR_2);
  goto err_unpin;
 }

 return VAR_1;

err_unpin:
 FUNC_7(VAR_1);
err_unref:
 FUNC_3(&VAR_1->base);
 return ((void*)0);
}
