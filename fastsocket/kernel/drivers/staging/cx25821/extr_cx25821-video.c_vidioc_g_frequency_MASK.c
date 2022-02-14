
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; } ;
struct file {int dummy; } ;
struct cx25821_fh {struct cx25821_dev* dev; } ;
struct cx25821_dev {int freq; } ;


 int FUNC_0 (struct cx25821_dev*,int ,int ,struct v4l2_frequency*) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_frequency *VAR_4)
{
 struct cx25821_fh *VAR_5 = VAR_3;
 struct cx25821_dev *VAR_6 = VAR_5->dev;

 VAR_4->frequency = VAR_6->freq;

 FUNC_0(VAR_6, VAR_1, VAR_0, VAR_4);

 return 0;
}
