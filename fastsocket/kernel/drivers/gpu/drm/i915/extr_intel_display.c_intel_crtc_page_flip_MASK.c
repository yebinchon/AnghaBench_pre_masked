
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct intel_unpin_work {int enable_stall_check; struct drm_i915_gem_object* old_fb_obj; struct drm_i915_gem_object* pending_flip_obj; int work; struct drm_crtc* crtc; struct drm_pending_vblank_event* event; } ;
struct intel_crtc {int reset_counter; int pipe; struct intel_unpin_work* unpin_work; int unpin_work_count; int plane; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct TYPE_6__ {int (* queue_flip ) (struct drm_device*,struct drm_crtc*,struct drm_framebuffer*,struct drm_i915_gem_object*) ;} ;
struct TYPE_5__ {int reset_counter; } ;
struct drm_i915_private {TYPE_2__ display; TYPE_1__ gpu_error; int wq; } ;
struct drm_i915_gem_object {int base; } ;
struct drm_framebuffer {scalar_t__ pixel_format; scalar_t__* offsets; scalar_t__* pitches; } ;
struct drm_device {int event_lock; int struct_mutex; struct drm_i915_private* dev_private; } ;
struct drm_crtc {struct drm_framebuffer* fb; struct drm_device* dev; } ;
struct TYPE_8__ {int gen; } ;
struct TYPE_7__ {struct drm_i915_gem_object* obj; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 TYPE_4__* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (struct drm_device*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct drm_device*) ;
 int FUNC_12 (struct drm_device*) ;
 int FUNC_13 (struct drm_i915_gem_object*) ;
 int VAR_4 ;
 int FUNC_14 (struct intel_unpin_work*) ;
 struct intel_unpin_work* FUNC_15 (int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (struct drm_device*,struct drm_crtc*,struct drm_framebuffer*,struct drm_i915_gem_object*) ;
 struct intel_crtc* FUNC_20 (struct drm_crtc*) ;
 TYPE_3__* FUNC_21 (struct drm_framebuffer*) ;
 int FUNC_22 (int ,struct drm_i915_gem_object*) ;

__attribute__((used)) static int FUNC_23(struct drm_crtc *VAR_5,
    struct drm_framebuffer *VAR_6,
    struct drm_pending_vblank_event *VAR_7)
{
 struct drm_device *VAR_8 = VAR_5->dev;
 struct drm_i915_private *VAR_9 = VAR_8->dev_private;
 struct drm_framebuffer *VAR_10 = VAR_5->fb;
 struct drm_i915_gem_object *VAR_11 = FUNC_21(VAR_6)->obj;
 struct intel_crtc *VAR_12 = FUNC_20(VAR_5);
 struct intel_unpin_work *VAR_13;
 unsigned long VAR_14;
 int VAR_15;


 if (VAR_6->pixel_format != VAR_5->fb->pixel_format)
  return -VAR_1;





 if (FUNC_2(VAR_8)->gen > 3 &&
     (VAR_6->offsets[0] != VAR_5->fb->offsets[0] ||
      VAR_6->pitches[0] != VAR_5->fb->pitches[0]))
  return -VAR_1;

 VAR_13 = FUNC_15(sizeof *VAR_13, VAR_3);
 if (VAR_13 == ((void*)0))
  return -VAR_2;

 VAR_13->event = VAR_7;
 VAR_13->crtc = VAR_5;
 VAR_13->old_fb_obj = FUNC_21(VAR_10)->obj;
 FUNC_1(&VAR_13->work, VAR_4);

 VAR_15 = FUNC_8(VAR_8, VAR_12->pipe);
 if (VAR_15)
  goto free_work;


 FUNC_17(&VAR_8->event_lock, VAR_14);
 if (VAR_12->unpin_work) {
  FUNC_18(&VAR_8->event_lock, VAR_14);
  FUNC_14(VAR_13);
  FUNC_9(VAR_8, VAR_12->pipe);

  FUNC_0("flip queue: crtc already busy\n");
  return -VAR_0;
 }
 VAR_12->unpin_work = VAR_13;
 FUNC_18(&VAR_8->event_lock, VAR_14);

 if (FUNC_5(&VAR_12->unpin_work_count) >= 2)
  FUNC_10(VAR_9->wq);

 VAR_15 = FUNC_11(VAR_8);
 if (VAR_15)
  goto cleanup;


 FUNC_6(&VAR_13->old_fb_obj->base);
 FUNC_6(&VAR_11->base);

 VAR_5->fb = VAR_6;

 VAR_13->pending_flip_obj = VAR_11;

 VAR_13->enable_stall_check = 1;

 FUNC_4(&VAR_12->unpin_work_count);
 VAR_12->reset_counter = FUNC_5(&VAR_9->gpu_error.reset_counter);

 VAR_15 = VAR_9->display.queue_flip(VAR_8, VAR_5, VAR_6, VAR_11);
 if (VAR_15)
  goto cleanup_pending;

 FUNC_12(VAR_8);
 FUNC_13(VAR_11);
 FUNC_16(&VAR_8->struct_mutex);

 FUNC_22(VAR_12->plane, VAR_11);

 return 0;

cleanup_pending:
 FUNC_3(&VAR_12->unpin_work_count);
 VAR_5->fb = VAR_10;
 FUNC_7(&VAR_13->old_fb_obj->base);
 FUNC_7(&VAR_11->base);
 FUNC_16(&VAR_8->struct_mutex);

cleanup:
 FUNC_17(&VAR_8->event_lock, VAR_14);
 VAR_12->unpin_work = ((void*)0);
 FUNC_18(&VAR_8->event_lock, VAR_14);

 FUNC_9(VAR_8, VAR_12->pipe);
free_work:
 FUNC_14(VAR_13);

 return VAR_15;
}
