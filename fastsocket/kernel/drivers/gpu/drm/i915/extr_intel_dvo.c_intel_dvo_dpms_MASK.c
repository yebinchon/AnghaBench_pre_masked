
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct drm_crtc* crtc; } ;
struct TYPE_8__ {int connectors_active; TYPE_1__ base; } ;
struct TYPE_9__ {TYPE_2__* dev_ops; } ;
struct intel_dvo {TYPE_3__ base; TYPE_4__ dev; } ;
struct drm_crtc {int dummy; } ;
struct drm_connector {int dpms; int dev; } ;
struct TYPE_7__ {int (* dpms ) (TYPE_4__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct intel_dvo* FUNC_0 (struct drm_connector*) ;
 int FUNC_1 (struct drm_crtc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int) ;

__attribute__((used)) static void FUNC_5(struct drm_connector *VAR_2, int VAR_3)
{
 struct intel_dvo *VAR_4 = FUNC_0(VAR_2);
 struct drm_crtc *VAR_5;


 if (VAR_3 != VAR_1)
  VAR_3 = VAR_0;

 if (VAR_3 == VAR_2->dpms)
  return;

 VAR_2->dpms = VAR_3;


 VAR_5 = VAR_4->base.base.crtc;
 if (!VAR_5) {
  VAR_4->base.connectors_active = 0;
  return;
 }

 if (VAR_3 == VAR_1) {
  VAR_4->base.connectors_active = 1;

  FUNC_1(VAR_5);

  VAR_4->dev.dev_ops->dpms(&VAR_4->dev, 1);
 } else {
  VAR_4->dev.dev_ops->dpms(&VAR_4->dev, 0);

  VAR_4->base.connectors_active = 0;

  FUNC_1(VAR_5);
 }

 FUNC_2(VAR_2->dev);
}
