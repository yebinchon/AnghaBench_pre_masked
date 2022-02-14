
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mode_fb_cmd2 {int pixel_format; int width; int * pitches; int height; int member_0; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_display_mode {int vdisplay; int hdisplay; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 struct drm_framebuffer* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 struct drm_i915_gem_object* FUNC_2 (struct drm_device*,int ) ;
 struct drm_framebuffer* FUNC_3 (struct drm_device*,struct drm_mode_fb_cmd2*,struct drm_i915_gem_object*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct drm_display_mode*,int) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_6(struct drm_device *VAR_1,
      struct drm_display_mode *VAR_2,
      int VAR_3, int VAR_4)
{
 struct drm_i915_gem_object *VAR_5;
 struct drm_mode_fb_cmd2 VAR_6 = { 0 };

 VAR_5 = FUNC_2(VAR_1,
        FUNC_5(VAR_2, VAR_4));
 if (VAR_5 == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_6.width = VAR_2->hdisplay;
 VAR_6.height = VAR_2->vdisplay;
 VAR_6.pitches[0] = FUNC_4(VAR_6.width,
        VAR_4);
 VAR_6.pixel_format = FUNC_1(VAR_4, VAR_3);

 return FUNC_3(VAR_1, &VAR_6, VAR_5);
}
