
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ suspended; } ;
struct drm_i915_private {int enable_hotplug_processing; int modeset_restore_lock; int modeset_restore; int console_resume_work; TYPE_1__ mm; } ;
struct drm_device {int struct_mutex; struct drm_i915_private* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 int FUNC_6 (struct drm_device*,int ) ;
 int FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*) ;
 int FUNC_10 (struct drm_device*,int) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct drm_device *VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_2->dev_private;
 int VAR_4 = 0;

 FUNC_5(VAR_2);
 FUNC_12(VAR_2);


 if (FUNC_2(VAR_2, VAR_0)) {
  FUNC_8(VAR_2);

  FUNC_13(&VAR_2->struct_mutex);
  VAR_3->mm.suspended = 0;

  VAR_4 = FUNC_4(VAR_2);
  FUNC_14(&VAR_2->struct_mutex);


  FUNC_3(VAR_2);

  FUNC_9(VAR_2);
  FUNC_10(VAR_2, 0);







  FUNC_7(VAR_2);
  VAR_3->enable_hotplug_processing = 1;
 }

 FUNC_11(VAR_2);






 if (FUNC_0()) {
  FUNC_6(VAR_2, 0);
  FUNC_1();
 } else {
  FUNC_15(&VAR_3->console_resume_work);
 }

 FUNC_13(&VAR_3->modeset_restore_lock);
 VAR_3->modeset_restore = VAR_1;
 FUNC_14(&VAR_3->modeset_restore_lock);
 return VAR_4;
}
