
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;

__attribute__((used)) static int
FUNC_2(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 uint32_t VAR_4;


 if (FUNC_1(VAR_2))
  return 200;

 VAR_4 = FUNC_0(VAR_0);
 switch (VAR_4 & VAR_1) {
 case 131:
  return 100;
 case 130:
  return 133;
 case 129:
  return 166;
 case 128:
  return 200;
 case 135:
  return 266;
 case 134:
  return 333;

 case 133:
 case 132:
  return 400;
 default:
  return 133;
 }
}
