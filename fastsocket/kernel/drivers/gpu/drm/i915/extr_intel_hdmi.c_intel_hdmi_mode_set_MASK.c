
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_hdmi {int (* set_infoframes ) (struct drm_encoder*,struct drm_display_mode*) ;int sdvox_reg; scalar_t__ has_audio; scalar_t__ has_hdmi_sink; int color_range; } ;
struct intel_crtc {int bpp; scalar_t__ pipe; } ;
struct drm_i915_private {int dummy; } ;
struct drm_encoder {int crtc; struct drm_device* dev; } ;
struct drm_display_mode {int flags; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct intel_hdmi* FUNC_6 (struct drm_encoder*) ;
 int FUNC_7 (struct drm_encoder*,struct drm_display_mode*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct drm_encoder*,struct drm_display_mode*) ;
 struct intel_crtc* FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct drm_encoder *VAR_12,
    struct drm_display_mode *VAR_13,
    struct drm_display_mode *VAR_14)
{
 struct drm_device *VAR_15 = VAR_12->dev;
 struct drm_i915_private *VAR_16 = VAR_15->dev_private;
 struct intel_crtc *VAR_17 = FUNC_10(VAR_12->crtc);
 struct intel_hdmi *VAR_18 = FUNC_6(VAR_12);
 u32 VAR_19;

 VAR_19 = VAR_7;
 if (!FUNC_2(VAR_15))
  VAR_19 |= VAR_18->color_range;
 if (VAR_14->flags & VAR_3)
  VAR_19 |= VAR_11;
 if (VAR_14->flags & VAR_2)
  VAR_19 |= VAR_8;

 if (VAR_17->bpp > 24)
  VAR_19 |= VAR_0;
 else
  VAR_19 |= VAR_1;


 if (VAR_18->has_hdmi_sink && FUNC_1(VAR_15))
  VAR_19 |= VAR_4;

 if (VAR_18->has_audio) {
  FUNC_0("Enabling HDMI audio on pipe %c\n",
     FUNC_8(VAR_17->pipe));
  VAR_19 |= VAR_6;
  VAR_19 |= VAR_9;
  FUNC_7(VAR_12, VAR_14);
 }

 if (FUNC_1(VAR_15))
  VAR_19 |= FUNC_4(VAR_17->pipe);
 else if (VAR_17->pipe == VAR_5)
  VAR_19 |= VAR_10;

 FUNC_3(VAR_18->sdvox_reg, VAR_19);
 FUNC_5(VAR_18->sdvox_reg);

 VAR_18->set_infoframes(VAR_12, VAR_14);
}
