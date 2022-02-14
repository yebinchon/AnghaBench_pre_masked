
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_dp {int link_bw; int lane_count; scalar_t__ color_range; scalar_t__ color_range_auto; int dpcd; struct intel_connector* attached_connector; } ;
struct TYPE_2__ {int fitting_mode; scalar_t__ fixed_mode; } ;
struct intel_connector {TYPE_1__ panel; } ;
struct drm_encoder {struct drm_device* dev; } ;
struct drm_display_mode {int flags; int clock; int private_flags; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (char*,int,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_display_mode*) ;
 struct intel_dp* FUNC_4 (struct drm_encoder*) ;
 int FUNC_5 (struct intel_dp*,struct drm_display_mode*,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 scalar_t__ FUNC_8 (struct intel_dp*) ;
 int FUNC_9 (scalar_t__,struct drm_display_mode*) ;
 int FUNC_10 (struct drm_device*,int ,struct drm_display_mode const*,struct drm_display_mode*) ;
 scalar_t__ FUNC_11 (struct intel_dp*) ;

bool
FUNC_12(struct drm_encoder *VAR_4,
      const struct drm_display_mode *VAR_5,
      struct drm_display_mode *VAR_6)
{
 struct drm_device *VAR_7 = VAR_4->dev;
 struct intel_dp *VAR_8 = FUNC_4(VAR_4);
 struct intel_connector *VAR_9 = VAR_8->attached_connector;
 int VAR_10, VAR_11;
 int VAR_12 = FUNC_2(VAR_8->dpcd);
 int VAR_13 = FUNC_8(VAR_8) == 128 ? 1 : 0;
 int VAR_14, VAR_15;
 static int VAR_16[2] = { 129, 128 };

 if (FUNC_11(VAR_8) && VAR_9->panel.fixed_mode) {
  FUNC_9(VAR_9->panel.fixed_mode,
           VAR_6);
  FUNC_10(VAR_7,
     VAR_9->panel.fitting_mode,
     VAR_5, VAR_6);
 }

 if (VAR_6->flags & VAR_1)
  return 0;

 FUNC_0("DP link computation with max lane count %i "
        "max bw %02x pixel clock %iKHz\n",
        VAR_12, VAR_16[VAR_13], VAR_6->clock);

 if (!FUNC_5(VAR_8, VAR_6, 1))
  return 0;

 VAR_14 = VAR_6->private_flags & VAR_2 ? 18 : 24;

 if (VAR_8->color_range_auto) {





  if (VAR_14 != 18 && FUNC_3(VAR_6) > 1)
   VAR_8->color_range = VAR_0;
  else
   VAR_8->color_range = 0;
 }

 if (VAR_8->color_range)
  VAR_6->private_flags |= VAR_3;

 VAR_15 = FUNC_6(VAR_6->clock, VAR_14);

 for (VAR_11 = 0; VAR_11 <= VAR_13; VAR_11++) {
  for (VAR_10 = 1; VAR_10 <= VAR_12; VAR_10 <<= 1) {
   int VAR_17 =
    FUNC_1(VAR_16[VAR_11]);
   int VAR_18 = FUNC_7(VAR_17,
        VAR_10);

   if (VAR_15 <= VAR_18) {
    VAR_8->link_bw = VAR_16[VAR_11];
    VAR_8->lane_count = VAR_10;
    VAR_6->clock = VAR_17;
    FUNC_0("DP link bw %02x lane "
      "count %d clock %d bpp %d\n",
           VAR_8->link_bw, VAR_8->lane_count,
           VAR_6->clock, VAR_14);
    FUNC_0("DP link bw required %i available %i\n",
           VAR_15, VAR_18);
    return 1;
   }
  }
 }

 return 0;
}
