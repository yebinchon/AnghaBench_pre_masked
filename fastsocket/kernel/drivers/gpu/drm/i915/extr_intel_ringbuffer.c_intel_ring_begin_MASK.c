
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct intel_ring_buffer {TYPE_1__* dev; } ;
struct TYPE_5__ {int interruptible; } ;
struct TYPE_6__ {TYPE_2__ mm; int gpu_error; } ;
typedef TYPE_3__ drm_i915_private_t ;
struct TYPE_4__ {TYPE_3__* dev_private; } ;


 int FUNC_0 (struct intel_ring_buffer*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct intel_ring_buffer*) ;

int FUNC_3(struct intel_ring_buffer *VAR_0,
       int VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_0->dev->dev_private;
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->gpu_error,
       VAR_2->mm.interruptible);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_0, VAR_1 * sizeof(uint32_t));
}
