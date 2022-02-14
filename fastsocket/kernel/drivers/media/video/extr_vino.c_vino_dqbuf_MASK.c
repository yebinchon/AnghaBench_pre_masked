
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer {int dummy; } ;
struct vino_channel_settings {int fb_queue; scalar_t__ reading; } ;
struct v4l2_buffer {int index; } ;
struct file {unsigned int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (char*,...) ;
 struct vino_channel_settings* FUNC_1 (struct file*) ;
 int FUNC_2 (struct vino_channel_settings*,struct vino_framebuffer*) ;
 int FUNC_3 (int *,unsigned int*) ;
 int FUNC_4 (int *,unsigned int*) ;
 struct vino_framebuffer* FUNC_5 (int *,int *) ;
 int FUNC_6 (struct vino_channel_settings*,struct vino_framebuffer*,struct v4l2_buffer*) ;
 int FUNC_7 (struct vino_channel_settings*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_5, void *VAR_6,
      struct v4l2_buffer *VAR_7)
{
 struct vino_channel_settings *VAR_8 = FUNC_1(VAR_5);
 unsigned int VAR_9 = VAR_5->f_flags & VAR_4;
 struct vino_framebuffer *VAR_10;
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 if (VAR_8->reading)
  return -VAR_1;



 VAR_13 = FUNC_3(&VAR_8->fb_queue, &VAR_11);
 if (VAR_13) {
  FUNC_0("vino_queue_get_incoming() failed\n");
  return -VAR_2;
 }
 VAR_13 = FUNC_4(&VAR_8->fb_queue, &VAR_12);
 if (VAR_13) {
  FUNC_0("vino_queue_get_outgoing() failed\n");
  return -VAR_2;
 }

 FUNC_0("incoming = %d, outgoing = %d\n", VAR_11, VAR_12);

 if (VAR_12 == 0) {
  if (VAR_11 == 0) {
   FUNC_0("no incoming or outgoing buffers\n");
   return -VAR_2;
  }
  if (VAR_9) {
   FUNC_0("non-blocking I/O was selected and "
    "there are no buffers to dequeue\n");
   return -VAR_0;
  }

  VAR_13 = FUNC_7(VAR_8);
  if (VAR_13) {
   VAR_13 = FUNC_7(VAR_8);
   if (VAR_13) {



    return -VAR_3;
   }
  }
 }

 VAR_10 = FUNC_5(&VAR_8->fb_queue, &VAR_7->index);
 if (VAR_10 == ((void*)0)) {
  FUNC_0("vino_queue_remove() failed\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_2(VAR_8, VAR_10);

 FUNC_6(VAR_8, VAR_10, VAR_7);

 if (VAR_13)
  return -VAR_3;

 return 0;
}
