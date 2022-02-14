
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_encoder {int (* get_hw_state ) (struct intel_encoder*,int*) ;} ;
struct TYPE_2__ {int connector_type; struct drm_device* dev; } ;
struct intel_connector {TYPE_1__ base; struct intel_encoder* encoder; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum transcoder { ____Placeholder_transcoder } transcoder ;
typedef enum port { ____Placeholder_port } port ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;





 int VAR_6 ;
 int FUNC_2 (struct intel_encoder*) ;
 int FUNC_3 (struct intel_encoder*,int*) ;

bool FUNC_4(struct intel_connector *VAR_7)
{
 struct drm_device *VAR_8 = VAR_7->base.dev;
 struct drm_i915_private *VAR_9 = VAR_8->dev_private;
 struct intel_encoder *VAR_10 = VAR_7->encoder;
 int VAR_11 = VAR_7->base.connector_type;
 enum port VAR_12 = FUNC_2(VAR_10);
 enum pipe VAR_13 = 0;
 enum transcoder VAR_14;
 uint32_t VAR_15;

 if (!VAR_10->get_hw_state(VAR_10, &VAR_13))
  return 0;

 if (VAR_12 == VAR_4)
  VAR_14 = VAR_5;
 else
  VAR_14 = (enum transcoder) VAR_13;

 VAR_15 = FUNC_0(FUNC_1(VAR_14));

 switch (VAR_15 & VAR_6) {
 case 128:
 case 130:
  return (VAR_11 == VAR_1);

 case 131:
  if (VAR_11 == VAR_3)
   return 1;
 case 132:
  return (VAR_11 == VAR_0);

 case 129:
  return (VAR_11 == VAR_2);

 default:
  return 0;
 }
}
