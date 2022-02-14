
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_unpin_work {int pending_flip_obj; int work; struct drm_i915_gem_object* old_fb_obj; scalar_t__ event; int pending; } ;
struct intel_crtc {int plane; int pipe; struct intel_unpin_work* unpin_work; } ;
struct drm_i915_gem_object {int dummy; } ;
struct drm_device {int event_lock; TYPE_1__* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int wq; int pending_flip_queue; } ;
typedef TYPE_1__ drm_i915_private_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct drm_device*,int ,scalar_t__) ;
 int FUNC_2 (struct drm_device*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct intel_crtc* FUNC_7 (struct drm_crtc*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct drm_device *VAR_1,
          struct drm_crtc *VAR_2)
{
 drm_i915_private_t *VAR_3 = VAR_1->dev_private;
 struct intel_crtc *VAR_4 = FUNC_7(VAR_2);
 struct intel_unpin_work *VAR_5;
 struct drm_i915_gem_object *VAR_6;
 unsigned long VAR_7;


 if (VAR_4 == ((void*)0))
  return;

 FUNC_5(&VAR_1->event_lock, VAR_7);
 VAR_5 = VAR_4->unpin_work;


 FUNC_4();

 if (VAR_5 == ((void*)0) || FUNC_0(&VAR_5->pending) < VAR_0) {
  FUNC_6(&VAR_1->event_lock, VAR_7);
  return;
 }


 FUNC_4();

 VAR_4->unpin_work = ((void*)0);

 if (VAR_5->event)
  FUNC_1(VAR_1, VAR_4->pipe, VAR_5->event);

 FUNC_2(VAR_1, VAR_4->pipe);

 FUNC_6(&VAR_1->event_lock, VAR_7);

 VAR_6 = VAR_5->old_fb_obj;

 FUNC_9(&VAR_3->pending_flip_queue);

 FUNC_3(VAR_3->wq, &VAR_5->work);

 FUNC_8(VAR_4->plane, VAR_5->pending_flip_obj);
}
