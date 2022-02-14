
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_ring_buffer {int itlb_before_ctx_switch; struct drm_device* dev; } ;
struct drm_i915_private {int dummy; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_2__ {int gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct intel_ring_buffer*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* FUNC_4 (struct drm_device*) ;
 scalar_t__ FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (struct drm_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct intel_ring_buffer*) ;
 int FUNC_10 (struct intel_ring_buffer*) ;

__attribute__((used)) static int FUNC_11(struct intel_ring_buffer *VAR_12)
{
 struct drm_device *VAR_13 = VAR_12->dev;
 struct drm_i915_private *VAR_14 = VAR_13->dev_private;
 int VAR_15 = FUNC_10(VAR_12);

 if (FUNC_4(VAR_13)->gen > 3)
  FUNC_2(VAR_10, FUNC_8(VAR_11));





 if (FUNC_4(VAR_13)->gen >= 6)
  FUNC_2(VAR_10, FUNC_8(VAR_0));


 if (FUNC_4(VAR_13)->gen == 6)
  FUNC_2(VAR_4,
      FUNC_8(VAR_7));

 if (FUNC_6(VAR_13))
  FUNC_2(VAR_5,
      FUNC_7(VAR_7) |
      FUNC_8(VAR_6));

 if (FUNC_4(VAR_13)->gen >= 5) {
  VAR_15 = FUNC_9(VAR_12);
  if (VAR_15)
   return VAR_15;
 }

 if (FUNC_5(VAR_13)) {





  FUNC_2(VAR_1,
      FUNC_7(VAR_2));





  VAR_12->itlb_before_ctx_switch =
   !!(FUNC_1(VAR_4) & VAR_7);
 }

 if (FUNC_4(VAR_13)->gen >= 6)
  FUNC_2(VAR_8, FUNC_8(VAR_9));

 if (FUNC_0(VAR_13))
  FUNC_3(VAR_12, ~VAR_3);

 return VAR_15;
}
