
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct radeon_unpin_work {int new_crtc_base; int fence; struct radeon_bo* old_rbo; int work; int crtc_id; struct radeon_device* rdev; struct drm_pending_vblank_event* event; } ;
struct radeon_framebuffer {struct drm_gem_object* obj; } ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {struct radeon_unpin_work* unpin_work; int crtc_id; scalar_t__ legacy_display_base_addr; scalar_t__ deferred_flip_completion; } ;
struct TYPE_4__ {TYPE_1__* bdev; scalar_t__ sync_obj; } ;
struct radeon_bo {TYPE_2__ tbo; } ;
struct drm_pending_vblank_event {int dummy; } ;
struct drm_gem_object {int dummy; } ;
struct drm_framebuffer {int* pitches; int bits_per_pixel; } ;
struct drm_device {int event_lock; struct radeon_device* dev_private; } ;
struct drm_crtc {int y; int x; struct drm_framebuffer* fb; struct drm_device* dev; } ;
struct TYPE_3__ {int fence_lock; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (struct drm_gem_object*) ;
 int FUNC_6 (struct drm_gem_object*) ;
 int FUNC_7 (struct drm_device*,int ) ;
 struct radeon_bo* FUNC_8 (struct drm_gem_object*) ;
 int FUNC_9 (struct radeon_unpin_work*) ;
 struct radeon_unpin_work* FUNC_10 (int,int ) ;
 int FUNC_11 (struct radeon_bo*,int*,int *) ;
 int FUNC_12 (struct radeon_bo*,int ,int,int*) ;
 int FUNC_13 (struct radeon_bo*,int) ;
 scalar_t__ FUNC_14 (struct radeon_bo*) ;
 int FUNC_15 (struct radeon_bo*) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct radeon_device*,int ) ;
 int VAR_6 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,unsigned long) ;
 struct radeon_crtc* FUNC_23 (struct drm_crtc*) ;
 struct radeon_framebuffer* FUNC_24 (struct drm_framebuffer*) ;
 scalar_t__ FUNC_25 (int) ;

__attribute__((used)) static int FUNC_26(struct drm_crtc *VAR_7,
     struct drm_framebuffer *VAR_8,
     struct drm_pending_vblank_event *VAR_9)
{
 struct drm_device *VAR_10 = VAR_7->dev;
 struct radeon_device *VAR_11 = VAR_10->dev_private;
 struct radeon_crtc *VAR_12 = FUNC_23(VAR_7);
 struct radeon_framebuffer *VAR_13;
 struct radeon_framebuffer *VAR_14;
 struct drm_gem_object *VAR_15;
 struct radeon_bo *VAR_16;
 struct radeon_unpin_work *VAR_17;
 unsigned long VAR_18;
 u32 VAR_19, VAR_20;
 u64 VAR_21;
 int VAR_22;

 VAR_17 = FUNC_10(sizeof *VAR_17, VAR_3);
 if (VAR_17 == ((void*)0))
  return -VAR_2;

 VAR_17->event = VAR_9;
 VAR_17->rdev = VAR_11;
 VAR_17->crtc_id = VAR_12->crtc_id;
 VAR_13 = FUNC_24(VAR_7->fb);
 VAR_14 = FUNC_24(VAR_8);

 VAR_15 = VAR_13->obj;

 FUNC_5(VAR_15);
 VAR_16 = FUNC_8(VAR_15);
 VAR_17->old_rbo = VAR_16;
 VAR_15 = VAR_14->obj;
 VAR_16 = FUNC_8(VAR_15);

 FUNC_19(&VAR_16->tbo.bdev->fence_lock);
 if (VAR_16->tbo.sync_obj)
  VAR_17->fence = FUNC_16(VAR_16->tbo.sync_obj);
 FUNC_21(&VAR_16->tbo.bdev->fence_lock);

 FUNC_4(&VAR_17->work, VAR_6);


