
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct timeval {int tv_usec; int tv_sec; } ;
struct radeon_unpin_work {int work; int crtc_id; int rdev; scalar_t__ fence; struct drm_pending_vblank_event* event; int new_crtc_base; } ;
struct TYPE_12__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {TYPE_7__* ddev; TYPE_3__ mode_info; } ;
struct TYPE_10__ {int crtc_vdisplay; } ;
struct TYPE_11__ {TYPE_1__ hwmode; } ;
struct radeon_crtc {int deferred_flip_completion; int crtc_id; struct radeon_unpin_work* unpin_work; TYPE_2__ base; } ;
struct TYPE_15__ {TYPE_5__* file_priv; int link; } ;
struct TYPE_13__ {int tv_usec; int tv_sec; int sequence; } ;
struct drm_pending_vblank_event {TYPE_6__ base; TYPE_4__ event; } ;
struct TYPE_16__ {int event_lock; } ;
struct TYPE_14__ {int event_wait; int event_list; } ;


 int FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_7__*,int,struct timeval*) ;
 int FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (TYPE_7__*,int,int*,int*) ;
 scalar_t__ FUNC_7 (struct radeon_device*,int,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *) ;

void FUNC_13(struct radeon_device *VAR_1, int VAR_2)
{
 struct radeon_crtc *VAR_3 = VAR_1->mode_info.crtcs[VAR_2];
 struct radeon_unpin_work *VAR_4;
 struct drm_pending_vblank_event *VAR_5;
 struct timeval VAR_6;
 unsigned long VAR_7;
 u32 VAR_8;
 int VAR_9, VAR_10;

 FUNC_10(&VAR_1->ddev->event_lock, VAR_7);
 VAR_4 = VAR_3->unpin_work;
 if (VAR_4 == ((void*)0) ||
     (VAR_4->fence && !FUNC_4(VAR_4->fence))) {
  FUNC_11(&VAR_1->ddev->event_lock, VAR_7);
  return;
 }

 if (!VAR_3->deferred_flip_completion) {

  VAR_8 = FUNC_7(VAR_1, VAR_2, VAR_4->new_crtc_base);
 } else {




  VAR_8 = 0;
  VAR_3->deferred_flip_completion = 0;
 }




 if (VAR_8 &&
     (VAR_0 & FUNC_6(VAR_1->ddev, VAR_2,
              &VAR_9, &VAR_10)) &&
     ((VAR_9 >= (99 * VAR_1->mode_info.crtcs[VAR_2]->base.hwmode.crtc_vdisplay)/100) ||
      (VAR_9 < 0 && !FUNC_0(VAR_1)))) {






  VAR_8 = 0;
 }
 if (VAR_8) {





  VAR_3->deferred_flip_completion = 1;
  FUNC_11(&VAR_1->ddev->event_lock, VAR_7);
  return;
 }


 VAR_3->unpin_work = ((void*)0);


 if (VAR_4->event) {
  VAR_5 = VAR_4->event;
  VAR_5->event.sequence = FUNC_1(VAR_1->ddev, VAR_2, &VAR_6);
  VAR_5->event.tv_sec = VAR_6.tv_sec;
  VAR_5->event.tv_usec = VAR_6.tv_usec;
  FUNC_3(&VAR_5->base.link, &VAR_5->base.file_priv->event_list);
  FUNC_12(&VAR_5->base.file_priv->event_wait);
 }
 FUNC_11(&VAR_1->ddev->event_lock, VAR_7);

 FUNC_2(VAR_1->ddev, VAR_3->crtc_id);
 FUNC_5(&VAR_4->fence);
 FUNC_8(VAR_4->rdev, VAR_4->crtc_id);
 FUNC_9(&VAR_4->work);
}
