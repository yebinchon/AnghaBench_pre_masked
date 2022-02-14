
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_gem_object_ops {int (* put_pages ) (struct drm_i915_gem_object*) ;} ;
struct drm_i915_gem_object {int * pages; int gtt_list; scalar_t__ pages_pin_count; int gtt_space; struct drm_i915_gem_object_ops* ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct drm_i915_gem_object*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;

int
FUNC_5(struct drm_i915_gem_object *VAR_1)
{
 const struct drm_i915_gem_object_ops *VAR_2 = VAR_1->ops;

 if (VAR_1->pages == ((void*)0))
  return 0;

 FUNC_0(VAR_1->gtt_space);

 if (VAR_1->pages_pin_count)
  return -VAR_0;




 FUNC_3(&VAR_1->gtt_list);

 VAR_2->put_pages(VAR_1);
 VAR_1->pages = ((void*)0);

 if (FUNC_1(VAR_1))
  FUNC_2(VAR_1);

 return 0;
}
