
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_channel_settings {scalar_t__ streaming; scalar_t__ reading; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 struct vino_channel_settings* FUNC_0 (struct file*) ;
 int FUNC_1 (struct vino_channel_settings*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
  enum v4l2_buf_type VAR_3)
{
 struct vino_channel_settings *VAR_4 = FUNC_0(VAR_1);
 if (VAR_4->reading)
  return -VAR_0;

 if (!VAR_4->streaming)
  return 0;

 VAR_4->streaming = 0;
 FUNC_1(VAR_4);

 return 0;
}
