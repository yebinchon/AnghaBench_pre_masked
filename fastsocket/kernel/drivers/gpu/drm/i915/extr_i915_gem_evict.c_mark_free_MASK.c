
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct drm_i915_gem_object {int gtt_space; int exec_list; scalar_t__ pin_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static bool
FUNC_2(struct drm_i915_gem_object *VAR_0, struct list_head *VAR_1)
{
 if (VAR_0->pin_count)
  return 0;

 FUNC_1(&VAR_0->exec_list, VAR_1);
 return FUNC_0(VAR_0->gtt_space);
}
