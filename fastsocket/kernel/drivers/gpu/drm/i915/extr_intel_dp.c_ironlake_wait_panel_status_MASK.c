
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dp {int dummy; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int,int,int,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int,int,int) ;
 struct drm_device* FUNC_4 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_5(struct intel_dp *VAR_2,
           u32 VAR_3,
           u32 VAR_4)
{
 struct drm_device *VAR_5 = FUNC_4(VAR_2);
 struct drm_i915_private *VAR_6 = VAR_5->dev_private;

 FUNC_0("mask %08x value %08x status %08x control %08x\n",
        VAR_3, VAR_4,
        FUNC_2(VAR_1),
        FUNC_2(VAR_0));

 if (FUNC_3((FUNC_2(VAR_1) & VAR_3) == VAR_4, 5000, 10)) {
  FUNC_1("Panel status timeout: status %08x control %08x\n",
     FUNC_2(VAR_1),
     FUNC_2(VAR_0));
 }
}
