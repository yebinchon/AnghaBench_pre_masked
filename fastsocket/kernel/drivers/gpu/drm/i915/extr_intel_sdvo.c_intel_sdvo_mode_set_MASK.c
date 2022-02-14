
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_sdvo_in_out_map {scalar_t__ in1; int in0; } ;
struct TYPE_3__ {int sdvo_flags; } ;
struct intel_sdvo_dtd {TYPE_1__ part2; } ;
struct intel_sdvo {int dtd_sdvo_flags; int color_range; int sdvo_reg; scalar_t__ has_hdmi_audio; scalar_t__ is_hdmi; scalar_t__ is_lvds; scalar_t__ is_tv; scalar_t__ has_hdmi_monitor; struct drm_display_mode* sdvo_lvds_fixed_mode; int attached_output; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct drm_display_mode {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
typedef int in_out ;
struct TYPE_4__ {int gen; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct drm_device*) ;
 scalar_t__ VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct intel_sdvo*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct drm_display_mode*) ;
 int FUNC_12 (struct intel_sdvo_dtd*,struct drm_display_mode*) ;
 int FUNC_13 (struct intel_sdvo*,struct drm_display_mode*) ;
 int FUNC_14 (struct intel_sdvo*,int) ;
 int FUNC_15 (struct intel_sdvo*,int ) ;
 int FUNC_16 (struct intel_sdvo*,int ) ;
 int FUNC_17 (struct intel_sdvo*,struct intel_sdvo_dtd*) ;
 int FUNC_18 (struct intel_sdvo*,struct intel_sdvo_dtd*) ;
 int FUNC_19 (struct intel_sdvo*) ;
 int FUNC_20 (struct intel_sdvo*,int ) ;
 int FUNC_21 (struct intel_sdvo*) ;
 int FUNC_22 (struct intel_sdvo*,int ,struct intel_sdvo_in_out_map*,int) ;
 int FUNC_23 (struct intel_sdvo*,int) ;
 struct intel_crtc* FUNC_24 (struct drm_crtc*) ;
 struct intel_sdvo* FUNC_25 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_26(struct drm_encoder *VAR_17,
    struct drm_display_mode *VAR_18,
    struct drm_display_mode *VAR_19)
{
 struct drm_device *VAR_20 = VAR_17->dev;
 struct drm_i915_private *VAR_21 = VAR_20->dev_private;
 struct drm_crtc *VAR_22 = VAR_17->crtc;
 struct intel_crtc *VAR_23 = FUNC_24(VAR_22);
 struct intel_sdvo *VAR_24 = FUNC_25(VAR_17);
 u32 VAR_25;
 struct intel_sdvo_in_out_map VAR_26;
 struct intel_sdvo_dtd VAR_27, VAR_28;
 int VAR_29 = FUNC_11(VAR_19);
 int VAR_30;

 if (!VAR_18)
  return;







 VAR_26.in0 = VAR_24->attached_output;
 VAR_26.in1 = 0;

 FUNC_22(VAR_24,
        VAR_8,
        &VAR_26, sizeof(VAR_26));


 if (!FUNC_20(VAR_24,
       VAR_24->attached_output))
  return;


 if (VAR_24->is_lvds)
  FUNC_12(&VAR_28,
          VAR_24->sdvo_lvds_fixed_mode);
 else
  FUNC_12(&VAR_28, VAR_18);
 if (!FUNC_18(VAR_24, &VAR_28))
  FUNC_0("Setting output timings on %s failed\n",
    FUNC_8(VAR_24));


 if (!FUNC_19(VAR_24))
  return;

 if (VAR_24->has_hdmi_monitor) {
  FUNC_16(VAR_24, VAR_11);
  FUNC_15(VAR_24,
        VAR_9);
  FUNC_13(VAR_24, VAR_19);
 } else
  FUNC_16(VAR_24, VAR_10);

 if (VAR_24->is_tv &&
     !FUNC_21(VAR_24))
  return;




 FUNC_12(&VAR_27, VAR_19);
 if (VAR_24->is_tv || VAR_24->is_lvds)
  VAR_27.part2.sdvo_flags = VAR_24->dtd_sdvo_flags;
 if (!FUNC_17(VAR_24, &VAR_27))
  FUNC_0("Setting input timings on %s failed\n",
    FUNC_8(VAR_24));

 switch (VAR_29) {
 default:
 case 1: VAR_30 = VAR_5; break;
 case 2: VAR_30 = VAR_6; break;
 case 4: VAR_30 = VAR_7; break;
 }
 if (!FUNC_14(VAR_24, VAR_30))
  return;


 if (FUNC_3(VAR_20)->gen >= 4) {


  VAR_25 = VAR_16 | VAR_12;
  if (!FUNC_1(VAR_20) && VAR_24->is_hdmi)
   VAR_25 |= VAR_24->color_range;
  if (FUNC_3(VAR_20)->gen < 5)
   VAR_25 |= VAR_4;
 } else {
  VAR_25 = FUNC_2(VAR_24->sdvo_reg);
  switch (VAR_24->sdvo_reg) {
  case 129:
   VAR_25 &= VAR_1;
   break;
  case 128:
   VAR_25 &= VAR_2;
   break;
  }
  VAR_25 |= (9 << 19) | VAR_4;
 }

 if (FUNC_4(VAR_20) >= VAR_0)
  VAR_25 |= FUNC_10(VAR_23->pipe);
 else
  VAR_25 |= FUNC_9(VAR_23->pipe);

 if (VAR_24->has_hdmi_audio)
  VAR_25 |= VAR_3;

 if (FUNC_3(VAR_20)->gen >= 4) {

 } else if (FUNC_6(VAR_20) || FUNC_7(VAR_20) || FUNC_5(VAR_20)) {

 } else {
  VAR_25 |= (VAR_29 - 1) << VAR_14;
 }

 if (VAR_27.part2.sdvo_flags & VAR_13 &&
     FUNC_3(VAR_20)->gen < 5)
  VAR_25 |= VAR_15;
 FUNC_23(VAR_24, VAR_25);
}
