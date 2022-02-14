
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_ring_buffer {int mmio_base; TYPE_2__* dev; } ;
typedef int drm_i915_private_t ;
struct TYPE_4__ {int * dev_private; } ;
struct TYPE_3__ {int gen; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

u32 FUNC_3(struct intel_ring_buffer *VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_1->dev->dev_private;
 u32 VAR_3 = FUNC_1(VAR_1->dev)->gen >= 4 ?
   FUNC_2(VAR_1->mmio_base) : VAR_0;

 return FUNC_0(VAR_3);
}
