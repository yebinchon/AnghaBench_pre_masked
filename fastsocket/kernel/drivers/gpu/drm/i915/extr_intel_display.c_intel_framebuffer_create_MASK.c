
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct intel_framebuffer {struct drm_framebuffer base; } ;
struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_i915_gem_object {int base; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_framebuffer* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_device*,struct intel_framebuffer*,struct drm_mode_fb_cmd2*,struct drm_i915_gem_object*) ;
 int FUNC_3 (struct intel_framebuffer*) ;
 struct intel_framebuffer* FUNC_4 (int,int ) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_5(struct drm_device *VAR_2,
    struct drm_mode_fb_cmd2 *VAR_3,
    struct drm_i915_gem_object *VAR_4)
{
 struct intel_framebuffer *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  FUNC_1(&VAR_4->base);
  return FUNC_0(-VAR_0);
 }

 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_1(&VAR_4->base);
  FUNC_3(VAR_5);
  return FUNC_0(VAR_6);
 }

 return &VAR_5->base;
}
