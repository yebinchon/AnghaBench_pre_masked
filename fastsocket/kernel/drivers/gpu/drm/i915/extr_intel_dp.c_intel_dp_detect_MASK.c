
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {scalar_t__ type; } ;
struct intel_dp {int has_audio; scalar_t__ force_audio; int adapter; } ;
struct intel_digital_port {struct intel_encoder base; } ;
struct edid {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct intel_digital_port* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (struct edid*) ;
 int FUNC_3 (struct intel_dp*) ;
 struct intel_dp* FUNC_4 (struct drm_connector*) ;
 struct edid* FUNC_5 (struct drm_connector*,int *) ;
 int FUNC_6 (struct intel_dp*) ;
 int FUNC_7 (struct intel_dp*) ;
 int FUNC_8 (struct edid*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_9(struct drm_connector *VAR_5, bool VAR_6)
{
 struct intel_dp *VAR_7 = FUNC_4(VAR_5);
 struct intel_digital_port *VAR_8 = FUNC_1(VAR_7);
 struct intel_encoder *VAR_9 = &VAR_8->base;
 struct drm_device *VAR_10 = VAR_5->dev;
 enum drm_connector_status VAR_11;
 struct edid *VAR_12 = ((void*)0);

 VAR_7->has_audio = 0;

 if (FUNC_0(VAR_10))
  VAR_11 = FUNC_7(VAR_7);
 else
  VAR_11 = FUNC_3(VAR_7);

 if (VAR_11 != VAR_4)
  return VAR_11;

 FUNC_6(VAR_7);

 if (VAR_7->force_audio != VAR_0) {
  VAR_7->has_audio = (VAR_7->force_audio == VAR_1);
 } else {
  VAR_12 = FUNC_5(VAR_5, &VAR_7->adapter);
  if (VAR_12) {
   VAR_7->has_audio = FUNC_2(VAR_12);
   FUNC_8(VAR_12);
  }
 }

 if (VAR_9->type != VAR_3)
  VAR_9->type = VAR_2;
 return VAR_4;
}
