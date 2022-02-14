
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int aliasing_ppgtt; } ;
struct drm_i915_private {TYPE_3__ mm; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct drm_i915_gem_object {scalar_t__ pin_count; int gtt_offset; int pin_mappable; int cache_level; int has_global_gtt_mapping; TYPE_2__ base; int * gtt_space; int map_and_fenceable; } ;
struct TYPE_4__ {struct drm_i915_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char*,int,int,int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct drm_i915_gem_object*,int ) ;
 int FUNC_3 (struct drm_i915_gem_object*,int,int,int) ;
 int FUNC_4 (struct drm_i915_gem_object*) ;

int
FUNC_5(struct drm_i915_gem_object *VAR_2,
      uint32_t VAR_3,
      bool VAR_4,
      bool VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_2->pin_count == VAR_0))
  return -VAR_1;

 if (VAR_2->gtt_space != ((void*)0)) {
  if ((VAR_3 && VAR_2->gtt_offset & (VAR_3 - 1)) ||
      (VAR_4 && !VAR_2->map_and_fenceable)) {
   FUNC_0(VAR_2->pin_count,
        "bo is already pinned with incorrect alignment:"
        " offset=%x, req.alignment=%x, req.map_and_fenceable=%d,"
        " obj->map_and_fenceable=%d\n",
        VAR_2->gtt_offset, VAR_3,
        VAR_4,
        VAR_2->map_and_fenceable);
   VAR_6 = FUNC_4(VAR_2);
   if (VAR_6)
    return VAR_6;
  }
 }

 if (VAR_2->gtt_space == ((void*)0)) {
  struct drm_i915_private *VAR_7 = VAR_2->base.dev->dev_private;

  VAR_6 = FUNC_3(VAR_2, VAR_3,
        VAR_4,
        VAR_5);
  if (VAR_6)
   return VAR_6;

  if (!VAR_7->mm.aliasing_ppgtt)
   FUNC_2(VAR_2, VAR_2->cache_level);
 }

 if (!VAR_2->has_global_gtt_mapping && VAR_4)
  FUNC_2(VAR_2, VAR_2->cache_level);

 VAR_2->pin_count++;
 VAR_2->pin_mappable |= VAR_4;

 return 0;
}
