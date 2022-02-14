
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_control {int id; int value; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int agc; int sharpness; int picture; int quality; int framerate; } ;
struct TYPE_4__ {int brightness; int hue; int contrast; int colour; } ;
struct TYPE_6__ {int lock; TYPE_2__ params; TYPE_1__ picture; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_9, void *VAR_10, struct v4l2_control *VAR_11)
{
 FUNC_0(&VAR_8.lock);
 switch (VAR_11->id) {
 case 136:
  FUNC_2(
   VAR_2, VAR_11->value);
  VAR_8.picture.brightness = VAR_11->value << 10;
  break;
 case 133:
  FUNC_2(
   VAR_5, VAR_11->value);
  VAR_8.picture.hue = VAR_11->value << 10;
  break;
 case 135:
  FUNC_2(
   VAR_4, VAR_11->value);
  VAR_8.picture.contrast = VAR_11->value << 10;
  break;
 case 129:
  FUNC_2(
   VAR_3, VAR_11->value);
  VAR_8.picture.colour = VAR_11->value << 10;
  break;
 case 137:
  FUNC_2(
   VAR_1, VAR_11->value);
  VAR_8.params.agc = VAR_11->value;
  break;
 case 128:
 case 131:
  FUNC_2(
   VAR_7, VAR_11->value);
  VAR_8.params.sharpness = VAR_11->value;
  break;
 case 130:
  FUNC_2(
   VAR_6, VAR_11->value);
  VAR_8.params.picture = VAR_11->value;
  break;
 case 132:
  VAR_8.params.quality = VAR_11->value;
  break;
 case 134:
  VAR_8.params.framerate = VAR_11->value;
  break;
 default:
  FUNC_1(&VAR_8.lock);
  return -VAR_0;
 }
 FUNC_1(&VAR_8.lock);

 return 0;
}
