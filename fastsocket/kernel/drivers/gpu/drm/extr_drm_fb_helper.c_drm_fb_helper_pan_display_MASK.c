
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct TYPE_4__ {int yoffset; int xoffset; } ;
struct fb_info {TYPE_2__ var; struct drm_fb_helper* par; } ;
struct drm_mode_set {scalar_t__ num_connectors; int y; int x; struct drm_crtc* crtc; } ;
struct drm_fb_helper {int crtc_count; TYPE_1__* crtc_info; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_3__ {struct drm_mode_set mode_set; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_fb_helper*) ;
 int FUNC_1 (struct drm_mode_set*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;

int FUNC_4(struct fb_var_screeninfo *VAR_1,
         struct fb_info *VAR_2)
{
 struct drm_fb_helper *VAR_3 = VAR_2->par;
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_mode_set *VAR_5;
 struct drm_crtc *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 FUNC_2(VAR_4);
 if (!FUNC_0(VAR_3)) {
  FUNC_3(VAR_4);
  return -VAR_0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_3->crtc_count; VAR_8++) {
  VAR_6 = VAR_3->crtc_info[VAR_8].mode_set.crtc;

  VAR_5 = &VAR_3->crtc_info[VAR_8].mode_set;

  VAR_5->x = VAR_1->xoffset;
  VAR_5->y = VAR_1->yoffset;

  if (VAR_5->num_connectors) {
   VAR_7 = FUNC_1(VAR_5);
   if (!VAR_7) {
    VAR_2->var.xoffset = VAR_1->xoffset;
    VAR_2->var.yoffset = VAR_1->yoffset;
   }
  }
 }
 FUNC_3(VAR_4);
 return VAR_7;
}
