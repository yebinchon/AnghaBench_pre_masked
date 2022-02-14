
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer {int dummy; } ;
struct vino_channel_settings {int capturing; int capture_lock; int fb_queue; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vino_channel_settings*,struct vino_framebuffer*) ;
 int FUNC_4 (int *,unsigned int*) ;
 struct vino_framebuffer* FUNC_5 (int *,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct vino_channel_settings *VAR_1, int VAR_2)
{
 struct vino_framebuffer *VAR_3;
 unsigned int VAR_4, VAR_5;
 int VAR_6 = 0;
 unsigned long VAR_7;

 FUNC_0("vino_capture_next():\n");

 FUNC_1(&VAR_1->capture_lock, VAR_7);

 if (VAR_2) {

  if (VAR_1->capturing) {
   FUNC_2(&VAR_1->capture_lock, VAR_7);
   return 0;
  }

 } else {


  if (!VAR_1->capturing) {
   FUNC_2(&VAR_1->capture_lock, VAR_7);
   return 0;
  }
 }

 VAR_6 = FUNC_4(&VAR_1->fb_queue, &VAR_4);
 if (VAR_6) {
  FUNC_0("vino_capture_next(): vino_queue_get_incoming() "
   "failed\n");
  VAR_6 = -VAR_0;
  goto out;
 }
 if (VAR_4 == 0) {
  FUNC_0("vino_capture_next(): no buffers available\n");
  goto out;
 }

 VAR_3 = FUNC_5(&VAR_1->fb_queue, &VAR_5);
 if (VAR_3 == ((void*)0)) {
  FUNC_0("vino_capture_next(): vino_queue_peek() failed\n");
  VAR_6 = -VAR_0;
  goto out;
 }

 if (VAR_2) {
  VAR_1->capturing = 1;
 }

 FUNC_2(&VAR_1->capture_lock, VAR_7);

 VAR_6 = FUNC_3(VAR_1, VAR_3);

 return VAR_6;

out:
 VAR_1->capturing = 0;
 FUNC_2(&VAR_1->capture_lock, VAR_7);

 return VAR_6;
}
