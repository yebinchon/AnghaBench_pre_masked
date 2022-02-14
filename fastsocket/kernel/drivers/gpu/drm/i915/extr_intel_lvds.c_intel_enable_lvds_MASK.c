
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_lvds_encoder {int reg; } ;
struct TYPE_2__ {int crtc; struct drm_device* dev; } ;
struct intel_encoder {TYPE_1__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct drm_device*,int ) ;
 struct intel_crtc* FUNC_6 (int ) ;
 struct intel_lvds_encoder* FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int,int) ;

__attribute__((used)) static void FUNC_9(struct intel_encoder *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->base.dev;
 struct intel_lvds_encoder *VAR_9 = FUNC_7(&VAR_7->base);
 struct intel_crtc *VAR_10 = FUNC_6(VAR_7->base.crtc);
 struct drm_i915_private *VAR_11 = VAR_8->dev_private;
 u32 VAR_12, VAR_13;

 if (FUNC_1(VAR_8)) {
  VAR_12 = VAR_1;
  VAR_13 = VAR_2;
 } else {
  VAR_12 = VAR_4;
  VAR_13 = VAR_6;
 }

 FUNC_3(VAR_9->reg, FUNC_2(VAR_9->reg) | VAR_0);

 FUNC_3(VAR_12, FUNC_2(VAR_12) | VAR_3);
 FUNC_4(VAR_9->reg);
 if (FUNC_8((FUNC_2(VAR_13) & VAR_5) != 0, 1000))
  FUNC_0("timed out waiting for panel to power on\n");

 FUNC_5(VAR_8, VAR_10->pipe);
}
