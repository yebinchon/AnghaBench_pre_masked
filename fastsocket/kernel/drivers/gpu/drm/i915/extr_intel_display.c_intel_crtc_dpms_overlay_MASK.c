
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct drm_device* dev; } ;
struct intel_crtc {scalar_t__ overlay; TYPE_1__ base; } ;
struct TYPE_4__ {int interruptible; } ;
struct drm_i915_private {TYPE_2__ mm; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct intel_crtc *VAR_0, bool VAR_1)
{
 if (!VAR_1 && VAR_0->overlay) {
  struct drm_device *VAR_2 = VAR_0->base.dev;
  struct drm_i915_private *VAR_3 = VAR_2->dev_private;

  FUNC_1(&VAR_2->struct_mutex);
  VAR_3->mm.interruptible = 0;
  (void) FUNC_0(VAR_0->overlay);
  VAR_3->mm.interruptible = 1;
  FUNC_2(&VAR_2->struct_mutex);
 }




}
