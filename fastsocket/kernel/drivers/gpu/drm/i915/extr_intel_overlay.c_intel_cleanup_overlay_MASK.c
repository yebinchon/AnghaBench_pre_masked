
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_5__ {TYPE_3__* overlay; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_6__ {TYPE_1__* reg_bo; int active; } ;
struct TYPE_4__ {int base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*) ;

void FUNC_3(struct drm_device *VAR_0)
{
 drm_i915_private_t *VAR_1 = VAR_0->dev_private;

 if (!VAR_1->overlay)
  return;




 FUNC_0(VAR_1->overlay->active);

 FUNC_1(&VAR_1->overlay->reg_bo->base);
 FUNC_2(VAR_1->overlay);
}
