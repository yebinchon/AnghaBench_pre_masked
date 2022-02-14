
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int dummy; } ;
struct file {struct cx23885_fh* private_data; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {scalar_t__ tuner_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx23885_dev*,int ,int ,struct v4l2_tuner*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_tuner *VAR_6)
{
 struct cx23885_fh *VAR_7 = VAR_4->private_data;
 struct cx23885_dev *VAR_8 = VAR_7->dev;

 if (VAR_1 == VAR_8->tuner_type)
  return -VAR_0;


 FUNC_0(VAR_8, VAR_3, VAR_2, VAR_6);

 return 0;
}
