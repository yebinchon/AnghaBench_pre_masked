
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int subpixel_order; } ;
struct intel_encoder {int crtc_mask; int cloneable; int interlace_allowed; int doublescan_allowed; int base; TYPE_2__ display_info; int type; int get_hw_state; int enable; int disable; } ;
struct intel_dvo_device {int gpio; int type; TYPE_1__* dev_ops; } ;
struct intel_dvo {int panel_wants_dither; int panel_fixed_mode; struct intel_dvo_device dev; struct intel_encoder base; int get_hw_state; } ;
struct intel_connector {int panel_wants_dither; int panel_fixed_mode; struct intel_dvo_device dev; struct intel_encoder base; int get_hw_state; } ;
struct i2c_adapter {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_connector {int crtc_mask; int cloneable; int interlace_allowed; int doublescan_allowed; int base; TYPE_2__ display_info; int type; int get_hw_state; int enable; int disable; } ;
struct TYPE_3__ {int (* init ) (struct intel_dvo_device*,struct i2c_adapter*) ;} ;


 int FUNC_0 (struct intel_dvo_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct intel_encoder*,int *) ;
 int FUNC_2 (struct drm_device*,struct intel_encoder*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct drm_device*,int *,int *,int) ;
 int FUNC_6 (struct intel_encoder*) ;
 int FUNC_7 (struct intel_dvo*,struct intel_encoder*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct intel_dvo_device* VAR_14 ;
 int VAR_15 ;
 int FUNC_8 (struct intel_encoder*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (struct i2c_adapter*,int) ;
 struct i2c_adapter* FUNC_10 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (struct intel_dvo*) ;
 struct intel_dvo* FUNC_13 (int,int ) ;
 int FUNC_14 (struct intel_dvo_device*,struct i2c_adapter*) ;

void FUNC_15(struct drm_device *VAR_19)
{
 struct drm_i915_private *VAR_20 = VAR_19->dev_private;
 struct intel_encoder *VAR_21;
 struct intel_dvo *VAR_22;
 struct intel_connector *VAR_23;
 int VAR_24;
 int VAR_25 = VAR_3;

 VAR_22 = FUNC_13(sizeof(struct intel_dvo), VAR_5);
 if (!VAR_22)
  return;

 VAR_23 = FUNC_13(sizeof(struct intel_connector), VAR_5);
 if (!VAR_23) {
  FUNC_12(VAR_22);
  return;
 }

 VAR_21 = &VAR_22->base;
 FUNC_5(VAR_19, &VAR_21->base,
    &VAR_15, VAR_25);

 VAR_21->disable = VAR_10;
 VAR_21->enable = VAR_18;
 VAR_21->get_hw_state = VAR_16;
 VAR_23->get_hw_state = VAR_12;


 for (VAR_24 = 0; VAR_24 < FUNC_0(VAR_14); VAR_24++) {
  struct drm_connector *VAR_26 = &VAR_23->base;
  const struct intel_dvo_device *VAR_27 = &VAR_14[VAR_24];
  struct i2c_adapter *VAR_28;
  int VAR_29;
  bool VAR_30;





  if (FUNC_11(VAR_27->gpio))
   VAR_29 = VAR_27->gpio;
  else if (VAR_27->type == 129)
   VAR_29 = VAR_7;
  else
   VAR_29 = VAR_6;





  VAR_28 = FUNC_10(VAR_20, VAR_29);

  VAR_22->dev = *VAR_27;




  FUNC_9(VAR_28, 1);

  VAR_30 = VAR_27->dev_ops->init(&VAR_22->dev, VAR_28);

  FUNC_9(VAR_28, 0);

  if (!VAR_30)
   continue;

  VAR_21->type = VAR_8;
  VAR_21->crtc_mask = (1 << 0) | (1 << 1);
  switch (VAR_27->type) {
  case 128:
   VAR_21->cloneable = 1;
   FUNC_2(VAR_19, VAR_26,
        &VAR_11,
        VAR_0);
   VAR_25 = VAR_4;
   break;
  case 129:
   VAR_21->cloneable = 0;
   FUNC_2(VAR_19, VAR_26,
        &VAR_11,
        VAR_1);
   VAR_25 = VAR_2;
   break;
  }

  FUNC_1(VAR_26,
      &VAR_13);
  VAR_26->display_info.subpixel_order = VAR_9;
  VAR_26->interlace_allowed = 0;
  VAR_26->doublescan_allowed = 0;

  FUNC_4(&VAR_21->base,
           &VAR_17);

  FUNC_7(VAR_23, VAR_21);
  if (VAR_27->type == 129) {







   VAR_22->panel_fixed_mode =
    FUNC_8(VAR_26);
   VAR_22->panel_wants_dither = 1;
  }

  FUNC_6(VAR_26);
  return;
 }

 FUNC_3(&VAR_21->base);
 FUNC_12(VAR_22);
 FUNC_12(VAR_23);
}
