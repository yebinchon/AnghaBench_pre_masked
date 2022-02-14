
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_8__ {scalar_t__ crtc; } ;
struct intel_encoder {TYPE_4__ base; } ;
struct intel_dp {int force_audio; int has_audio; int color_range_auto; int color_range; } ;
struct TYPE_7__ {int fitting_mode; } ;
struct intel_connector {TYPE_3__ panel; } ;
struct drm_property {int dummy; } ;
struct drm_i915_private {struct drm_property* broadcast_rgb_property; struct drm_property* force_audio_property; } ;
struct drm_connector {TYPE_2__* dev; int base; } ;
struct TYPE_5__ {struct drm_property* scaling_mode_property; } ;
struct TYPE_6__ {TYPE_1__ mode_config; struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (int *,struct drm_property*,int) ;
 struct intel_dp* FUNC_2 (TYPE_4__*) ;
 struct intel_encoder* FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct drm_connector*) ;
 scalar_t__ FUNC_6 (struct intel_dp*) ;
 struct intel_connector* FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static int
FUNC_8(struct drm_connector *VAR_5,
        struct drm_property *VAR_6,
        uint64_t VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_5->dev->dev_private;
 struct intel_connector *VAR_9 = FUNC_7(VAR_5);
 struct intel_encoder *VAR_10 = FUNC_3(VAR_5);
 struct intel_dp *VAR_11 = FUNC_2(&VAR_10->base);
 int VAR_12;

 VAR_12 = FUNC_1(&VAR_5->base, VAR_6, VAR_7);
 if (VAR_12)
  return VAR_12;

 if (VAR_6 == VAR_8->force_audio_property) {
  int VAR_13 = VAR_7;
  bool VAR_14;

  if (VAR_13 == VAR_11->force_audio)
   return 0;

  VAR_11->force_audio = VAR_13;

  if (VAR_13 == VAR_3)
   VAR_14 = FUNC_5(VAR_5);
  else
   VAR_14 = (VAR_13 == VAR_4);

  if (VAR_14 == VAR_11->has_audio)
   return 0;

  VAR_11->has_audio = VAR_14;
  goto done;
 }

 if (VAR_6 == VAR_8->broadcast_rgb_property) {
  switch (VAR_7) {
  case 130:
   VAR_11->color_range_auto = 1;
   break;
  case 129:
   VAR_11->color_range_auto = 0;
   VAR_11->color_range = 0;
   break;
  case 128:
   VAR_11->color_range_auto = 0;
   VAR_11->color_range = VAR_0;
   break;
  default:
   return -VAR_2;
  }
  goto done;
 }

 if (FUNC_6(VAR_11) &&
     VAR_6 == VAR_5->dev->mode_config.scaling_mode_property) {
  if (VAR_7 == VAR_1) {
   FUNC_0("no scaling not supported\n");
   return -VAR_2;
  }

  if (VAR_9->panel.fitting_mode == VAR_7) {

   return 0;
  }
  VAR_9->panel.fitting_mode = VAR_7;

  goto done;
 }

 return -VAR_2;

done:
 if (VAR_10->base.crtc)
  FUNC_4(VAR_10->base.crtc);

 return 0;
}
