
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_domains; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;


 int VAR_0 ;

__attribute__((used)) inline static bool FUNC_0(struct drm_i915_gem_object *VAR_1)
{
 return VAR_1 && VAR_1->base.read_domains & VAR_0;
}
