
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_ring_buffer {int (* set_seqno ) (struct intel_ring_buffer*,int ) ;int mmio_base; TYPE_2__* dev; int outstanding_lazy_request; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {struct drm_i915_private* dev_private; } ;
struct TYPE_3__ {int gen; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct intel_ring_buffer*,int ) ;

void FUNC_6(struct intel_ring_buffer *VAR_0, u32 VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_0->dev->dev_private;

 FUNC_0(VAR_0->outstanding_lazy_request);

 if (FUNC_2(VAR_0->dev)->gen >= 6) {
  FUNC_1(FUNC_3(VAR_0->mmio_base), 0);
  FUNC_1(FUNC_4(VAR_0->mmio_base), 0);
 }

 VAR_0->set_seqno(VAR_0, VAR_1);
}
