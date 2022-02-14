
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int dummy; } ;
struct file {struct cx23885_fh* private_data; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;


 int FUNC_0 (struct cx23885_dev*,int ,int ,struct v4l2_control*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
    struct v4l2_control *VAR_4)
{
 struct cx23885_fh *VAR_5 = VAR_2->private_data;
 struct cx23885_dev *VAR_6 = VAR_5->dev;


 FUNC_0(VAR_6, VAR_0, VAR_1, VAR_4);
 return 0;
}
