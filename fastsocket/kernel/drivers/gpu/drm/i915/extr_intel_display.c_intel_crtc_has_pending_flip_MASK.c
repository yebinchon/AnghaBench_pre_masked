
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_crtc {scalar_t__ reset_counter; int * unpin_work; } ;
struct TYPE_2__ {int reset_counter; } ;
struct drm_i915_private {TYPE_1__ gpu_error; } ;
struct drm_device {int event_lock; struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_device* dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct intel_crtc* FUNC_4 (struct drm_crtc*) ;

__attribute__((used)) static bool FUNC_5(struct drm_crtc *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct drm_i915_private *VAR_2 = VAR_1->dev_private;
 struct intel_crtc *VAR_3 = FUNC_4(VAR_0);
 unsigned long VAR_4;
 bool VAR_5;

 if (FUNC_1(&VAR_2->gpu_error) ||
     VAR_3->reset_counter != FUNC_0(&VAR_2->gpu_error.reset_counter))
  return 0;

 FUNC_2(&VAR_1->event_lock, VAR_4);
 VAR_5 = FUNC_4(VAR_0)->unpin_work != ((void*)0);
 FUNC_3(&VAR_1->event_lock, VAR_4);

 return VAR_5;
}
