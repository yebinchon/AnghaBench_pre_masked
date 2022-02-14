
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ write_domain; } ;
struct drm_i915_gem_object {scalar_t__ cache_level; int map_and_fenceable; TYPE_1__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct drm_i915_gem_object *VAR_2)
{
 return (VAR_2->base.write_domain == VAR_1 ||
  !VAR_2->map_and_fenceable ||
  VAR_2->cache_level != VAR_0);
}
