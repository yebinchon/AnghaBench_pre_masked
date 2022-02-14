
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dev; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_3,
         enum pipe VAR_4, u32 VAR_5)
{
 if ((VAR_5 & VAR_0) == 0)
  return 0;

 if (FUNC_0(VAR_3->dev)) {
  if ((VAR_5 & VAR_1) != FUNC_1(VAR_4))
   return 0;
 } else {
  if ((VAR_5 & VAR_2) != FUNC_2(VAR_4))
   return 0;
 }
 return 1;
}
