
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_6__ {unsigned long sequence; int tv_usec; int tv_sec; } ;
struct TYPE_5__ {int pid; TYPE_1__* file_priv; int link; } ;
struct drm_pending_vblank_event {TYPE_3__ event; int pipe; TYPE_2__ base; } ;
struct drm_device {int event_lock; } ;
struct TYPE_4__ {int event_wait; int event_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_0,
  struct drm_pending_vblank_event *VAR_1,
  unsigned long VAR_2, struct timeval *VAR_3)
{
 FUNC_0(!FUNC_2(&VAR_0->event_lock));
 VAR_1->event.sequence = VAR_2;
 VAR_1->event.tv_sec = VAR_3->tv_sec;
 VAR_1->event.tv_usec = VAR_3->tv_usec;

 FUNC_1(&VAR_1->base.link,
        &VAR_1->base.file_priv->event_list);
 FUNC_4(&VAR_1->base.file_priv->event_wait);
 FUNC_3(VAR_1->base.pid, VAR_1->pipe,
      VAR_1->event.sequence);
}
