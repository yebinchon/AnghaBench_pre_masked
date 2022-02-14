
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stop_rings; } ;
struct drm_i915_private {TYPE_1__ gpu_error; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int gen; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;

int FUNC_7(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;
 int VAR_3 = -VAR_0;

 switch (FUNC_2(VAR_1)->gen) {
 case 7:
 case 6:
  VAR_3 = FUNC_3(VAR_1);
  break;
 case 5:
  VAR_3 = FUNC_6(VAR_1);
  break;
 case 4:
  VAR_3 = FUNC_5(VAR_1);
  break;
 case 2:
  VAR_3 = FUNC_4(VAR_1);
  break;
 }


 if (VAR_2->gpu_error.stop_rings) {
  FUNC_0("Simulated gpu hang, resetting stop_rings\n");
  VAR_2->gpu_error.stop_rings = 0;
  if (VAR_3 == -VAR_0) {
   FUNC_1("Reset not implemented, but ignoring "
      "error for simulated gpu hangs\n");
   VAR_3 = 0;
  }
 }

 return VAR_3;
}
