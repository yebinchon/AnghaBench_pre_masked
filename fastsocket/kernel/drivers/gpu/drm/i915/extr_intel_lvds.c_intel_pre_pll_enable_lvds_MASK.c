
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct intel_lvds_encoder {int reg; scalar_t__ is_dual_link; TYPE_3__* attached_connector; } ;
struct TYPE_9__ {int crtc; struct drm_device* dev; } ;
struct intel_encoder {TYPE_4__ base; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int lvds_border_bits; scalar_t__ lvds_dither; } ;
struct drm_display_mode {int flags; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_10__ {int gen; } ;
struct TYPE_6__ {struct drm_display_mode* fixed_mode; } ;
struct TYPE_7__ {TYPE_1__ panel; } ;
struct TYPE_8__ {TYPE_2__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 TYPE_5__* FUNC_3 (struct drm_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int VAR_10 ;
 struct intel_crtc* FUNC_5 (int ) ;
 struct intel_lvds_encoder* FUNC_6 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_7(struct intel_encoder *VAR_11)
{
 struct intel_lvds_encoder *VAR_12 = FUNC_6(&VAR_11->base);
 struct drm_device *VAR_13 = VAR_11->base.dev;
 struct drm_i915_private *VAR_14 = VAR_13->dev_private;
 struct intel_crtc *VAR_15 = FUNC_5(VAR_11->base.crtc);
 struct drm_display_mode *VAR_16 =
  VAR_12->attached_connector->base.panel.fixed_mode;
 int VAR_17 = VAR_15->pipe;
 u32 VAR_18;

 VAR_18 = FUNC_1(VAR_12->reg);
 VAR_18 |= VAR_8 | VAR_2;

 if (FUNC_0(VAR_13)) {
  VAR_18 &= ~VAR_10;
  VAR_18 |= FUNC_4(VAR_17);
 } else {
  if (VAR_17 == 1) {
   VAR_18 |= VAR_7;
  } else {
   VAR_18 &= ~VAR_7;
  }
 }


 VAR_18 |= VAR_14->lvds_border_bits;



 if (VAR_12->is_dual_link)
  VAR_18 |= VAR_3 | VAR_4;
 else
  VAR_18 &= ~(VAR_3 | VAR_4);
 if (FUNC_3(VAR_13)->gen == 4) {
  if (VAR_14->lvds_dither)
   VAR_18 |= VAR_5;
  else
   VAR_18 &= ~VAR_5;
 }
 VAR_18 &= ~(VAR_6 | VAR_9);
 if (VAR_16->flags & VAR_0)
  VAR_18 |= VAR_6;
 if (VAR_16->flags & VAR_1)
  VAR_18 |= VAR_9;

 FUNC_2(VAR_12->reg, VAR_18);
}
