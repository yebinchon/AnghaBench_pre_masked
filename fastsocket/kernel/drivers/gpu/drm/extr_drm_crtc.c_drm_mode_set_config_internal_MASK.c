
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_set {struct drm_framebuffer* fb; struct drm_crtc* crtc; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_crtc {TYPE_1__* funcs; struct drm_framebuffer* fb; } ;
struct TYPE_2__ {int (* set_config ) (struct drm_mode_set*) ;} ;


 int FUNC_0 (struct drm_framebuffer*) ;
 int FUNC_1 (struct drm_framebuffer*) ;
 int FUNC_2 (struct drm_mode_set*) ;

int FUNC_3(struct drm_mode_set *VAR_0)
{
 struct drm_crtc *VAR_1 = VAR_0->crtc;
 struct drm_framebuffer *VAR_2, *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->fb;
 VAR_2 = VAR_0->fb;

 VAR_4 = VAR_1->funcs->set_config(VAR_0);
 if (VAR_4 == 0) {
  if (VAR_3)
   FUNC_1(VAR_3);
  if (VAR_2)
   FUNC_0(VAR_2);
 }

 return VAR_4;
}
