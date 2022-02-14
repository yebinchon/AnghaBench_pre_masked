
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer {int dummy; } ;
struct vino_channel_settings {int capture_lock; int fb_queue; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct vino_framebuffer* FUNC_3 (int *,unsigned int) ;

__attribute__((used)) static
struct vino_framebuffer *FUNC_4(struct
           vino_channel_settings *VAR_0,
           unsigned int VAR_1)
{
 struct vino_framebuffer *VAR_2;
 unsigned long VAR_3;

 FUNC_0("vino_capture_enqueue():\n");

 FUNC_1(&VAR_0->capture_lock, VAR_3);

 VAR_2 = FUNC_3(&VAR_0->fb_queue, VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_0("vino_capture_enqueue(): vino_queue_add() failed, "
   "queue full?\n");
  goto out;
 }
out:
 FUNC_2(&VAR_0->capture_lock, VAR_3);

 return VAR_2;
}
