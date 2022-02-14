
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int DP; int lane_count; int* link_configuration; int color_range; scalar_t__ has_audio; int output_reg; } ;
struct intel_crtc {int pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {struct drm_crtc* crtc; struct drm_device* dev; } ;
struct drm_display_mode {int flags; int clock; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 struct intel_dp* FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_9 (struct drm_crtc*,int) ;
 scalar_t__ FUNC_10 (struct intel_dp*) ;
 int FUNC_11 (int) ;
 struct intel_crtc* FUNC_12 (struct drm_crtc*) ;

__attribute__((used)) static void
FUNC_13(struct drm_encoder *VAR_18, struct drm_display_mode *VAR_19,
    struct drm_display_mode *VAR_20)
{
 struct drm_device *VAR_21 = VAR_18->dev;
 struct drm_i915_private *VAR_22 = VAR_21->dev_private;
 struct intel_dp *VAR_23 = FUNC_6(VAR_18);
 struct drm_crtc *VAR_24 = VAR_18->crtc;
 struct intel_crtc *VAR_25 = FUNC_12(VAR_24);
 VAR_23->DP = FUNC_3(VAR_23->output_reg) & VAR_1;


 VAR_23->DP |= VAR_15 | VAR_12;

 switch (VAR_23->lane_count) {
 case 1:
  VAR_23->DP |= VAR_9;
  break;
 case 2:
  VAR_23->DP |= VAR_10;
  break;
 case 4:
  VAR_23->DP |= VAR_11;
  break;
 }
 if (VAR_23->has_audio) {
  FUNC_0("Enabling DP audio on pipe %c\n",
     FUNC_11(VAR_25->pipe));
  VAR_23->DP |= VAR_0;
  FUNC_8(VAR_18, VAR_20);
 }

 FUNC_7(VAR_23);



 if (FUNC_10(VAR_23) && FUNC_4(VAR_21) && !FUNC_5(VAR_21)) {
  if (VAR_20->flags & VAR_16)
   VAR_23->DP |= VAR_13;
  if (VAR_20->flags & VAR_17)
   VAR_23->DP |= VAR_14;
  VAR_23->DP |= VAR_5;

  if (VAR_23->link_configuration[1] & VAR_3)
   VAR_23->DP |= VAR_2;

  VAR_23->DP |= VAR_25->pipe << 29;


  if (VAR_20->clock < 200000)
   VAR_23->DP |= VAR_7;
  else
   VAR_23->DP |= VAR_8;
 } else if (!FUNC_1(VAR_21) || FUNC_10(VAR_23)) {
  if (!FUNC_2(VAR_21))
   VAR_23->DP |= VAR_23->color_range;

  if (VAR_20->flags & VAR_16)
   VAR_23->DP |= VAR_13;
  if (VAR_20->flags & VAR_17)
   VAR_23->DP |= VAR_14;
  VAR_23->DP |= VAR_4;

  if (VAR_23->link_configuration[1] & VAR_3)
   VAR_23->DP |= VAR_2;

  if (VAR_25->pipe == 1)
   VAR_23->DP |= VAR_6;

  if (FUNC_10(VAR_23)) {

   if (VAR_20->clock < 200000)
    VAR_23->DP |= VAR_7;
   else
    VAR_23->DP |= VAR_8;
  }
 } else {
  VAR_23->DP |= VAR_5;
 }

 if (FUNC_10(VAR_23))
  FUNC_9(VAR_24, VAR_20->clock);
}
