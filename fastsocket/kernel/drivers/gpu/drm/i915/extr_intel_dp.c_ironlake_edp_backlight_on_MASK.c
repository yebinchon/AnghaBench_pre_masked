
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct intel_dp {int backlight_on_delay; } ;
struct TYPE_5__ {int crtc; struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_2__ base; } ;
struct intel_digital_port {TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_6__ {int pipe; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 struct intel_digital_port* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct drm_device*,int) ;
 int FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ) ;

void FUNC_9(struct intel_dp *VAR_2)
{
 struct intel_digital_port *VAR_3 = FUNC_3(VAR_2);
 struct drm_device *VAR_4 = VAR_3->base.base.dev;
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 int VAR_6 = FUNC_8(VAR_3->base.base.crtc)->pipe;
 u32 VAR_7;

 if (!FUNC_6(VAR_2))
  return;

 FUNC_0("\n");






 FUNC_7(VAR_2->backlight_on_delay);
 VAR_7 = FUNC_5(VAR_5);
 VAR_7 |= VAR_0;
 FUNC_1(VAR_1, VAR_7);
 FUNC_2(VAR_1);

 FUNC_4(VAR_4, VAR_6);
}
