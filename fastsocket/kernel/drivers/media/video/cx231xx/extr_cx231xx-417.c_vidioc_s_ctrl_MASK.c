
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int dummy; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int dummy; } ;


 int FUNC_0 (struct cx231xx*,int ,int ,struct v4l2_control*) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_control *VAR_4)
{
 struct cx231xx_fh *VAR_5 = VAR_2->private_data;
 struct cx231xx *VAR_6 = VAR_5->dev;
 FUNC_1(3, "enter vidioc_s_ctrl()\n");

 FUNC_0(VAR_6, VAR_0, VAR_1, VAR_4);
 FUNC_1(3, "exit vidioc_s_ctrl()\n");
 return 0;
}
