
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fb_info {struct drm_fb_helper* par; } ;
struct drm_fb_helper {int crtc_count; int connector_count; TYPE_3__** connector_info; TYPE_2__* crtc_info; struct drm_device* dev; } ;
struct TYPE_10__ {int dpms_property; } ;
struct drm_device {TYPE_5__ mode_config; } ;
struct drm_crtc {int enabled; } ;
struct drm_connector {int base; TYPE_4__* funcs; } ;
struct TYPE_9__ {int (* dpms ) (struct drm_connector*,int) ;} ;
struct TYPE_8__ {struct drm_connector* connector; } ;
struct TYPE_6__ {struct drm_crtc* crtc; } ;
struct TYPE_7__ {TYPE_1__ mode_set; } ;


 int FUNC_0 (struct drm_fb_helper*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *,int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct drm_connector*,int) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_1, int VAR_2)
{
 struct drm_fb_helper *VAR_3 = VAR_1->par;
 struct drm_device *VAR_4 = VAR_3->dev;
 struct drm_crtc *VAR_5;
 struct drm_connector *VAR_6;
 int VAR_7, VAR_8;






 if (VAR_0)
  return;




 FUNC_1(VAR_4);
 if (!FUNC_0(VAR_3)) {
  FUNC_2(VAR_4);
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->crtc_count; VAR_7++) {
  VAR_5 = VAR_3->crtc_info[VAR_7].mode_set.crtc;

  if (!VAR_5->enabled)
   continue;


  for (VAR_8 = 0; VAR_8 < VAR_3->connector_count; VAR_8++) {
   VAR_6 = VAR_3->connector_info[VAR_8]->connector;
   VAR_6->funcs->dpms(VAR_6, VAR_2);
   FUNC_3(&VAR_6->base,
    VAR_4->mode_config.dpms_property, VAR_2);
  }
 }
 FUNC_2(VAR_4);
}
