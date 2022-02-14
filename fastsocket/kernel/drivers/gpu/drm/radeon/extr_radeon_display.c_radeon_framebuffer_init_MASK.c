
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_framebuffer {struct drm_gem_object* obj; int base; } ;
struct drm_mode_fb_cmd2 {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,int *,int *) ;
 int FUNC_1 (int *,struct drm_mode_fb_cmd2*) ;
 int VAR_0 ;

int
FUNC_2(struct drm_device *VAR_1,
   struct radeon_framebuffer *VAR_2,
   struct drm_mode_fb_cmd2 *VAR_3,
   struct drm_gem_object *VAR_4)
{
 int VAR_5;
 VAR_2->obj = VAR_4;
 FUNC_1(&VAR_2->base, VAR_3);
 VAR_5 = FUNC_0(VAR_1, &VAR_2->base, &VAR_0);
 if (VAR_5) {
  VAR_2->obj = ((void*)0);
  return VAR_5;
 }
 return 0;
}
