
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct file {int dummy; } ;
struct cx23885_fh {scalar_t__ radio; struct cx23885_dev* dev; } ;
struct cx23885_dev {scalar_t__ tuner_type; int freq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx23885_dev*,int ,int ,struct v4l2_frequency*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
    struct v4l2_frequency *VAR_8)
{
 struct cx23885_fh *VAR_9 = VAR_7;
 struct cx23885_dev *VAR_10 = VAR_9->dev;

 if (FUNC_1(VAR_1 == VAR_10->tuner_type))
  return -VAR_0;


 VAR_8->type = VAR_9->radio ? VAR_3 : VAR_2;
 VAR_8->frequency = VAR_10->freq;

 FUNC_0(VAR_10, VAR_5, VAR_4, VAR_8);

 return 0;
}
