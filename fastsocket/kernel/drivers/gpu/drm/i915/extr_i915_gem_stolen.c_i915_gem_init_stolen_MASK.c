
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stolen_size; } ;
struct TYPE_4__ {scalar_t__ stolen_base; int stolen; } ;
struct drm_i915_private {TYPE_1__ gtt; TYPE_2__ mm; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;

int FUNC_3(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;

 VAR_1->mm.stolen_base = FUNC_2(VAR_0);
 if (VAR_1->mm.stolen_base == 0)
  return 0;

 FUNC_0("found %zd bytes of stolen memory at %08lx\n",
        VAR_1->gtt.stolen_size, VAR_1->mm.stolen_base);


 FUNC_1(&VAR_1->mm.stolen, 0, VAR_1->gtt.stolen_size);

 return 0;
}
