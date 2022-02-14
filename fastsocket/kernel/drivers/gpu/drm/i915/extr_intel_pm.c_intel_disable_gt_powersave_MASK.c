
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hw_lock; int delayed_resume_work; } ;
struct drm_i915_private {TYPE_1__ rps; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int gen; } ;


 TYPE_2__* FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct drm_device *VAR_0)
{
 struct drm_i915_private *VAR_1 = VAR_0->dev_private;

 if (FUNC_1(VAR_0)) {
  FUNC_5(VAR_0);
  FUNC_6(VAR_0);
 } else if (FUNC_0(VAR_0)->gen >= 6 && !FUNC_2(VAR_0)) {
  FUNC_3(&VAR_1->rps.delayed_resume_work);
  FUNC_7(&VAR_1->rps.hw_lock);
  FUNC_4(VAR_0);
  FUNC_8(&VAR_1->rps.hw_lock);
 }
}
