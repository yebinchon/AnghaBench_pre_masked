
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer {int state_lock; int state; } ;
struct vino_channel_settings {int capture_lock; int fb_queue; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vino_channel_settings*,int ) ;
 struct vino_framebuffer* FUNC_4 (int *,unsigned int*) ;

__attribute__((used)) static void FUNC_5(struct vino_channel_settings *VAR_1)
{
 struct vino_framebuffer *VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4;

 FUNC_1(&VAR_1->capture_lock, VAR_3);
 VAR_2 = FUNC_4(&VAR_1->fb_queue, &VAR_4);
 if (!VAR_2) {
  FUNC_2(&VAR_1->capture_lock, VAR_3);
  FUNC_0("vino_skip_frame(): vino_queue_peek() failed!\n");
  return;
 }
 FUNC_2(&VAR_1->capture_lock, VAR_3);

 FUNC_1(&VAR_2->state_lock, VAR_3);
 VAR_2->state = VAR_0;
 FUNC_2(&VAR_2->state_lock, VAR_3);

 FUNC_3(VAR_1, 0);
}
