
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_framebuffer {int dummy; } ;
struct radeon_framebuffer {struct drm_framebuffer base; } ;
struct drm_mode_fb_cmd2 {int * handles; } ;
struct drm_gem_object {int dummy; } ;
struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_framebuffer* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int ) ;
 struct drm_gem_object* FUNC_2 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_3 (struct drm_gem_object*) ;
 int FUNC_4 (struct radeon_framebuffer*) ;
 struct radeon_framebuffer* FUNC_5 (int,int ) ;
 int FUNC_6 (struct drm_device*,struct radeon_framebuffer*,struct drm_mode_fb_cmd2*,struct drm_gem_object*) ;

__attribute__((used)) static struct drm_framebuffer *
FUNC_7(struct drm_device *VAR_3,
          struct drm_file *VAR_4,
          struct drm_mode_fb_cmd2 *VAR_5)
{
 struct drm_gem_object *VAR_6;
 struct radeon_framebuffer *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5->handles[0]);
 if (VAR_6 == ((void*)0)) {
  FUNC_1(&VAR_3->pdev->dev, "No GEM object associated to handle 0x%08X, "
   "can't create framebuffer\n", VAR_5->handles[0]);
  return FUNC_0(-VAR_0);
 }

 VAR_7 = FUNC_5(sizeof(*VAR_7), VAR_2);
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_6);
  return FUNC_0(-VAR_1);
 }

 VAR_8 = FUNC_6(VAR_3, VAR_7, VAR_5, VAR_6);
 if (VAR_8) {
  FUNC_4(VAR_7);
  FUNC_3(VAR_6);
  return FUNC_0(VAR_8);
 }

 return &VAR_7->base;
}
