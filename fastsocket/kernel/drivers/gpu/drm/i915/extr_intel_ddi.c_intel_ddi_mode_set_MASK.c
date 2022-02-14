
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdmi {int (* set_infoframes ) (struct drm_encoder*,struct drm_display_mode*) ;scalar_t__ has_audio; } ;
struct intel_encoder {int type; } ;
struct intel_dp {int DP; int lane_count; scalar_t__ has_audio; } ;
struct intel_digital_port {int port_reversal; } ;
struct intel_crtc {int pipe; int eld_vld; } ;
struct drm_encoder {struct drm_crtc* crtc; } ;
struct drm_display_mode {int dummy; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,char*,int) ;
 struct intel_digital_port* FUNC_3 (struct drm_encoder*) ;
 struct intel_dp* FUNC_4 (struct drm_encoder*) ;
 struct intel_hdmi* FUNC_5 (struct drm_encoder*) ;
 int FUNC_6 (struct intel_encoder*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct drm_encoder*,struct drm_display_mode*) ;
 struct intel_crtc* FUNC_12 (struct drm_crtc*) ;
 struct intel_encoder* FUNC_13 (struct drm_encoder*) ;

__attribute__((used)) static void FUNC_14(struct drm_encoder *VAR_8,
          struct drm_display_mode *VAR_9,
          struct drm_display_mode *VAR_10)
{
 struct drm_crtc *VAR_11 = VAR_8->crtc;
 struct intel_crtc *VAR_12 = FUNC_12(VAR_11);
 struct intel_encoder *VAR_13 = FUNC_13(VAR_8);
 int VAR_14 = FUNC_6(VAR_13);
 int VAR_15 = VAR_12->pipe;
 int VAR_16 = VAR_13->type;

 FUNC_1("Preparing DDI mode for Haswell on port %c, pipe %c\n",
        FUNC_10(VAR_14), FUNC_9(VAR_15));

 VAR_12->eld_vld = 0;
 if (VAR_16 == VAR_5 || VAR_16 == VAR_6) {
  struct intel_dp *VAR_17 = FUNC_4(VAR_8);
  struct intel_digital_port *VAR_18 =
   FUNC_3(VAR_8);

  VAR_17->DP = VAR_18->port_reversal |
          VAR_0 | VAR_1;
  switch (VAR_17->lane_count) {
  case 1:
   VAR_17->DP |= VAR_2;
   break;
  case 2:
   VAR_17->DP |= VAR_3;
   break;
  case 4:
   VAR_17->DP |= VAR_4;
   break;
  default:
   VAR_17->DP |= VAR_4;
   FUNC_2(1, "Unexpected DP lane count %d\n",
        VAR_17->lane_count);
   break;
  }

  if (VAR_17->has_audio) {
   FUNC_0("DP audio on pipe %c on DDI\n",
      FUNC_9(VAR_12->pipe));


   FUNC_0("DP audio: write eld information\n");
   FUNC_8(VAR_8, VAR_10);
  }

  FUNC_7(VAR_17);

 } else if (VAR_16 == VAR_7) {
  struct intel_hdmi *VAR_19 = FUNC_5(VAR_8);

  if (VAR_19->has_audio) {




   FUNC_0("HDMI audio on pipe %c on DDI\n",
      FUNC_9(VAR_12->pipe));


   FUNC_0("HDMI audio: write eld information\n");
   FUNC_8(VAR_8, VAR_10);
  }

  VAR_19->set_infoframes(VAR_8, VAR_10);
 }
}
