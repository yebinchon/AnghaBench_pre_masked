
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_framebuffer {int dummy; } ;
struct vino_channel_settings {scalar_t__ streaming; scalar_t__ reading; } ;
struct v4l2_buffer {scalar_t__ memory; int index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 struct vino_channel_settings* FUNC_1 (struct file*) ;
 struct vino_framebuffer* FUNC_2 (struct vino_channel_settings*,int ) ;
 int FUNC_3 (struct vino_channel_settings*,int) ;
 int FUNC_4 (struct vino_channel_settings*,struct vino_framebuffer*,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_3, void *VAR_4,
     struct v4l2_buffer *VAR_5)
{
 struct vino_channel_settings *VAR_6 = FUNC_1(VAR_3);
 struct vino_framebuffer *VAR_7;
 int VAR_8;

 if (VAR_6->reading)
  return -VAR_0;


 if (VAR_5->memory != VAR_2) {
  FUNC_0("type not mmap\n");
  return -VAR_1;
 }

 VAR_7 = FUNC_2(VAR_6, VAR_5->index);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 FUNC_4(VAR_6, VAR_7, VAR_5);

 if (VAR_6->streaming) {
  VAR_8 = FUNC_3(VAR_6, 1);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
