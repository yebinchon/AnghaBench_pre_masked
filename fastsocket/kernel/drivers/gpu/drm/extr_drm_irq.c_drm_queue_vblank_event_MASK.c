
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int type; unsigned int sequence; int signal; } ;
struct TYPE_10__ {unsigned int sequence; } ;
union drm_wait_vblank {TYPE_5__ request; TYPE_4__ reply; } ;
struct timeval {int dummy; } ;
struct TYPE_9__ {void (* destroy ) (struct drm_pending_event*) ;int link; struct drm_file* file_priv; TYPE_1__* event; int pid; } ;
struct TYPE_7__ {int length; int type; } ;
struct TYPE_8__ {unsigned int sequence; TYPE_1__ base; int user_data; } ;
struct drm_pending_vblank_event {int pipe; TYPE_3__ base; TYPE_2__ event; } ;
struct drm_file {int event_space; } ;
struct drm_device {int event_lock; int vblank_event_list; } ;
struct TYPE_12__ {int pid; } ;


 int FUNC_0 (char*,unsigned int,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* VAR_5 ;
 unsigned int FUNC_1 (struct drm_device*,int,struct timeval*) ;
 int FUNC_2 (struct drm_device*,int) ;
 int FUNC_3 (struct drm_pending_vblank_event*) ;
 struct drm_pending_vblank_event* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct drm_device*,struct drm_pending_vblank_event*,unsigned int,struct timeval*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_6, int VAR_7,
      union drm_wait_vblank *VAR_8,
      struct drm_file *VAR_9)
{
 struct drm_pending_vblank_event *VAR_10;
 struct timeval VAR_11;
 unsigned long VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_10 = FUNC_4(sizeof *VAR_10, VAR_3);
 if (VAR_10 == ((void*)0)) {
  VAR_14 = -VAR_2;
  goto err_put;
 }

 VAR_10->pipe = VAR_7;
 VAR_10->base.pid = VAR_5->pid;
 VAR_10->event.base.type = VAR_0;
 VAR_10->event.base.length = sizeof VAR_10->event;
 VAR_10->event.user_data = VAR_8->request.signal;
 VAR_10->base.event = &VAR_10->event.base;
 VAR_10->base.file_priv = VAR_9;
 VAR_10->base.destroy = (void (*) (struct drm_pending_event *)) FUNC_3;

 FUNC_7(&VAR_6->event_lock, VAR_12);

 if (VAR_9->event_space < sizeof VAR_10->event) {
  VAR_14 = -VAR_1;
  goto err_unlock;
 }

 VAR_9->event_space -= sizeof VAR_10->event;
 VAR_13 = FUNC_1(VAR_6, VAR_7, &VAR_11);

 if ((VAR_8->request.type & VAR_4) &&
     (VAR_13 - VAR_8->request.sequence) <= (1 << 23)) {
  VAR_8->request.sequence = VAR_13 + 1;
  VAR_8->reply.sequence = VAR_8->request.sequence;
 }

 FUNC_0("event on vblank count %d, current %d, crtc %d\n",
    VAR_8->request.sequence, VAR_13, VAR_7);

 FUNC_9(VAR_5->pid, VAR_7,
          VAR_8->request.sequence);

 VAR_10->event.sequence = VAR_8->request.sequence;
 if ((VAR_13 - VAR_8->request.sequence) <= (1 << 23)) {
  FUNC_2(VAR_6, VAR_7);
  FUNC_6(VAR_6, VAR_10, VAR_13, &VAR_11);
  VAR_8->reply.sequence = VAR_13;
 } else {

  FUNC_5(&VAR_10->base.link, &VAR_6->vblank_event_list);
  VAR_8->reply.sequence = VAR_8->request.sequence;
 }

 FUNC_8(&VAR_6->event_lock, VAR_12);

 return 0;

err_unlock:
 FUNC_8(&VAR_6->event_lock, VAR_12);
 FUNC_3(VAR_10);
err_put:
 FUNC_2(VAR_6, VAR_7);
 return VAR_14;
}
