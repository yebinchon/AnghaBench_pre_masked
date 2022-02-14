
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_ring_buffer {int dummy; } ;
struct TYPE_3__ {int interruptible; } ;
struct drm_i915_private {TYPE_1__ mm; } ;
struct drm_i915_gem_object {int tiling_mode; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int gen; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int VAR_0 ;



 TYPE_2__* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_i915_gem_object*) ;
 int FUNC_6 (struct drm_i915_gem_object*) ;
 int FUNC_7 (struct drm_i915_gem_object*,int,struct intel_ring_buffer*) ;
 int FUNC_8 (struct drm_i915_gem_object*) ;

int
FUNC_9(struct drm_device *VAR_1,
      struct drm_i915_gem_object *VAR_2,
      struct intel_ring_buffer *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_1->dev_private;
 u32 VAR_5;
 int VAR_6;

 switch (VAR_2->tiling_mode) {
 case 130:
  if (FUNC_3(VAR_1) || FUNC_4(VAR_1))
   VAR_5 = 128 * 1024;
  else if (FUNC_2(VAR_1)->gen >= 4)
   VAR_5 = 4 * 1024;
  else
   VAR_5 = 64 * 1024;
  break;
 case 129:

  VAR_5 = 0;
  break;
 case 128:

  FUNC_1("Y tiled not allowed for scan out buffers\n");
  return -VAR_0;
 default:
  FUNC_0();
 }

 VAR_4->mm.interruptible = 0;
 VAR_6 = FUNC_7(VAR_2, VAR_5, VAR_3);
 if (VAR_6)
  goto err_interruptible;






 VAR_6 = FUNC_5(VAR_2);
 if (VAR_6)
  goto err_unpin;

 FUNC_6(VAR_2);

 VAR_4->mm.interruptible = 1;
 return 0;

err_unpin:
 FUNC_8(VAR_2);
err_interruptible:
 VAR_4->mm.interruptible = 1;
 return VAR_6;
}
