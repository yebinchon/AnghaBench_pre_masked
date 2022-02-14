
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_framebuffer {struct drm_i915_gem_object* obj; } ;
struct drm_i915_gem_object {int base; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;


 int FUNC_0 (struct drm_file*,int *,unsigned int*) ;
 struct intel_framebuffer* FUNC_1 (struct drm_framebuffer*) ;

__attribute__((used)) static int FUNC_2(struct drm_framebuffer *VAR_0,
      struct drm_file *VAR_1,
      unsigned int *VAR_2)
{
 struct intel_framebuffer *VAR_3 = FUNC_1(VAR_0);
 struct drm_i915_gem_object *VAR_4 = VAR_3->obj;

 return FUNC_0(VAR_1, &VAR_4->base, VAR_2);
}
