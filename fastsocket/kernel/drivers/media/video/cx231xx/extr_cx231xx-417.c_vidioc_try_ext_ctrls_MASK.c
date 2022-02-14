
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; } ;
struct file {int dummy; } ;
struct cx2341x_mpeg_params {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {struct cx2341x_mpeg_params mpeg_params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx2341x_mpeg_params*,int ,struct v4l2_ext_controls*,int ) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
    struct v4l2_ext_controls *VAR_5)
{
 struct cx231xx_fh *VAR_6 = VAR_4;
 struct cx231xx *VAR_7 = VAR_6->dev;
 struct cx2341x_mpeg_params VAR_8;
 int VAR_9;
 FUNC_1(3, "enter vidioc_try_ext_ctrls()\n");
 if (VAR_5->ctrl_class != VAR_1)
  return -VAR_0;

 VAR_8 = VAR_7->mpeg_params;
 VAR_9 = FUNC_0(&VAR_8, 0, VAR_5, VAR_2);
 FUNC_1(3, "exit vidioc_try_ext_ctrls() err=%d\n", VAR_9);
 return VAR_9;
}
