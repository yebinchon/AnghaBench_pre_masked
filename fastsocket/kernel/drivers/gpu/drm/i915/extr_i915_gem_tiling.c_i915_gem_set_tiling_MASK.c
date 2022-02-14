
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct drm_i915_gem_set_tiling {scalar_t__ stride; scalar_t__ tiling_mode; scalar_t__ swizzle_mode; int handle; } ;
struct TYPE_9__ {scalar_t__ size; } ;
struct drm_i915_gem_object {scalar_t__ tiling_mode; scalar_t__ stride; int map_and_fenceable; scalar_t__ gtt_offset; int fence_dirty; scalar_t__ fence_reg; TYPE_4__ base; int * bit_17; scalar_t__ fenced_gpu_access; int * gtt_space; scalar_t__ pin_count; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; TYPE_3__* dev_private; } ;
struct TYPE_7__ {scalar_t__ mappable_end; } ;
struct TYPE_6__ {scalar_t__ bit_6_swizzle_x; scalar_t__ bit_6_swizzle_y; } ;
struct TYPE_8__ {TYPE_2__ gtt; TYPE_1__ mm; } ;
typedef TYPE_3__ drm_i915_private_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct drm_device*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct drm_i915_gem_object*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;
 int FUNC_9 (struct drm_device*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct drm_i915_gem_object* FUNC_14 (int ) ;

int
FUNC_15(struct drm_device *VAR_14, void *VAR_15,
     struct drm_file *VAR_16)
{
 struct drm_i915_gem_set_tiling *VAR_17 = VAR_15;
 drm_i915_private_t *VAR_18 = VAR_14->dev_private;
 struct drm_i915_gem_object *VAR_19;
 int VAR_20 = 0;

 VAR_19 = FUNC_14(FUNC_1(VAR_14, VAR_16, VAR_17->handle));
 if (&VAR_19->base == ((void*)0))
  return -VAR_2;

 if (!FUNC_9(VAR_14,
       VAR_17->stride, VAR_19->base.size, VAR_17->tiling_mode)) {
  FUNC_3(&VAR_19->base);
  return -VAR_1;
 }

 if (VAR_19->pin_count) {
  FUNC_3(&VAR_19->base);
  return -VAR_0;
 }

 if (VAR_17->tiling_mode == VAR_11) {
  VAR_17->swizzle_mode = VAR_8;
  VAR_17->stride = 0;
 } else {
  if (VAR_17->tiling_mode == VAR_12)
   VAR_17->swizzle_mode = VAR_18->mm.bit_6_swizzle_x;
  else
   VAR_17->swizzle_mode = VAR_18->mm.bit_6_swizzle_y;
  if (VAR_17->swizzle_mode == VAR_7)
   VAR_17->swizzle_mode = VAR_4;
  if (VAR_17->swizzle_mode == VAR_6)
   VAR_17->swizzle_mode = VAR_5;


  if (VAR_17->swizzle_mode == VAR_9) {
   VAR_17->tiling_mode = VAR_11;
   VAR_17->swizzle_mode = VAR_8;
   VAR_17->stride = 0;
  }
 }

 FUNC_12(&VAR_14->struct_mutex);
 if (VAR_17->tiling_mode != VAR_19->tiling_mode ||
     VAR_17->stride != VAR_19->stride) {
  VAR_19->map_and_fenceable =
   VAR_19->gtt_space == ((void*)0) ||
   (VAR_19->gtt_offset + VAR_19->base.size <= VAR_18->gtt.mappable_end &&
    FUNC_5(VAR_19, VAR_17->tiling_mode));


  if (!VAR_19->map_and_fenceable) {
   u32 VAR_21 =
    FUNC_4(VAR_14, VAR_19->base.size,
           VAR_17->tiling_mode,
           0);
   if (VAR_19->gtt_offset & (VAR_21 - 1))
    VAR_20 = FUNC_7(VAR_19);
  }

  if (VAR_20 == 0) {
   VAR_19->fence_dirty =
    VAR_19->fenced_gpu_access ||
    VAR_19->fence_reg != VAR_10;

   VAR_19->tiling_mode = VAR_17->tiling_mode;
   VAR_19->stride = VAR_17->stride;


   FUNC_8(VAR_19);
  }
 }

 VAR_17->stride = VAR_19->stride;
 VAR_17->tiling_mode = VAR_19->tiling_mode;


 if (FUNC_6(VAR_19)) {
  if (VAR_19->bit_17 == ((void*)0)) {
   VAR_19->bit_17 = FUNC_11(FUNC_0(VAR_19->base.size >> VAR_13) *
           sizeof(long), VAR_3);
  }
 } else {
  FUNC_10(VAR_19->bit_17);
  VAR_19->bit_17 = ((void*)0);
 }

 FUNC_2(&VAR_19->base);
 FUNC_13(&VAR_14->struct_mutex);

 return VAR_20;
}
