
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_sdvo {scalar_t__ color_range; scalar_t__ has_hdmi_monitor; scalar_t__ color_range_auto; struct drm_display_mode const* sdvo_lvds_fixed_mode; scalar_t__ is_lvds; scalar_t__ is_tv; } ;
struct drm_encoder {int dummy; } ;
struct drm_display_mode {int private_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct drm_display_mode*) ;
 int FUNC_1 (struct drm_display_mode*,int) ;
 int FUNC_2 (struct drm_display_mode*) ;
 int FUNC_3 (struct intel_sdvo*,struct drm_display_mode const*,struct drm_display_mode*) ;
 int FUNC_4 (struct intel_sdvo*,struct drm_display_mode const*) ;
 struct intel_sdvo* FUNC_5 (struct drm_encoder*) ;

__attribute__((used)) static bool FUNC_6(struct drm_encoder *VAR_2,
      const struct drm_display_mode *VAR_3,
      struct drm_display_mode *VAR_4)
{
 struct intel_sdvo *VAR_5 = FUNC_5(VAR_2);
 int VAR_6;






 if (VAR_5->is_tv) {
  if (!FUNC_4(VAR_5, VAR_3))
   return 0;

  (void) FUNC_3(VAR_5,
          VAR_3,
          VAR_4);
 } else if (VAR_5->is_lvds) {
  if (!FUNC_4(VAR_5,
            VAR_5->sdvo_lvds_fixed_mode))
   return 0;

  (void) FUNC_3(VAR_5,
          VAR_3,
          VAR_4);
 }




 VAR_6 = FUNC_2(VAR_4);
 FUNC_1(VAR_4, VAR_6);

 if (VAR_5->color_range_auto) {

  if (VAR_5->has_hdmi_monitor &&
      FUNC_0(VAR_4) > 1)
   VAR_5->color_range = VAR_1;
  else
   VAR_5->color_range = 0;
 }

 if (VAR_5->color_range)
  VAR_4->private_flags |= VAR_0;

 return 1;
}
