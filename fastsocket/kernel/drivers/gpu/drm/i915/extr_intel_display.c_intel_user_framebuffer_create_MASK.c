
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int * handles; } ;
struct drm_i915_gem_object {int base; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_framebuffer* FUNC_0 (int ) ;
 int FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 struct drm_framebuffer* FUNC_2 (struct drm_device*,struct drm_mode_fb_cmd2*,struct drm_i915_gem_object*) ;
 struct drm_i915_gem_object* FUNC_3 (int ) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_4(struct drm_device *VAR_1,
         struct drm_file *VAR_2,
         struct drm_mode_fb_cmd2 *VAR_3)
{
 struct drm_i915_gem_object *VAR_4;

 VAR_4 = FUNC_3(FUNC_1(VAR_1, VAR_2,
      VAR_3->handles[0]));
 if (&VAR_4->base == ((void*)0))
  return FUNC_0(-VAR_0);

 return FUNC_2(VAR_1, VAR_3, VAR_4);
}
