
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int possible_crtcs; int possible_clones; } ;
struct intel_encoder {int type; int crtc_mask; int cloneable; TYPE_3__ base; int get_hw_state; int disable; int enable; } ;
struct intel_tv {int* margin; scalar_t__ tv_format; int type; struct intel_encoder base; } ;
struct drm_connector {int interlace_allowed; int doublescan_allowed; int base; int polled; } ;
struct intel_connector {int get_hw_state; struct drm_connector base; } ;
struct drm_i915_private {int int_tv_support; } ;
struct TYPE_6__ {int tv_bottom_margin_property; int tv_right_margin_property; int tv_top_margin_property; int tv_left_margin_property; int tv_mode_property; } ;
struct drm_device {TYPE_1__ mode_config; struct drm_i915_private* dev_private; } ;
struct TYPE_7__ {scalar_t__ name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int FUNC_4 (struct drm_connector*,int *) ;
 int FUNC_5 (struct drm_device*,struct drm_connector*,int *,int ) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (struct drm_device*,TYPE_3__*,int *,int ) ;
 int FUNC_8 (struct drm_device*,int,char**) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct drm_connector*) ;
 int FUNC_11 (struct intel_connector*,struct intel_encoder*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_12 (struct intel_tv*) ;
 void* FUNC_13 (int,int ) ;
 int FUNC_14 (struct drm_device*) ;
 TYPE_2__* VAR_23 ;

void
FUNC_15(struct drm_device *VAR_24)
{
 struct drm_i915_private *VAR_25 = VAR_24->dev_private;
 struct drm_connector *VAR_26;
 struct intel_tv *VAR_27;
 struct intel_encoder *VAR_28;
 struct intel_connector *VAR_29;
 u32 VAR_30, VAR_31, VAR_32;
 char *VAR_33[FUNC_0(VAR_23)];
 int VAR_34, VAR_35 = 0;

 if ((FUNC_2(VAR_7) & VAR_10) == VAR_9)
  return;

 if (!FUNC_14(VAR_24)) {
  FUNC_1("Integrated TV is not present.\n");
  return;
 }

 if (!VAR_25->int_tv_support)
  return;





 VAR_32 = FUNC_2(VAR_8);

 FUNC_3(VAR_8, VAR_32 | VAR_6);
 VAR_30 = FUNC_2(VAR_8);

 FUNC_3(VAR_8, VAR_32 & ~VAR_6);
 VAR_31 = FUNC_2(VAR_8);

 FUNC_3(VAR_8, VAR_32);






 if ((VAR_30 & VAR_6) == 0 ||
     (VAR_31 & VAR_6) != 0)
  return;

 VAR_27 = FUNC_13(sizeof(struct intel_tv), VAR_4);
 if (!VAR_27) {
  return;
 }

 VAR_29 = FUNC_13(sizeof(struct intel_connector), VAR_4);
 if (!VAR_29) {
  FUNC_12(VAR_27);
  return;
 }

 VAR_28 = &VAR_27->base;
 VAR_26 = &VAR_29->base;
 VAR_26->polled = VAR_0;

 FUNC_5(VAR_24, VAR_26, &VAR_18,
      VAR_1);

 FUNC_7(VAR_24, &VAR_28->base, &VAR_20,
    VAR_3);

 VAR_28->enable = VAR_17;
 VAR_28->disable = VAR_16;
 VAR_28->get_hw_state = VAR_21;
 VAR_29->get_hw_state = VAR_15;

 FUNC_11(VAR_29, VAR_28);
 VAR_28->type = VAR_5;
 VAR_28->crtc_mask = (1 << 0) | (1 << 1);
 VAR_28->cloneable = 0;
 VAR_28->base.possible_crtcs = ((1 << 0) | (1 << 1));
 VAR_28->base.possible_clones = (1 << VAR_5);
 VAR_27->type = VAR_2;


 VAR_27->margin[VAR_12] = 54;
 VAR_27->margin[VAR_14] = 36;
 VAR_27->margin[VAR_13] = 46;
 VAR_27->margin[VAR_11] = 37;

 VAR_27->tv_format = VAR_23[VAR_35].name;

 FUNC_6(&VAR_28->base, &VAR_22);
 FUNC_4(VAR_26, &VAR_19);
 VAR_26->interlace_allowed = 0;
 VAR_26->doublescan_allowed = 0;


 for (VAR_34 = 0; VAR_34 < FUNC_0(VAR_23); VAR_34++)
  VAR_33[VAR_34] = (char *)VAR_23[VAR_34].name;
 FUNC_8(VAR_24,
          FUNC_0(VAR_23),
          VAR_33);

 FUNC_9(&VAR_26->base, VAR_24->mode_config.tv_mode_property,
       VAR_35);
 FUNC_9(&VAR_26->base,
       VAR_24->mode_config.tv_left_margin_property,
       VAR_27->margin[VAR_12]);
 FUNC_9(&VAR_26->base,
       VAR_24->mode_config.tv_top_margin_property,
       VAR_27->margin[VAR_14]);
 FUNC_9(&VAR_26->base,
       VAR_24->mode_config.tv_right_margin_property,
       VAR_27->margin[VAR_13]);
 FUNC_9(&VAR_26->base,
       VAR_24->mode_config.tv_bottom_margin_property,
       VAR_27->margin[VAR_11]);
 FUNC_10(VAR_26);
}
