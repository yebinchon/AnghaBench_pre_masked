
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(struct drm_i915_private *VAR_4)
{
 u32 VAR_5;
 bool VAR_6;

 if (FUNC_1(VAR_4->dev)) {
  FUNC_0("LPT does not has PCH refclk, skipping check\n");
  return;
 }

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = !!(VAR_5 & (VAR_1 | VAR_0 |
       VAR_2));
 FUNC_3(!VAR_6, "PCH refclk assertion failure, should be active but is disabled\n");
}
