
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_dp {int DP; int panel_power_down_delay; int output_reg; } ;
struct TYPE_3__ {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct intel_digital_port {TYPE_2__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 struct intel_digital_port* FUNC_9 (struct intel_dp*) ;
 int FUNC_10 (struct drm_device*,int ) ;
 int FUNC_11 (struct intel_dp*) ;
 int FUNC_12 (int) ;
 struct intel_crtc* FUNC_13 (struct drm_crtc*) ;

__attribute__((used)) static void
FUNC_14(struct intel_dp *VAR_7)
{
 struct intel_digital_port *VAR_8 = FUNC_9(VAR_7);
 struct drm_device *VAR_9 = VAR_8->base.base.dev;
 struct drm_i915_private *VAR_10 = VAR_9->dev_private;
 struct intel_crtc *VAR_11 =
  FUNC_13(VAR_8->base.base.crtc);
 uint32_t VAR_12 = VAR_7->DP;
 if (FUNC_1(VAR_9))
  return;

 if (FUNC_8((FUNC_4(VAR_7->output_reg) & VAR_6) == 0))
  return;

 FUNC_0("\n");

 if (FUNC_2(VAR_9) && (FUNC_6(VAR_9) || !FUNC_11(VAR_7))) {
  VAR_12 &= ~VAR_2;
  FUNC_5(VAR_7->output_reg, VAR_12 | VAR_4);
 } else {
  VAR_12 &= ~VAR_1;
  FUNC_5(VAR_7->output_reg, VAR_12 | VAR_3);
 }
 FUNC_7(VAR_7->output_reg);


 FUNC_10(VAR_9, VAR_11->pipe);

 if (FUNC_3(VAR_9) &&
     FUNC_4(VAR_7->output_reg) & VAR_5) {
  struct drm_crtc *VAR_13 = VAR_8->base.base.crtc;
  VAR_12 &= ~VAR_5;
  FUNC_5(VAR_7->output_reg, VAR_12);




  if (FUNC_8(VAR_13 == ((void*)0))) {



   FUNC_7(VAR_7->output_reg);
   FUNC_12(50);
  } else
   FUNC_10(VAR_9, VAR_11->pipe);
 }

 VAR_12 &= ~VAR_0;
 FUNC_5(VAR_7->output_reg, VAR_12 & ~VAR_6);
 FUNC_7(VAR_7->output_reg);
 FUNC_12(VAR_7->panel_power_down_delay);
}
