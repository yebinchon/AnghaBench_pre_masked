
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int shrinker_no_lock_stealing; } ;
struct drm_i915_private {TYPE_2__ mm; } ;
struct TYPE_5__ {scalar_t__ map; } ;
struct TYPE_8__ {int size; TYPE_1__ map_list; TYPE_3__* dev; } ;
struct drm_i915_gem_object {TYPE_4__ base; } ;
struct TYPE_7__ {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (struct drm_i915_private*,int) ;
 int FUNC_2 (struct drm_i915_private*) ;

__attribute__((used)) static int FUNC_3(struct drm_i915_gem_object *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->base.dev->dev_private;
 int VAR_4;

 if (VAR_2->base.map_list.map)
  return 0;

 VAR_3->mm.shrinker_no_lock_stealing = 1;

 VAR_4 = FUNC_0(&VAR_2->base);
 if (VAR_4 != -VAR_0)
  goto out;
 FUNC_1(VAR_3, VAR_2->base.size >> VAR_1);
 VAR_4 = FUNC_0(&VAR_2->base);
 if (VAR_4 != -VAR_0)
  goto out;

 FUNC_2(VAR_3);
 VAR_4 = FUNC_0(&VAR_2->base);
out:
 VAR_3->mm.shrinker_no_lock_stealing = 0;

 return VAR_4;
}
