
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int delayed_resume_work; } ;
struct drm_i915_private {TYPE_1__ rps; } ;
struct drm_device {struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int ) ;

void FUNC_9(struct drm_device *VAR_1)
{
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;

 if (FUNC_2(VAR_1)) {
  FUNC_5(VAR_1);
  FUNC_6(VAR_1);
  FUNC_4(VAR_1);
 } else if ((FUNC_0(VAR_1) || FUNC_1(VAR_1)) && !FUNC_3(VAR_1)) {





  FUNC_8(&VAR_2->rps.delayed_resume_work,
          FUNC_7(VAR_0));
 }
}
