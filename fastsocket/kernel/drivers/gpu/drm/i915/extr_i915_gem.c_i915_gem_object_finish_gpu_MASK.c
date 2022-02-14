
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int read_domains; } ;
struct drm_i915_gem_object {TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_i915_gem_object*,int) ;

int
FUNC_1(struct drm_i915_gem_object *VAR_1)
{
 int VAR_2;

 if ((VAR_1->base.read_domains & VAR_0) == 0)
  return 0;

 VAR_2 = FUNC_0(VAR_1, 0);
 if (VAR_2)
  return VAR_2;


 VAR_1->base.read_domains &= ~VAR_0;
 return 0;
}
