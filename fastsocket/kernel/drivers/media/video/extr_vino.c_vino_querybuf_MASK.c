
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer {int dummy; } ;
struct vino_channel_settings {int fb_queue; scalar_t__ reading; } ;
struct v4l2_buffer {scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 struct vino_channel_settings* FUNC_1 (struct file*) ;
 struct vino_framebuffer* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct vino_channel_settings*,struct vino_framebuffer*,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
         struct v4l2_buffer *VAR_4)
{
 struct vino_channel_settings *VAR_5 = FUNC_1(VAR_2);
 struct vino_framebuffer *VAR_6;

 if (VAR_5->reading)
  return -VAR_0;


 if (VAR_4->index >= FUNC_3(&VAR_5->fb_queue)) {
  FUNC_0("invalid index = %d\n",
         VAR_4->index);
  return -VAR_1;
 }

 VAR_6 = FUNC_2(&VAR_5->fb_queue,
       VAR_4->index);
 if (VAR_6 == ((void*)0)) {
  FUNC_0("vino_queue_get_buffer() failed");
  return -VAR_1;
 }

 FUNC_4(VAR_5, VAR_6, VAR_4);

 return 0;
}
