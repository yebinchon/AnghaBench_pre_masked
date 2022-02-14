
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_info {struct drm_fb_helper* par; } ;
struct drm_mode_set {struct drm_crtc* crtc; } ;
struct drm_framebuffer {int dummy; } ;
struct drm_fb_helper {int crtc_count; TYPE_1__* crtc_info; } ;
struct drm_crtc_helper_funcs {int (* mode_set_base_atomic ) (struct drm_crtc*,struct drm_framebuffer*,int ,int ,int ) ;} ;
struct drm_crtc {int y; int x; int enabled; struct drm_crtc_helper_funcs* helper_private; } ;
struct TYPE_2__ {struct drm_mode_set mode_set; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_crtc*) ;
 struct drm_framebuffer* FUNC_2 (struct drm_crtc*) ;
 int FUNC_3 (struct drm_crtc*,struct drm_framebuffer*,int ,int ,int ) ;

int FUNC_4(struct fb_info *VAR_1)
{
 struct drm_fb_helper *VAR_2 = VAR_1->par;
 struct drm_crtc *VAR_3;
 struct drm_crtc_helper_funcs *VAR_4;
 struct drm_framebuffer *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->crtc_count; VAR_6++) {
  struct drm_mode_set *VAR_7 = &VAR_2->crtc_info[VAR_6].mode_set;
  VAR_3 = VAR_7->crtc;
  VAR_4 = VAR_3->helper_private;
  VAR_5 = FUNC_2(VAR_3);

  if (!VAR_3->enabled)
   continue;

  if (!VAR_5) {
   FUNC_0("no fb to restore??\n");
   continue;
  }

  FUNC_1(VAR_7->crtc);
  VAR_4->mode_set_base_atomic(VAR_7->crtc, VAR_5, VAR_3->x,
         VAR_3->y, VAR_0);
 }

 return 0;
}
