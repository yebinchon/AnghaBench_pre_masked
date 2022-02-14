
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_control {int id; int value; } ;
struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct TYPE_2__ {int sharpness; int hue; int saturation; int contrast; int brightness; } ;
struct hdpvr_device {TYPE_1__ options; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int VAR_0 ;






__attribute__((used)) static int FUNC_0(struct file *VAR_1, void *VAR_2,
    struct v4l2_control *VAR_3)
{
 struct hdpvr_fh *VAR_4 = VAR_1->private_data;
 struct hdpvr_device *VAR_5 = VAR_4->dev;

 switch (VAR_3->id) {
 case 132:
  VAR_3->value = VAR_5->options.brightness;
  break;
 case 131:
  VAR_3->value = VAR_5->options.contrast;
  break;
 case 129:
  VAR_3->value = VAR_5->options.saturation;
  break;
 case 130:
  VAR_3->value = VAR_5->options.hue;
  break;
 case 128:
  VAR_3->value = VAR_5->options.sharpness;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
