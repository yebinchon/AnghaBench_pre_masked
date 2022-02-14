
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int) ;

void FUNC_5(struct drm_device *VAR_0, int VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->dev_private;
 int VAR_3 = FUNC_2(VAR_1);
 u32 VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 FUNC_3(500);
 if (FUNC_4(FUNC_1(VAR_3) != VAR_4, 5)) {
  if (FUNC_4(FUNC_1(VAR_3) != VAR_4, 5))
   FUNC_0("mode set failed: pipe %d stuck\n", VAR_1);
 }
}
