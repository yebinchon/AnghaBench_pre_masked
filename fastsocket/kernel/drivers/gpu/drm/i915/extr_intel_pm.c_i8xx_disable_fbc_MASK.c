
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->dev_private;
 u32 VAR_6;


 VAR_6 = FUNC_1(VAR_0);
 if ((VAR_6 & VAR_1) == 0)
  return;

 VAR_6 &= ~VAR_1;
 FUNC_2(VAR_0, VAR_6);


 if (FUNC_3((FUNC_1(VAR_2) & VAR_3) == 0, 10)) {
  FUNC_0("FBC idle timed out\n");
  return;
 }

 FUNC_0("disabled FBC\n");
}
