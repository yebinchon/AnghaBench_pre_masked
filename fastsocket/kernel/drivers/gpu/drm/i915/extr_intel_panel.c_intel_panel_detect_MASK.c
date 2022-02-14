
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ lid_state; } ;
struct drm_i915_private {TYPE_1__ opregion; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;

enum drm_connector_status
FUNC_1(struct drm_device *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;


 if (!VAR_3 && VAR_5->opregion.lid_state) {
  return FUNC_0(VAR_5->opregion.lid_state) & 0x1 ?
   VAR_0 :
   VAR_1;
 }

 switch (VAR_3) {
 case -2:
  return VAR_0;
 case -1:
  return VAR_1;
 default:
  return VAR_2;
 }
}
