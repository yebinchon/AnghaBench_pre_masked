
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int delayed_resume_work; } ;
struct drm_i915_private {int enable_hotplug_processing; TYPE_1__ rps; int modeset_restore_lock; int modeset_restore; } ;
struct drm_device {TYPE_2__* pdev; struct drm_i915_private* dev_private; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*,int) ;
 int FUNC_10 (struct drm_device*) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;


 FUNC_13(&VAR_3->modeset_restore_lock);
 VAR_3->modeset_restore = VAR_1;
 FUNC_14(&VAR_3->modeset_restore_lock);

 FUNC_12(VAR_2, 1);

 FUNC_6(VAR_2);

 FUNC_15(VAR_2->pdev);


 if (FUNC_4(VAR_2, VAR_0)) {
  int VAR_4 = FUNC_7(VAR_2);
  if (VAR_4) {
   FUNC_3(&VAR_2->pdev->dev,
    "GEM idle failed, resume might fail\n");
   return VAR_4;
  }

  FUNC_0(&VAR_3->rps.delayed_resume_work);

  FUNC_10(VAR_2);

  FUNC_5(VAR_2);
  VAR_3->enable_hotplug_processing = 0;
 }

 FUNC_8(VAR_2);

 FUNC_11(VAR_2);

 FUNC_1();
 FUNC_9(VAR_2, 1);
 FUNC_2();

 return 0;
}
