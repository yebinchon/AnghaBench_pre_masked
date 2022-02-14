
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_digital_port {int port; } ;
struct drm_i915_private {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

bool FUNC_2(struct drm_i915_private *VAR_7,
    struct intel_digital_port *VAR_8)
{
 u32 VAR_9;

 if (FUNC_0(VAR_7->dev)) {
  switch(VAR_8->port) {
  case 130:
   VAR_9 = VAR_1;
   break;
  case 129:
   VAR_9 = VAR_3;
   break;
  case 128:
   VAR_9 = VAR_5;
   break;
  default:
   return 1;
  }
 } else {
  switch(VAR_8->port) {
  case 130:
   VAR_9 = VAR_2;
   break;
  case 129:
   VAR_9 = VAR_4;
   break;
  case 128:
   VAR_9 = VAR_6;
   break;
  default:
   return 1;
  }
 }

 return FUNC_1(VAR_0) & VAR_9;
}
