
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_control {int dummy; } ;
struct file {int dummy; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;


 int FUNC_0 (struct cx23885_dev*,struct v4l2_control*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
    struct v4l2_control *VAR_2)
{
 struct cx23885_dev *VAR_3 = ((struct cx23885_fh *)VAR_1)->dev;

 return FUNC_0(VAR_3, VAR_2);
}
