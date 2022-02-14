
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_ring_buffer {int (* cleanup ) (struct intel_ring_buffer*) ;TYPE_2__* obj; int virtual_start; int name; TYPE_1__* dev; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_4__ {int base; } ;
struct TYPE_3__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct intel_ring_buffer*,int ) ;
 int FUNC_2 (struct intel_ring_buffer*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct intel_ring_buffer*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct intel_ring_buffer*) ;

void FUNC_8(struct intel_ring_buffer *VAR_0)
{
 struct drm_i915_private *VAR_1;
 int VAR_2;

 if (VAR_0->obj == ((void*)0))
  return;


 VAR_1 = VAR_0->dev->dev_private;
 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2)
  FUNC_0("failed to quiesce %s whilst cleaning up: %d\n",
     VAR_0->name, VAR_2);

 FUNC_1(VAR_0, 0);

 FUNC_6(VAR_0->virtual_start);

 FUNC_4(VAR_0->obj);
 FUNC_3(&VAR_0->obj->base);
 VAR_0->obj = ((void*)0);

 if (VAR_0->cleanup)
  VAR_0->cleanup(VAR_0);

 FUNC_2(VAR_0);
}
