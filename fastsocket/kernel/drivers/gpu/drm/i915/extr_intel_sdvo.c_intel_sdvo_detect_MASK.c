
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct intel_sdvo_connector {int output_flag; } ;
struct TYPE_2__ {int needs_tv_clock; } ;
struct intel_sdvo {int attached_output; int has_hdmi_monitor; int has_hdmi_audio; int rgb_quant_range_selectable; int is_tv; int is_lvds; int * sdvo_lvds_fixed_mode; TYPE_1__ base; } ;
struct edid {int dummy; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (char*,int,int,int) ;
 scalar_t__ FUNC_1 (struct intel_sdvo_connector*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_sdvo* FUNC_2 (struct drm_connector*) ;
 scalar_t__ FUNC_3 (struct intel_sdvo_connector*,struct edid*) ;
 struct edid* FUNC_4 (struct drm_connector*) ;
 struct edid* FUNC_5 (struct drm_connector*) ;
 int FUNC_6 (struct intel_sdvo*,int ,int*,int) ;
 int FUNC_7 (struct drm_connector*) ;
 int FUNC_8 (struct edid*) ;
 struct intel_sdvo_connector* FUNC_9 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_10(struct drm_connector *VAR_6, bool VAR_7)
{
 uint16_t VAR_8;
 struct intel_sdvo *VAR_9 = FUNC_2(VAR_6);
 struct intel_sdvo_connector *VAR_10 = FUNC_9(VAR_6);
 enum drm_connector_status VAR_11;

 if (!FUNC_6(VAR_9,
      VAR_0,
      &VAR_8, 2))
  return VAR_5;

 FUNC_0("SDVO response %d %d [%x]\n",
        VAR_8 & 0xff, VAR_8 >> 8,
        VAR_10->output_flag);

 if (VAR_8 == 0)
  return VAR_4;

 VAR_9->attached_output = VAR_8;

 VAR_9->has_hdmi_monitor = 0;
 VAR_9->has_hdmi_audio = 0;
 VAR_9->rgb_quant_range_selectable = 0;

 if ((VAR_10->output_flag & VAR_8) == 0)
  VAR_11 = VAR_4;
 else if (FUNC_1(VAR_10))
  VAR_11 = FUNC_7(VAR_6);
 else {
  struct edid *VAR_12;


  VAR_12 = FUNC_5(VAR_6);
  if (VAR_12 == ((void*)0))
   VAR_12 = FUNC_4(VAR_6);
  if (VAR_12 != ((void*)0)) {
   if (FUNC_3(VAR_10,
             VAR_12))
    VAR_11 = VAR_3;
   else
    VAR_11 = VAR_4;

   FUNC_8(VAR_12);
  } else
   VAR_11 = VAR_3;
 }


 if (VAR_11 == VAR_3) {
  VAR_9->is_tv = 0;
  VAR_9->is_lvds = 0;
  VAR_9->base.needs_tv_clock = 0;

  if (VAR_8 & VAR_2) {
   VAR_9->is_tv = 1;
   VAR_9->base.needs_tv_clock = 1;
  }
  if (VAR_8 & VAR_1)
   VAR_9->is_lvds = VAR_9->sdvo_lvds_fixed_mode != ((void*)0);
 }

 return VAR_11;
}
