
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_i915_gem_object {int tiling_mode; int base; } ;
struct drm_i915_gem_get_tiling {int tiling_mode; scalar_t__ swizzle_mode; int handle; } ;
struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; TYPE_2__* dev_private; } ;
struct TYPE_3__ {scalar_t__ bit_6_swizzle_x; scalar_t__ bit_6_swizzle_y; } ;
struct TYPE_4__ {TYPE_1__ mm; } ;
typedef TYPE_2__ drm_i915_private_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;



 int FUNC_1 (struct drm_device*,struct drm_file*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct drm_i915_gem_object* FUNC_5 (int ) ;

int
FUNC_6(struct drm_device *VAR_6, void *VAR_7,
     struct drm_file *VAR_8)
{
 struct drm_i915_gem_get_tiling *VAR_9 = VAR_7;
 drm_i915_private_t *VAR_10 = VAR_6->dev_private;
 struct drm_i915_gem_object *VAR_11;

 VAR_11 = FUNC_5(FUNC_1(VAR_6, VAR_8, VAR_9->handle));
 if (&VAR_11->base == ((void*)0))
  return -VAR_0;

 FUNC_3(&VAR_6->struct_mutex);

 VAR_9->tiling_mode = VAR_11->tiling_mode;
 switch (VAR_11->tiling_mode) {
 case 129:
  VAR_9->swizzle_mode = VAR_10->mm.bit_6_swizzle_x;
  break;
 case 128:
  VAR_9->swizzle_mode = VAR_10->mm.bit_6_swizzle_y;
  break;
 case 130:
  VAR_9->swizzle_mode = VAR_5;
  break;
 default:
  FUNC_0("unknown tiling mode\n");
 }


 if (VAR_9->swizzle_mode == VAR_4)
  VAR_9->swizzle_mode = VAR_1;
 if (VAR_9->swizzle_mode == VAR_3)
  VAR_9->swizzle_mode = VAR_2;

 FUNC_2(&VAR_11->base);
 FUNC_4(&VAR_6->struct_mutex);

 return 0;
}
