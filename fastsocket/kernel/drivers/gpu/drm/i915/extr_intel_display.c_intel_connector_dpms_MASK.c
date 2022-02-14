
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ crtc; } ;
struct intel_encoder {int connectors_active; TYPE_1__ base; } ;
struct drm_connector {int dpms; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct intel_encoder* FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (struct intel_encoder*,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct drm_connector *VAR_2, int VAR_3)
{
 struct intel_encoder *VAR_4 = FUNC_1(VAR_2);


 if (VAR_3 != VAR_1)
  VAR_3 = VAR_0;

 if (VAR_3 == VAR_2->dpms)
  return;

 VAR_2->dpms = VAR_3;


 if (VAR_4->base.crtc)
  FUNC_2(VAR_4, VAR_3);
 else
  FUNC_0(VAR_4->connectors_active != 0);

 FUNC_3(VAR_2->dev);
}
