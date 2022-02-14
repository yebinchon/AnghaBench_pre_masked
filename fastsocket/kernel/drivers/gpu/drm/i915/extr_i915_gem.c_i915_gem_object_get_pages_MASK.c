
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unbound_list; } ;
struct drm_i915_private {TYPE_1__ mm; } ;
struct drm_i915_gem_object_ops {int (* get_pages ) (struct drm_i915_gem_object*) ;} ;
struct TYPE_6__ {TYPE_2__* dev; } ;
struct drm_i915_gem_object {scalar_t__ madv; int gtt_list; int pages_pin_count; scalar_t__ pages; struct drm_i915_gem_object_ops* ops; TYPE_3__ base; } ;
struct TYPE_5__ {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct drm_i915_gem_object*) ;

int
FUNC_4(struct drm_i915_gem_object *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->base.dev->dev_private;
 const struct drm_i915_gem_object_ops *VAR_4 = VAR_2->ops;
 int VAR_5;

 if (VAR_2->pages)
  return 0;

 if (VAR_2->madv != VAR_1) {
  FUNC_1("Attempting to obtain a purgeable object\n");
  return -VAR_0;
 }

 FUNC_0(VAR_2->pages_pin_count);

 VAR_5 = VAR_4->get_pages(VAR_2);
 if (VAR_5)
  return VAR_5;

 FUNC_2(&VAR_2->gtt_list, &VAR_3->mm.unbound_list);
 return 0;
}
