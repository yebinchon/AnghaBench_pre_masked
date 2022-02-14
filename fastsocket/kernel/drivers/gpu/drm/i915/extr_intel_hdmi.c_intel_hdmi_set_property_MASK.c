
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct intel_hdmi {int force_audio; int has_audio; int color_range_auto; int color_range; scalar_t__ has_hdmi_sink; } ;
struct TYPE_5__ {scalar_t__ crtc; } ;
struct TYPE_6__ {TYPE_2__ base; } ;
struct intel_digital_port {TYPE_3__ base; } ;
struct drm_property {int dummy; } ;
struct drm_i915_private {struct drm_property* broadcast_rgb_property; struct drm_property* force_audio_property; } ;
struct drm_connector {int base; TYPE_1__* dev; } ;
typedef enum hdmi_force_audio { ____Placeholder_hdmi_force_audio } hdmi_force_audio ;
struct TYPE_4__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int *,struct drm_property*,int) ;
 struct intel_digital_port* FUNC_1 (struct intel_hdmi*) ;
 struct intel_hdmi* FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_5(struct drm_connector *VAR_5,
   struct drm_property *VAR_6,
   uint64_t VAR_7)
{
 struct intel_hdmi *VAR_8 = FUNC_2(VAR_5);
 struct intel_digital_port *VAR_9 =
  FUNC_1(VAR_8);
 struct drm_i915_private *VAR_10 = VAR_5->dev->dev_private;
 int VAR_11;

 VAR_11 = FUNC_0(&VAR_5->base, VAR_6, VAR_7);
 if (VAR_11)
  return VAR_11;

 if (VAR_6 == VAR_10->force_audio_property) {
  enum hdmi_force_audio VAR_12 = VAR_7;
  bool VAR_13;

  if (VAR_12 == VAR_8->force_audio)
   return 0;

  VAR_8->force_audio = VAR_12;

  if (VAR_12 == VAR_1)
   VAR_13 = FUNC_4(VAR_5);
  else
   VAR_13 = (VAR_12 == VAR_3);

  if (VAR_12 == VAR_2)
   VAR_8->has_hdmi_sink = 0;

  VAR_8->has_audio = VAR_13;
  goto done;
 }

 if (VAR_6 == VAR_10->broadcast_rgb_property) {
  switch (VAR_7) {
  case 130:
   VAR_8->color_range_auto = 1;
   break;
  case 129:
   VAR_8->color_range_auto = 0;
   VAR_8->color_range = 0;
   break;
  case 128:
   VAR_8->color_range_auto = 0;
   VAR_8->color_range = VAR_4;
   break;
  default:
   return -VAR_0;
  }
  goto done;
 }

 return -VAR_0;

done:
 if (VAR_9->base.base.crtc)
  FUNC_3(VAR_9->base.base.crtc);

 return 0;
}
