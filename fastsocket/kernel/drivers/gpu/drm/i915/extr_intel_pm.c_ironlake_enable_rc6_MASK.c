
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_ring_buffer {int dummy; } ;
struct TYPE_8__ {TYPE_3__* pwrctx; TYPE_1__* renderctx; } ;
struct TYPE_6__ {int interruptible; } ;
struct drm_i915_private {TYPE_4__ ips; TYPE_2__ mm; struct intel_ring_buffer* ring; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;
struct TYPE_7__ {int gtt_offset; } ;
struct TYPE_5__ {int gtt_offset; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
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
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct intel_ring_buffer*) ;
 int FUNC_6 (struct intel_ring_buffer*,int) ;
 int FUNC_7 (struct intel_ring_buffer*,int) ;
 int FUNC_8 (struct intel_ring_buffer*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct drm_device *VAR_14)
{
 struct drm_i915_private *VAR_15 = VAR_14->dev_private;
 struct intel_ring_buffer *VAR_16 = &VAR_15->ring[VAR_11];
 bool VAR_17;
 int VAR_18;




 if (!FUNC_4(VAR_14))
  return;

 FUNC_3(!FUNC_11(&VAR_14->struct_mutex));

 VAR_18 = FUNC_9(VAR_14);
 if (VAR_18)
  return;

 VAR_17 = VAR_15->mm.interruptible;
 VAR_15->mm.interruptible = 0;





 VAR_18 = FUNC_6(VAR_16, 6);
 if (VAR_18) {
  FUNC_10(VAR_14);
  VAR_15->mm.interruptible = VAR_17;
  return;
 }

 FUNC_7(VAR_16, VAR_7 | VAR_8);
 FUNC_7(VAR_16, VAR_6);
 FUNC_7(VAR_16, VAR_15->ips.renderctx->gtt_offset |
   VAR_1 |
   VAR_5 |
   VAR_3 |
   VAR_4);
 FUNC_7(VAR_16, VAR_7);
 FUNC_7(VAR_16, VAR_2);
 FUNC_7(VAR_16, VAR_0);
 FUNC_5(VAR_16);






 VAR_18 = FUNC_8(VAR_16);
 VAR_15->mm.interruptible = VAR_17;
 if (VAR_18) {
  FUNC_0("failed to enable ironlake power power savings\n");
  FUNC_10(VAR_14);
  return;
 }

 FUNC_2(VAR_9, VAR_15->ips.pwrctx->gtt_offset | VAR_10);
 FUNC_2(VAR_13, FUNC_1(VAR_13) & ~VAR_12);
}
