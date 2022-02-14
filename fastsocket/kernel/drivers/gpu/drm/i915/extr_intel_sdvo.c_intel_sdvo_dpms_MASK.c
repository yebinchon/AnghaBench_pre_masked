
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_crtc* crtc; } ;
struct TYPE_4__ {int connectors_active; TYPE_1__ base; } ;
struct intel_sdvo {int attached_output; TYPE_2__ base; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector {int dpms; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_sdvo* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intel_sdvo*,int ) ;
 int FUNC_4 (struct intel_sdvo*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_2, int VAR_3)
{
 struct drm_crtc *VAR_4;
 struct intel_sdvo *VAR_5 = FUNC_0(VAR_2);


 if (VAR_3 != VAR_1)
  VAR_3 = VAR_0;

 if (VAR_3 == VAR_2->dpms)
  return;

 VAR_2->dpms = VAR_3;


 VAR_4 = VAR_5->base.base.crtc;
 if (!VAR_4) {
  VAR_5->base.connectors_active = 0;
  return;
 }

 if (VAR_3 != VAR_1) {
  FUNC_3(VAR_5, 0);
  if (0)
   FUNC_4(VAR_5, VAR_3);

  VAR_5->base.connectors_active = 0;

  FUNC_1(VAR_4);
 } else {
  VAR_5->base.connectors_active = 1;

  FUNC_1(VAR_4);

  if (0)
   FUNC_4(VAR_5, VAR_3);
  FUNC_3(VAR_5, VAR_5->attached_output);
 }

 FUNC_2(VAR_2->dev);
}
