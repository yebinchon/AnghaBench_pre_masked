
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vino_channel_settings {int capture_lock; int fb_queue; scalar_t__ capturing; } ;
struct TYPE_2__ {int vino_lock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vino_channel_settings*) ;
 int FUNC_4 (struct vino_channel_settings*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_5 (int *,unsigned int*) ;
 scalar_t__ FUNC_6 (int *,unsigned int*) ;
 int FUNC_7 (int *,unsigned int*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct vino_channel_settings *VAR_1)
{
 unsigned int VAR_2 = 0, VAR_3 = 0, VAR_4;
 unsigned long VAR_5, VAR_6;

 FUNC_0("vino_capture_stop():\n");

 FUNC_1(&VAR_1->capture_lock, VAR_5);


 VAR_1->capturing = 0;

 FUNC_1(&VAR_0->vino_lock, VAR_6);

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_2(&VAR_0->vino_lock, VAR_6);


 if (FUNC_5(&VAR_1->fb_queue, &VAR_2)) {
  FUNC_0("vino_capture_stop(): "
   "vino_queue_get_incoming() failed\n");
  goto out;
 }
 while (VAR_2 > 0) {
  FUNC_8(&VAR_1->fb_queue);

  if (FUNC_5(&VAR_1->fb_queue, &VAR_2)) {
   FUNC_0("vino_capture_stop(): "
    "vino_queue_get_incoming() failed\n");
   goto out;
  }
 }

 if (FUNC_6(&VAR_1->fb_queue, &VAR_3)) {
  FUNC_0("vino_capture_stop(): "
   "vino_queue_get_outgoing() failed\n");
  goto out;
 }
 while (VAR_3 > 0) {
  FUNC_7(&VAR_1->fb_queue, &VAR_4);

  if (FUNC_6(&VAR_1->fb_queue, &VAR_3)) {
   FUNC_0("vino_capture_stop(): "
    "vino_queue_get_outgoing() failed\n");
   goto out;
  }
 }

out:
 FUNC_2(&VAR_1->capture_lock, VAR_5);
}
