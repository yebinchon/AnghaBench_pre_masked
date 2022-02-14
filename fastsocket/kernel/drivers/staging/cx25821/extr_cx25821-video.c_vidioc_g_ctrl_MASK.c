
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct cx25821_fh {struct cx25821_dev* dev; } ;
struct cx25821_dev {int ctl_saturation; int ctl_contrast; int ctl_hue; int ctl_bright; } ;


 int VAR_0 ;




 struct v4l2_queryctrl* FUNC_0 (int) ;

int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_control *VAR_3)
{
 struct cx25821_dev *VAR_4 = ((struct cx25821_fh *)VAR_2)->dev;

 const struct v4l2_queryctrl *VAR_5;

 VAR_5 = FUNC_0(VAR_3->id);

 if (((void*)0) == VAR_5)
  return -VAR_0;
 switch (VAR_3->id) {
 case 131:
  VAR_3->value = VAR_4->ctl_bright;
  break;
 case 129:
  VAR_3->value = VAR_4->ctl_hue;
  break;
 case 130:
  VAR_3->value = VAR_4->ctl_contrast;
  break;
 case 128:
  VAR_3->value = VAR_4->ctl_saturation;
  break;
 }
 return 0;
}
