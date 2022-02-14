
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_control {struct drm_i915_gem_object* obj; } ;
struct intel_ring_buffer {struct pipe_control* private; } ;
struct drm_i915_gem_object {int base; TYPE_1__* pages; } ;
struct TYPE_2__ {int sgl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_gem_object*) ;
 int FUNC_2 (struct pipe_control*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct intel_ring_buffer *VAR_0)
{
 struct pipe_control *VAR_1 = VAR_0->private;
 struct drm_i915_gem_object *VAR_2;

 if (!VAR_0->private)
  return;

 VAR_2 = VAR_1->obj;

 FUNC_3(FUNC_4(VAR_2->pages->sgl));
 FUNC_1(VAR_2);
 FUNC_0(&VAR_2->base);

 FUNC_2(VAR_1);
 VAR_0->private = ((void*)0);
}
