
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cloneable; int crtc_mask; int base; int get_hw_state; int enable; int disable; int type; } ;
struct intel_crt {scalar_t__ force_hotplug_required; TYPE_1__ base; int adpa_reg; struct intel_connector* connector; } ;
struct drm_connector {int interlace_allowed; int polled; scalar_t__ doublescan_allowed; } ;
struct intel_connector {int get_hw_state; struct drm_connector base; } ;
struct drm_i915_private {int fdi_rx_config; int hotplug_supported_mask; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct drm_connector*,int *) ;
 int FUNC_10 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (struct drm_device*,int *,int *,int ) ;
 int FUNC_13 (struct drm_connector*) ;
 int FUNC_14 (struct intel_connector*,TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_15 (struct intel_crt*) ;
 void* FUNC_16 (int,int ) ;

void FUNC_17(struct drm_device *VAR_23)
{
 struct drm_connector *VAR_24;
 struct intel_crt *VAR_25;
 struct intel_connector *VAR_26;
 struct drm_i915_private *VAR_27 = VAR_23->dev_private;


 if (FUNC_8(VAR_22))
  return;

 VAR_25 = FUNC_16(sizeof(struct intel_crt), VAR_8);
 if (!VAR_25)
  return;

 VAR_26 = FUNC_16(sizeof(struct intel_connector), VAR_8);
 if (!VAR_26) {
  FUNC_15(VAR_25);
  return;
 }

 VAR_24 = &VAR_26->base;
 VAR_25->connector = VAR_26;
 FUNC_10(VAR_23, &VAR_26->base,
      &VAR_15, VAR_4);

 FUNC_12(VAR_23, &VAR_25->base.base, &VAR_17,
    VAR_5);

 FUNC_14(VAR_26, &VAR_25->base);

 VAR_25->base.type = VAR_9;
 VAR_25->base.cloneable = 1;
 if (FUNC_6(VAR_23))
  VAR_25->base.crtc_mask = (1 << 0);
 else
  VAR_25->base.crtc_mask = (1 << 0) | (1 << 1) | (1 << 2);

 if (FUNC_5(VAR_23))
  VAR_24->interlace_allowed = 0;
 else
  VAR_24->interlace_allowed = 1;
 VAR_24->doublescan_allowed = 0;

 if (FUNC_2(VAR_23))
  VAR_25->adpa_reg = VAR_10;
 else if (FUNC_7(VAR_23))
  VAR_25->adpa_reg = VAR_11;
 else
  VAR_25->adpa_reg = VAR_0;

 VAR_25->base.disable = VAR_20;
 VAR_25->base.enable = VAR_21;
 if (FUNC_0(VAR_23))
  VAR_25->base.get_hw_state = VAR_19;
 else
  VAR_25->base.get_hw_state = VAR_18;
 VAR_26->get_hw_state = VAR_14;

 FUNC_11(&VAR_25->base.base, &VAR_13);
 FUNC_9(VAR_24, &VAR_16);

 FUNC_13(VAR_24);

 if (FUNC_3(VAR_23))
  VAR_24->polled = VAR_3;
 else
  VAR_24->polled = VAR_2;




 VAR_25->force_hotplug_required = 0;

 VAR_27->hotplug_supported_mask |= VAR_1;






 if (FUNC_1(VAR_23)) {
  u32 VAR_28 = VAR_7 |
     VAR_6;

  VAR_27->fdi_rx_config = FUNC_4(VAR_12) & VAR_28;
 }
}
