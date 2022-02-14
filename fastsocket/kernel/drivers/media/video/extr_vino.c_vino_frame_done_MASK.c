
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vino_framebuffer {scalar_t__ state; int state_lock; int timestamp; int frame_counter; } ;
struct TYPE_4__ {int frame_wait_queue; } ;
struct TYPE_3__ {int timestamp; int frame_counter; } ;
struct vino_channel_settings {TYPE_2__ fb_queue; TYPE_1__ int_data; int capture_lock; } ;
struct timeval {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct vino_channel_settings*,int ) ;
 struct vino_framebuffer* FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct vino_channel_settings *VAR_2)
{
 struct vino_framebuffer *VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->capture_lock, VAR_4);
 VAR_3 = FUNC_5(&VAR_2->fb_queue);
 if (!VAR_3) {
  FUNC_3(&VAR_2->capture_lock, VAR_4);
  FUNC_0("vino_frame_done(): vino_queue_transfer() failed!\n");
  return;
 }
 FUNC_3(&VAR_2->capture_lock, VAR_4);

 VAR_3->frame_counter = VAR_2->int_data.frame_counter;
 FUNC_1(&VAR_3->timestamp, &VAR_2->int_data.timestamp,
        sizeof(struct timeval));

 FUNC_2(&VAR_3->state_lock, VAR_4);
 if (VAR_3->state == VAR_0)
  VAR_3->state = VAR_1;
 FUNC_3(&VAR_3->state_lock, VAR_4);

 FUNC_6(&VAR_2->fb_queue.frame_wait_queue);

 FUNC_4(VAR_2, 0);
}
