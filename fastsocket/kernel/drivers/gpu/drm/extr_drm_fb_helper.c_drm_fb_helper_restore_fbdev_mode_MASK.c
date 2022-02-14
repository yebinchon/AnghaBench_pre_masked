
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_mode_set {int dummy; } ;
struct drm_fb_helper {int crtc_count; TYPE_1__* crtc_info; int dev; } ;
struct TYPE_2__ {struct drm_mode_set mode_set; } ;


 int FUNC_0 (struct drm_mode_set*) ;
 int FUNC_1 (int ) ;

bool FUNC_2(struct drm_fb_helper *VAR_0)
{
 bool VAR_1 = 0;
 int VAR_2, VAR_3;

 FUNC_1(VAR_0->dev);

 for (VAR_2 = 0; VAR_2 < VAR_0->crtc_count; VAR_2++) {
  struct drm_mode_set *VAR_4 = &VAR_0->crtc_info[VAR_2].mode_set;
  VAR_3 = FUNC_0(VAR_4);
  if (VAR_3)
   VAR_1 = 1;
 }
 return VAR_1;
}
