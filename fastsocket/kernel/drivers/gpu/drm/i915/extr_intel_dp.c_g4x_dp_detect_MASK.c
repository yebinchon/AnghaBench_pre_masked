
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intel_dp {int dummy; } ;
struct intel_digital_port {int port; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_digital_port* FUNC_1 (struct intel_dp*) ;
 int FUNC_2 (struct intel_dp*) ;
 struct drm_device* FUNC_3 (struct intel_dp*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_4(struct intel_dp *VAR_6)
{
 struct drm_device *VAR_7 = FUNC_3(VAR_6);
 struct drm_i915_private *VAR_8 = VAR_7->dev_private;
 struct intel_digital_port *VAR_9 = FUNC_1(VAR_6);
 uint32_t VAR_10;

 switch (VAR_9->port) {
 case 130:
  VAR_10 = VAR_0;
  break;
 case 129:
  VAR_10 = VAR_1;
  break;
 case 128:
  VAR_10 = VAR_2;
  break;
 default:
  return VAR_5;
 }

 if ((FUNC_0(VAR_3) & VAR_10) == 0)
  return VAR_4;

 return FUNC_2(VAR_6);
}
