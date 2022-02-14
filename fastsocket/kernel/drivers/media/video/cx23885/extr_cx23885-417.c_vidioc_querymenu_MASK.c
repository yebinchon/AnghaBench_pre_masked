
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int dummy; } ;
struct file {int dummy; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;


 int FUNC_0 (struct cx23885_dev*,struct v4l2_querymenu*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
    struct v4l2_querymenu *VAR_2)
{
 struct cx23885_fh *VAR_3 = VAR_1;
 struct cx23885_dev *VAR_4 = VAR_3->dev;

 return FUNC_0(VAR_4, VAR_2);
}
