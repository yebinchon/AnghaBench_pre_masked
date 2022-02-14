
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_channel_settings {int fb_queue; scalar_t__ streaming; scalar_t__ reading; } ;
struct v4l2_requestbuffers {scalar_t__ memory; int count; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 struct vino_channel_settings* FUNC_1 (struct file*) ;
 int FUNC_2 (struct vino_channel_settings*) ;
 scalar_t__ FUNC_3 (struct vino_channel_settings*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3, void *VAR_4,
        struct v4l2_requestbuffers *VAR_5)
{
 struct vino_channel_settings *VAR_6 = FUNC_1(VAR_3);

 if (VAR_6->reading)
  return -VAR_0;


 if (VAR_5->memory != VAR_2) {
  FUNC_0("type not mmap\n");
  return -VAR_1;
 }

 FUNC_0("count = %d\n", VAR_5->count);
 if (VAR_5->count > 0) {
  if (FUNC_3(VAR_6)) {
   FUNC_0("busy, capturing\n");
   return -VAR_0;
  }

  if (FUNC_5(&VAR_6->fb_queue)) {
   FUNC_0("busy, buffers still mapped\n");
   return -VAR_0;
  } else {
   VAR_6->streaming = 0;
   FUNC_4(&VAR_6->fb_queue);
   FUNC_6(&VAR_6->fb_queue, &VAR_5->count);
  }
 } else {
  VAR_6->streaming = 0;
  FUNC_2(VAR_6);
  FUNC_4(&VAR_6->fb_queue);
 }

 return 0;
}
