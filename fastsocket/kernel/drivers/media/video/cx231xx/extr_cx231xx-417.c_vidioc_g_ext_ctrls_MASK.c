
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int mpeg_params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,struct v4l2_ext_controls*,int ) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
    struct v4l2_ext_controls *VAR_5)
{
 struct cx231xx_fh *VAR_6 = VAR_4;
 struct cx231xx *VAR_7 = VAR_6->dev;
 FUNC_1(3, "enter vidioc_g_ext_ctrls()\n");
 if (VAR_5->ctrl_class != VAR_1)
  return -VAR_0;
 FUNC_1(3, "exit vidioc_g_ext_ctrls()\n");
 return FUNC_0(&VAR_7->mpeg_params, 0, VAR_5, VAR_2);
}
