
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
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int FUNC_0 (struct hdpvr_device*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_6, void *VAR_7,
    struct v4l2_control *VAR_8)
{
 struct hdpvr_fh *VAR_9 = VAR_6->private_data;
 struct hdpvr_device *VAR_10 = VAR_9->dev;
 int VAR_11;

 switch (VAR_8->id) {
 case 132:
  VAR_11 = FUNC_0(VAR_10, VAR_0, VAR_8->value);
  if (!VAR_11)
   VAR_10->options.brightness = VAR_8->value;
  break;
 case 131:
  VAR_11 = FUNC_0(VAR_10, VAR_1, VAR_8->value);
  if (!VAR_11)
   VAR_10->options.contrast = VAR_8->value;
  break;
 case 129:
  VAR_11 = FUNC_0(VAR_10, VAR_3, VAR_8->value);
  if (!VAR_11)
   VAR_10->options.saturation = VAR_8->value;
  break;
 case 130:
  VAR_11 = FUNC_0(VAR_10, VAR_2, VAR_8->value);
  if (!VAR_11)
   VAR_10->options.hue = VAR_8->value;
  break;
 case 128:
  VAR_11 = FUNC_0(VAR_10, VAR_4, VAR_8->value);
  if (!VAR_11)
   VAR_10->options.sharpness = VAR_8->value;
  break;
 default:
  return -VAR_5;
 }

 return VAR_11;
}
