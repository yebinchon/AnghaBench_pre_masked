
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_2(struct drm_i915_private *VAR_5)
{
 if (FUNC_0(VAR_1) & VAR_0)
  return 450;
 else if ((FUNC_0(VAR_4) & VAR_3) ==
   VAR_2)
  return 450;
 else if (FUNC_1(VAR_5->dev))
  return 338;
 else
  return 540;
}
