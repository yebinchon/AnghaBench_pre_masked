
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {scalar_t__ pixclock; } ;
struct fb_info {struct fb_var_screeninfo var; struct drm_fb_helper* par; } ;
struct drm_fb_helper {int crtc_count; int delayed_hotplug; TYPE_1__* crtc_info; struct drm_device* dev; } ;
struct drm_device {int dummy; } ;
struct TYPE_2__ {int mode_set; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_fb_helper*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;

int FUNC_5(struct fb_info *VAR_1)
{
 struct drm_fb_helper *VAR_2 = VAR_1->par;
 struct drm_device *VAR_3 = VAR_2->dev;
 struct fb_var_screeninfo *VAR_4 = &VAR_1->var;
 int VAR_5;
 int VAR_6;

 if (VAR_4->pixclock != 0) {
  FUNC_0("PIXEL CLOCK SET\n");
  return -VAR_0;
 }

 FUNC_3(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_2->crtc_count; VAR_6++) {
  VAR_5 = FUNC_2(&VAR_2->crtc_info[VAR_6].mode_set);
  if (VAR_5) {
   FUNC_4(VAR_3);
   return VAR_5;
  }
 }
 FUNC_4(VAR_3);

 if (VAR_2->delayed_hotplug) {
  VAR_2->delayed_hotplug = 0;
  FUNC_1(VAR_2);
 }
 return 0;
}
