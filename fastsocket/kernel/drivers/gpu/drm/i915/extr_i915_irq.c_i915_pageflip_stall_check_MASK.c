
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_unpin_work {struct drm_i915_gem_object* pending_flip_obj; int enable_stall_check; int pending; } ;
struct intel_crtc {int plane; struct intel_unpin_work* unpin_work; } ;
struct drm_i915_gem_object {scalar_t__ gtt_offset; } ;
struct drm_device {int event_lock; TYPE_2__* dev_private; } ;
struct drm_crtc {int y; int x; TYPE_1__* fb; } ;
struct TYPE_5__ {struct drm_crtc** pipe_to_crtc_mapping; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_6__ {int gen; } ;
struct TYPE_4__ {int* pitches; int bits_per_pixel; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_3__* FUNC_5 (struct drm_device*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct drm_device*,int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct intel_crtc* FUNC_10 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_11(struct drm_device *VAR_1, int VAR_2)
{
 drm_i915_private_t *VAR_3 = VAR_1->dev_private;
 struct drm_crtc *VAR_4 = VAR_3->pipe_to_crtc_mapping[VAR_2];
 struct intel_crtc *VAR_5 = FUNC_10(VAR_4);
 struct drm_i915_gem_object *VAR_6;
 struct intel_unpin_work *VAR_7;
 unsigned long VAR_8;
 bool VAR_9;


 if (VAR_5 == ((void*)0))
  return;

 FUNC_8(&VAR_1->event_lock, VAR_8);
 VAR_7 = VAR_5->unpin_work;

 if (VAR_7 == ((void*)0) ||
     FUNC_6(&VAR_7->pending) >= VAR_0 ||
     !VAR_7->enable_stall_check) {

  FUNC_9(&VAR_1->event_lock, VAR_8);
  return;
 }


 VAR_6 = VAR_7->pending_flip_obj;
 if (FUNC_5(VAR_1)->gen >= 4) {
  int VAR_10 = FUNC_2(VAR_5->plane);
  VAR_9 = FUNC_3(FUNC_4(VAR_10)) ==
     VAR_6->gtt_offset;
 } else {
  int VAR_11 = FUNC_1(VAR_5->plane);
  VAR_9 = FUNC_4(VAR_11) == (VAR_6->gtt_offset +
       VAR_4->y * VAR_4->fb->pitches[0] +
       VAR_4->x * VAR_4->fb->bits_per_pixel/8);
 }

 FUNC_9(&VAR_1->event_lock, VAR_8);

 if (VAR_9) {
  FUNC_0("Pageflip stall detected\n");
  FUNC_7(VAR_1, VAR_5->plane);
 }
}
