
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct saa7134_fh {int dummy; } ;
struct saa7134_dev {int ctl_automute; int ctl_y_odd; int ctl_y_even; int ctl_mirror; int ctl_invert; int ctl_volume; int ctl_mute; int ctl_saturation; int ctl_contrast; int ctl_hue; int ctl_bright; } ;


 int VAR_0 ;
 struct v4l2_queryctrl* FUNC_0 (int) ;

int FUNC_1(struct saa7134_dev *VAR_1, struct saa7134_fh *VAR_2, struct v4l2_control *VAR_3)
{
 const struct v4l2_queryctrl* VAR_4;

 VAR_4 = FUNC_0(VAR_3->id);
 if (((void*)0) == VAR_4)
  return -VAR_0;
 switch (VAR_3->id) {
 case 136:
  VAR_3->value = VAR_1->ctl_bright;
  break;
 case 133:
  VAR_3->value = VAR_1->ctl_hue;
  break;
 case 135:
  VAR_3->value = VAR_1->ctl_contrast;
  break;
 case 128:
  VAR_3->value = VAR_1->ctl_saturation;
  break;
 case 138:
  VAR_3->value = VAR_1->ctl_mute;
  break;
 case 137:
  VAR_3->value = VAR_1->ctl_volume;
  break;
 case 131:
  VAR_3->value = VAR_1->ctl_invert;
  break;
 case 134:
  VAR_3->value = VAR_1->ctl_mirror;
  break;
 case 130:
  VAR_3->value = VAR_1->ctl_y_even;
  break;
 case 129:
  VAR_3->value = VAR_1->ctl_y_odd;
  break;
 case 132:
  VAR_3->value = VAR_1->ctl_automute;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
