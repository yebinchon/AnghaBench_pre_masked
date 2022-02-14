
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_crtc* crtc; } ;
struct intel_encoder {int connectors_active; TYPE_1__ base; } ;
struct drm_device {int dummy; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector {int dpms; struct drm_device* dev; } ;
struct TYPE_4__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct drm_device*) ;
 struct intel_encoder* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct intel_encoder*,int) ;
 int FUNC_3 (struct drm_crtc*) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;
 struct intel_encoder *VAR_5 = FUNC_1(VAR_2);
 struct drm_crtc *VAR_6;
 int VAR_7;


 if (FUNC_0(VAR_4)->gen >= 5 && VAR_3 != VAR_1)
  VAR_3 = VAR_0;

 if (VAR_3 == VAR_2->dpms)
  return;

 VAR_7 = VAR_2->dpms;
 VAR_2->dpms = VAR_3;


 VAR_6 = VAR_5->base.crtc;
 if (!VAR_6) {
  VAR_5->connectors_active = 0;
  return;
 }


 if (VAR_3 == VAR_0)
  VAR_5->connectors_active = 0;
 else
  VAR_5->connectors_active = 1;

 if (VAR_3 < VAR_7) {

  FUNC_3(VAR_6);

  FUNC_2(VAR_5, VAR_3);
 } else {
  FUNC_2(VAR_5, VAR_3);

  FUNC_3(VAR_6);
 }

 FUNC_4(VAR_2->dev);
}
