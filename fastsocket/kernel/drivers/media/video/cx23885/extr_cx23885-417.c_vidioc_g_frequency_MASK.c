
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct file {struct cx23885_fh* private_data; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {scalar_t__ tuner_type; int freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx23885_dev*,int ,int ,struct v4l2_frequency*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
    struct v4l2_frequency *VAR_7)
{
 struct cx23885_fh *VAR_8 = VAR_5->private_data;
 struct cx23885_dev *VAR_9 = VAR_8->dev;

 if (VAR_1 == VAR_9->tuner_type)
  return -VAR_0;
 VAR_7->type = VAR_2;
 VAR_7->frequency = VAR_9->freq;

 FUNC_0(VAR_9, VAR_4, VAR_3, VAR_7);

 return 0;
}
