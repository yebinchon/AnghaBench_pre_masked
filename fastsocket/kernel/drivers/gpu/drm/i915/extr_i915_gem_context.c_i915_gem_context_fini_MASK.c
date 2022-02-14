
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_private {TYPE_1__* ring; scalar_t__ hw_contexts_disabled; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int obj; } ;
struct TYPE_3__ {TYPE_2__* default_context; } ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_device*) ;

void FUNC_3(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;

 if (VAR_2->hw_contexts_disabled)
  return;




 FUNC_2(VAR_1);

 FUNC_1(VAR_2->ring[VAR_0].default_context->obj);

 FUNC_0(VAR_2->ring[VAR_0].default_context);
}
