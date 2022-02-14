
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_0, int VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->dev_private;
 u32 VAR_3, VAR_4 = FUNC_3(VAR_1);

 VAR_3 = FUNC_1(VAR_4);

 if (FUNC_4(FUNC_2(VAR_4) != VAR_3, 50))
  FUNC_0("vblank wait timed out\n");
}
