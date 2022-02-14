
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdmi {scalar_t__ color_range; scalar_t__ has_hdmi_sink; scalar_t__ color_range_auto; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int private_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_display_mode*) ;
 struct intel_hdmi* FUNC_1 (struct drm_encoder*) ;

bool FUNC_2(struct drm_encoder *VAR_2,
      const struct drm_display_mode *VAR_3,
      struct drm_display_mode *VAR_4)
{
 struct intel_hdmi *VAR_5 = FUNC_1(VAR_2);

 if (VAR_5->color_range_auto) {

  if (VAR_5->has_hdmi_sink &&
      FUNC_0(VAR_4) > 1)
   VAR_5->color_range = VAR_1;
  else
   VAR_5->color_range = 0;
 }

 if (VAR_5->color_range)
  VAR_4->private_flags |= VAR_0;

 return 1;
}
