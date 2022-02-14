
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_crtc {TYPE_1__* unpin_work; } ;
struct drm_device {int event_lock; TYPE_2__* dev_private; } ;
struct TYPE_4__ {int * plane_to_crtc_mapping; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_3__ {int pending; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct intel_crtc* FUNC_3 (int ) ;

void FUNC_4(struct drm_device *VAR_0, int VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_0->dev_private;
 struct intel_crtc *VAR_3 =
  FUNC_3(VAR_2->plane_to_crtc_mapping[VAR_1]);
 unsigned long VAR_4;





 FUNC_1(&VAR_0->event_lock, VAR_4);
 if (VAR_3->unpin_work)
  FUNC_0(&VAR_3->unpin_work->pending);
 FUNC_2(&VAR_0->event_lock, VAR_4);
}
