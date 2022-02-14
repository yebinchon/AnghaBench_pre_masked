
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct intel_digital_port {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel_digital_port* FUNC_0 (struct intel_dp*) ;
 int FUNC_1 (struct drm_i915_private*,struct intel_digital_port*) ;
 int FUNC_2 (struct intel_dp*) ;
 struct drm_device* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct intel_dp*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_6(struct intel_dp *VAR_3)
{
 struct drm_device *VAR_4 = FUNC_3(VAR_3);
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 struct intel_digital_port *VAR_6 = FUNC_0(VAR_3);
 enum drm_connector_status VAR_7;


 if (FUNC_5(VAR_3)) {
  VAR_7 = FUNC_4(VAR_4);
  if (VAR_7 == VAR_2)
   VAR_7 = VAR_0;
  return VAR_7;
 }

 if (!FUNC_1(VAR_5, VAR_6))
  return VAR_1;

 return FUNC_2(VAR_3);
}
