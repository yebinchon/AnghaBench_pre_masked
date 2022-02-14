
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int size; scalar_t__ import_attach; struct drm_device* dev; } ;
struct drm_i915_gem_object {int bit_17; TYPE_4__ base; int pages; scalar_t__ pages_pin_count; scalar_t__ pin_count; scalar_t__ phys_obj; } ;
struct drm_gem_object {int dummy; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_6__ {int interruptible; } ;
struct TYPE_7__ {TYPE_1__ mm; } ;
typedef TYPE_2__ drm_i915_private_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 int FUNC_4 (struct drm_device*,struct drm_i915_gem_object*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 int FUNC_9 (struct drm_i915_gem_object*) ;
 int FUNC_10 (struct drm_i915_gem_object*) ;
 int FUNC_11 (int ) ;
 struct drm_i915_gem_object* FUNC_12 (struct drm_gem_object*) ;
 int FUNC_13 (struct drm_i915_gem_object*) ;

void FUNC_14(struct drm_gem_object *VAR_1)
{
 struct drm_i915_gem_object *VAR_2 = FUNC_12(VAR_1);
 struct drm_device *VAR_3 = VAR_2->base.dev;
 drm_i915_private_t *VAR_4 = VAR_3->dev_private;

 FUNC_13(VAR_2);

 if (VAR_2->phys_obj)
  FUNC_4(VAR_3, VAR_2);

 VAR_2->pin_count = 0;
 if (FUNC_1(FUNC_10(VAR_2) == -VAR_0)) {
  bool VAR_5;

  VAR_5 = VAR_4->mm.interruptible;
  VAR_4->mm.interruptible = 0;

  FUNC_1(FUNC_10(VAR_2));

  VAR_4->mm.interruptible = VAR_5;
 }

 VAR_2->pages_pin_count = 0;
 FUNC_8(VAR_2);
 FUNC_7(VAR_2);
 FUNC_9(VAR_2);

 FUNC_0(VAR_2->pages);

 if (VAR_2->base.import_attach)
  FUNC_3(&VAR_2->base, ((void*)0));

 FUNC_2(&VAR_2->base);
 FUNC_5(VAR_4, VAR_2->base.size);

 FUNC_11(VAR_2->bit_17);
 FUNC_6(VAR_2);
}
