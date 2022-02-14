
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_framebuffer {int dummy; } ;
struct nouveau_framebuffer {struct drm_framebuffer base; } ;
struct drm_mode_fb_cmd2 {int * handles; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_0 (int) ;
 int VAR_2 ;
 struct drm_gem_object* FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (struct drm_gem_object*) ;
 struct nouveau_framebuffer* FUNC_3 (int,int ) ;
 int FUNC_4 (struct drm_device*,struct nouveau_framebuffer*,struct drm_mode_fb_cmd2*,int ) ;
 int FUNC_5 (struct drm_gem_object*) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_6(struct drm_device *VAR_3,
    struct drm_file *VAR_4,
    struct drm_mode_fb_cmd2 *VAR_5)
{
 struct nouveau_framebuffer *VAR_6;
 struct drm_gem_object *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5->handles[0]);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_6 = FUNC_3(sizeof(struct nouveau_framebuffer), VAR_2);
 if (!VAR_6)
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_4(VAR_3, VAR_6, VAR_5, FUNC_5(VAR_7));
 if (VAR_8) {
  FUNC_2(VAR_7);
  return FUNC_0(VAR_8);
 }

 return &VAR_6->base;
}