 FUNC_20(&VAR_10->event_lock, VAR_18);
 if (VAR_12->unpin_work) {
  FUNC_2("flip queue: crtc already busy\n");
  VAR_22 = -VAR_0;
  goto unlock_free;
 }
 VAR_12->unpin_work = VAR_17;
 VAR_12->deferred_flip_completion = 0;
 FUNC_22(&VAR_10->event_lock, VAR_18);


 FUNC_2("flip-ioctl() cur_fbo = %p, cur_bbo = %p\n",
    VAR_17->old_rbo, VAR_16);

 VAR_22 = FUNC_13(VAR_16, 0);
 if (FUNC_25(VAR_22 != 0)) {
  FUNC_3("failed to reserve new rbo buffer before flip\n");
  goto pflip_cleanup;
 }

 VAR_22 = FUNC_12(VAR_16, VAR_4,
         FUNC_0(VAR_11) ? 0 : 1 << 27, &VAR_21);
 if (FUNC_25(VAR_22 != 0)) {
  FUNC_15(VAR_16);
  VAR_22 = -VAR_1;
  FUNC_3("failed to pin new rbo buffer before flip\n");
  goto pflip_cleanup;
 }
 FUNC_11(VAR_16, &VAR_19, ((void*)0));
 FUNC_15(VAR_16);

 if (!FUNC_0(VAR_11)) {

  VAR_21 -= VAR_12->legacy_display_base_addr;
  VAR_20 = VAR_8->pitches[0] / (VAR_8->bits_per_pixel / 8);

  if (VAR_19 & VAR_5) {
   if (FUNC_1(VAR_11)) {
    VAR_21 &= ~0x7ff;
   } else {
    int VAR_23 = VAR_8->bits_per_pixel >> 4;
    int VAR_24 = (((VAR_7->y >> 3) * VAR_20 + VAR_7->x) >> (8 - VAR_23)) << 11;
    VAR_21 += VAR_24 + ((VAR_7->x << VAR_23) % 256) + ((VAR_7->y % 8) << 8);
   }
  } else {
   int VAR_25 = VAR_7->y * VAR_20 + VAR_7->x;
   switch (VAR_8->bits_per_pixel) {
   case 8:
   default:
    VAR_25 *= 1;
    break;
   case 15:
   case 16:
    VAR_25 *= 2;
    break;
   case 24:
    VAR_25 *= 3;
    break;
   case 32:
    VAR_25 *= 4;
    break;
   }
   VAR_21 += VAR_25;
  }
  VAR_21 &= ~7;
 }

 FUNC_20(&VAR_10->event_lock, VAR_18);
 VAR_17->new_crtc_base = VAR_21;
 FUNC_22(&VAR_10->event_lock, VAR_18);


 VAR_7->fb = VAR_8;

 VAR_22 = FUNC_7(VAR_10, VAR_12->crtc_id);
 if (VAR_22) {
  FUNC_3("failed to get vblank before flip\n");
  goto pflip_cleanup1;
 }


 FUNC_18(VAR_11, VAR_12->crtc_id);

 return 0;

pflip_cleanup1:
 if (FUNC_25(FUNC_13(VAR_16, 0) != 0)) {
  FUNC_3("failed to reserve new rbo in error path\n");
  goto pflip_cleanup;
 }
 if (FUNC_25(FUNC_14(VAR_16) != 0)) {
  FUNC_3("failed to unpin new rbo in error path\n");
 }
 FUNC_15(VAR_16);

pflip_cleanup:
 FUNC_20(&VAR_10->event_lock, VAR_18);
 VAR_12->unpin_work = ((void*)0);
unlock_free:
 FUNC_22(&VAR_10->event_lock, VAR_18);
 FUNC_6(VAR_13->obj);
 FUNC_17(&VAR_17->fence);
 FUNC_9(VAR_17);

 return VAR_22;
}
