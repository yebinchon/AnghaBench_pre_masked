
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; } ;
struct file {int dummy; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {scalar_t__ tuner_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
    struct v4l2_tuner *VAR_4)
{
 struct cx23885_dev *VAR_5 = ((struct cx23885_fh *)VAR_3)->dev;

 if (VAR_1 == VAR_5->tuner_type)
  return -VAR_0;
 if (0 != VAR_4->index)
  return -VAR_0;
 return 0;
}
