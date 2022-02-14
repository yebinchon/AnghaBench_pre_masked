
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 struct drm_device* FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*) ;
 int FUNC_6 (struct intel_dp*) ;

__attribute__((used)) static void
FUNC_7(struct intel_dp *VAR_2)
{
 struct drm_device *VAR_3 = FUNC_3(VAR_2);
 struct drm_i915_private *VAR_4 = VAR_3->dev_private;

 if (!FUNC_6(VAR_2))
  return;
 if (!FUNC_4(VAR_2) && !FUNC_5(VAR_2)) {
  FUNC_2(1, "eDP powered off while attempting aux channel communication.\n");
  FUNC_0("Status 0x%08x Control 0x%08x\n",
         FUNC_1(VAR_1),
         FUNC_1(VAR_0));
 }
}
