
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct drm_i915_gem_object* obj; } ;
struct intel_ring_buffer {TYPE_2__ status_page; } ;
struct drm_i915_gem_object {int base; TYPE_1__* pages; } ;
struct TYPE_3__ {int sgl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct intel_ring_buffer *VAR_0)
{
 struct drm_i915_gem_object *VAR_1;

 VAR_1 = VAR_0->status_page.obj;
 if (VAR_1 == ((void*)0))
  return;

 FUNC_2(FUNC_3(VAR_1->pages->sgl));
 FUNC_1(VAR_1);
 FUNC_0(&VAR_1->base);
 VAR_0->status_page.obj = ((void*)0);
}
