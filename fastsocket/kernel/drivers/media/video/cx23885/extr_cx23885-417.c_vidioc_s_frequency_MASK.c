
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct file {struct cx23885_fh* private_data; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx23885_dev {scalar_t__ tuner_type; int freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct cx23885_dev*,int ,int ,struct v4l2_frequency*) ;
 int FUNC_1 (struct cx23885_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct cx23885_dev*) ;
 int FUNC_3 (int,char*,scalar_t__,...) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_4(struct file *VAR_9, void *VAR_10,
    struct v4l2_frequency *VAR_11)
{
 struct cx23885_fh *VAR_12 = VAR_9->private_data;
 struct cx23885_dev *VAR_13 = VAR_12->dev;

 FUNC_1(VAR_12->dev, VAR_0, 3, 0,
  VAR_1, VAR_2,
  VAR_3);

 FUNC_3(1, "VIDIOC_S_FREQUENCY: dev type %d, f\n",
  VAR_13->tuner_type);
 FUNC_3(1, "VIDIOC_S_FREQUENCY: f tuner %d, f type %d\n",
  VAR_11->tuner, VAR_11->type);
 if (VAR_5 == VAR_13->tuner_type)
  return -VAR_4;
 if (VAR_11->tuner != 0)
  return -VAR_4;
 if (VAR_11->type != VAR_6)
  return -VAR_4;
 VAR_13->freq = VAR_11->frequency;

 FUNC_0(VAR_13, VAR_8, VAR_7, VAR_11);

 FUNC_2(VAR_13);

 return 0;
}
