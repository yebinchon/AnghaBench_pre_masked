
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_dp {int dummy; } ;
struct edp_power_seq {int t1_t3; int t8; int t9; int t10; int t11_t12; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct drm_device*) ;
 scalar_t__ FUNC_7 (struct intel_dp*) ;

__attribute__((used)) static void
FUNC_8(struct drm_device *VAR_11,
           struct intel_dp *VAR_12,
           struct edp_power_seq *VAR_13)
{
 struct drm_i915_private *VAR_14 = VAR_11->dev_private;
 u32 VAR_15, VAR_16, VAR_17;


 VAR_15 = (VAR_13->t1_t3 << VAR_6) |
  (VAR_13->t8 << VAR_1);
 VAR_16 = (VAR_13->t9 << VAR_0) |
   (VAR_13->t10 << VAR_3);


 VAR_17 = ((100 * FUNC_6(VAR_11))/2 - 1)
   << VAR_10;
 VAR_17 |= (FUNC_0(VAR_13->t11_t12, 1000)
   << VAR_2);



 if (FUNC_3(VAR_11) || FUNC_2(VAR_11)) {
  if (FUNC_7(VAR_12))
   VAR_15 |= VAR_4;
  else
   VAR_15 |= VAR_5;
 }

 FUNC_5(VAR_9, VAR_15);
 FUNC_5(VAR_8, VAR_16);
 FUNC_5(VAR_7, VAR_17);

 FUNC_1("panel power sequencer register settings: PP_ON %#x, PP_OFF %#x, PP_DIV %#x\n",
        FUNC_4(VAR_9),
        FUNC_4(VAR_8),
        FUNC_4(VAR_7));
}
