
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int delayed_resume_work; } ;
struct TYPE_3__ {int force_wake_put; int force_wake_get; } ;
struct drm_i915_private {TYPE_2__ rps; TYPE_1__ gt; int gt_lock; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (struct drm_device*) ;
 scalar_t__ FUNC_4 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_7(struct drm_device *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_7->dev_private;

 FUNC_6(&VAR_8->gt_lock);

 FUNC_5(VAR_7);

 if (FUNC_4(VAR_7)) {
  VAR_8->gt.force_wake_get = VAR_5;
  VAR_8->gt.force_wake_put = VAR_6;
 } else if (FUNC_3(VAR_7) || FUNC_2(VAR_7)) {
  VAR_8->gt.force_wake_get = VAR_1;
  VAR_8->gt.force_wake_put = VAR_2;
 } else if (FUNC_1(VAR_7)) {
  VAR_8->gt.force_wake_get = VAR_0;
  VAR_8->gt.force_wake_put = VAR_3;
 }
 FUNC_0(&VAR_8->rps.delayed_resume_work,
     VAR_4);
}
