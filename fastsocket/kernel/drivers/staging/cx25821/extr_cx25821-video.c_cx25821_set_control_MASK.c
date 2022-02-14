
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int type; int maximum; int minimum; } ;
struct v4l2_control {int id; int value; } ;
struct cx25821_dev {int ctl_saturation; int ctl_contrast; int ctl_hue; int ctl_bright; } ;


 int VAR_0 ;







 struct v4l2_queryctrl* FUNC_0 (int) ;
 int FUNC_1 (struct cx25821_dev*,int ,int) ;
 int FUNC_2 (struct cx25821_dev*,int ,int) ;
 int FUNC_3 (struct cx25821_dev*,int ,int) ;
 int FUNC_4 (struct cx25821_dev*,int ,int) ;

int FUNC_5(struct cx25821_dev *VAR_1,
   struct v4l2_control *VAR_2, int VAR_3)
{
 int VAR_4;
 const struct v4l2_queryctrl *VAR_5;

 VAR_4 = -VAR_0;

 VAR_5 = FUNC_0(VAR_2->id);

 if (((void*)0) == VAR_5)
  return VAR_4;

 switch (VAR_5->type) {
 case 130:
 case 128:
 case 129:
  if (VAR_2->value < VAR_5->minimum)
   VAR_2->value = VAR_5->minimum;
  if (VAR_2->value > VAR_5->maximum)
   VAR_2->value = VAR_5->maximum;
  break;
 default:
                ;
 };

 switch (VAR_2->id) {
 case 134:
  VAR_1->ctl_bright = VAR_2->value;
  FUNC_1(VAR_1, VAR_2->value, VAR_3);
  break;
 case 132:
  VAR_1->ctl_hue = VAR_2->value;
  FUNC_3(VAR_1, VAR_2->value, VAR_3);
  break;
 case 133:
  VAR_1->ctl_contrast = VAR_2->value;
  FUNC_2(VAR_1, VAR_2->value, VAR_3);
  break;
 case 131:
  VAR_1->ctl_saturation = VAR_2->value;
  FUNC_4(VAR_1, VAR_2->value, VAR_3);
  break;
 }

 VAR_4 = 0;

 return VAR_4;
}
