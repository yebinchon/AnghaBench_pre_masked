
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_3,
       enum pipe VAR_4, u32 VAR_5, u32 VAR_6)
{
 if ((VAR_6 & VAR_1) == 0)
  return 0;

 if (FUNC_0(VAR_3->dev)) {
  u32 VAR_7 = FUNC_2(VAR_4);
  u32 VAR_8 = FUNC_1(VAR_7);
  if ((VAR_8 & VAR_2) != VAR_5)
   return 0;
 } else {
  if ((VAR_6 & VAR_0) != (VAR_4 << 30))
   return 0;
 }
 return 1;
}
