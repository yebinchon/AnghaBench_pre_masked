
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_channel_settings {int streaming; int fb_queue; scalar_t__ reading; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct vino_channel_settings* FUNC_1 (struct file*) ;
 int FUNC_2 (struct vino_channel_settings*,int) ;
 int FUNC_3 (int *,unsigned int*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
  enum v4l2_buf_type VAR_4)
{
 struct vino_channel_settings *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6;
 int VAR_7;
 if (VAR_5->reading)
  return -VAR_0;

 if (VAR_5->streaming)
  return 0;



 if (FUNC_4(&VAR_5->fb_queue) < 1) {
  FUNC_0("no buffers allocated\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_3(&VAR_5->fb_queue, &VAR_6);
 if (VAR_7) {
  FUNC_0("vino_queue_get_incoming() failed\n");
  return -VAR_1;
 }

 VAR_5->streaming = 1;

 if (VAR_6 > 0) {
  VAR_7 = FUNC_2(VAR_5, 1);
  if (VAR_7) {
   VAR_5->streaming = 0;

   FUNC_0("couldn't start capture\n");
   return -VAR_1;
  }
 }

 return 0;
}
