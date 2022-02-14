
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct intel_sdvo_connector {scalar_t__ force_audio; } ;
struct intel_sdvo {int ddc_bus; int has_hdmi_audio; int rgb_quant_range_selectable; int has_hdmi_monitor; scalar_t__ is_hdmi; } ;
struct edid {int input; } ;
struct drm_connector {int dummy; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct edid*) ;
 int FUNC_1 (struct edid*) ;
 int FUNC_2 (struct edid*) ;
 struct intel_sdvo* FUNC_3 (struct drm_connector*) ;
 struct edid* FUNC_4 (struct drm_connector*) ;
 struct edid* FUNC_5 (struct drm_connector*) ;
 scalar_t__ FUNC_6 (struct intel_sdvo*) ;
 int FUNC_7 (struct edid*) ;
 struct intel_sdvo_connector* FUNC_8 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_9(struct drm_connector *VAR_6)
{
 struct intel_sdvo *VAR_7 = FUNC_3(VAR_6);
 enum drm_connector_status VAR_8;
 struct edid *VAR_9;

 VAR_9 = FUNC_5(VAR_6);

 if (VAR_9 == ((void*)0) && FUNC_6(VAR_7)) {
  u8 VAR_10, VAR_11 = VAR_7->ddc_bus;





  for (VAR_10 = VAR_7->ddc_bus >> 1; VAR_10 > 1; VAR_10 >>= 1) {
   VAR_7->ddc_bus = VAR_10;
   VAR_9 = FUNC_5(VAR_6);
   if (VAR_9)
    break;
  }




  if (VAR_9 == ((void*)0))
   VAR_7->ddc_bus = VAR_11;
 }





 if (VAR_9 == ((void*)0))
  VAR_9 = FUNC_4(VAR_6);

 VAR_8 = VAR_5;
 if (VAR_9 != ((void*)0)) {

  if (VAR_9->input & VAR_0) {
   VAR_8 = VAR_3;
   if (VAR_7->is_hdmi) {
    VAR_7->has_hdmi_monitor = FUNC_0(VAR_9);
    VAR_7->has_hdmi_audio = FUNC_1(VAR_9);
    VAR_7->rgb_quant_range_selectable =
     FUNC_2(VAR_9);
   }
  } else
   VAR_8 = VAR_4;
  FUNC_7(VAR_9);
 }

 if (VAR_8 == VAR_3) {
  struct intel_sdvo_connector *VAR_12 = FUNC_8(VAR_6);
  if (VAR_12->force_audio != VAR_1)
   VAR_7->has_hdmi_audio = (VAR_12->force_audio == VAR_2);
 }

 return VAR_8;
}
