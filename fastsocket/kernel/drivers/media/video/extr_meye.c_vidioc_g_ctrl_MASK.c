
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
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_control *VAR_4)
{
 FUNC_0(&VAR_1.lock);
 switch (VAR_4->id) {
 case 136:
  VAR_4->value = VAR_1.picture.brightness >> 10;
  break;
 case 133:
  VAR_4->value = VAR_1.picture.hue >> 10;
  break;
 case 135:
  VAR_4->value = VAR_1.picture.contrast >> 10;
  break;
 case 129:
  VAR_4->value = VAR_1.picture.colour >> 10;
  break;
 case 137:
  VAR_4->value = VAR_1.params.agc;
  break;
 case 128:
 case 131:
  VAR_4->value = VAR_1.params.sharpness;
  break;
 case 130:
  VAR_4->value = VAR_1.params.picture;
  break;
 case 132:
  VAR_4->value = VAR_1.params.quality;
  break;
 case 134:
  VAR_4->value = VAR_1.params.framerate;
  break;
 default:
  FUNC_1(&VAR_1.lock);
  return -VAR_0;
 }
 FUNC_1(&VAR_1.lock);

 return 0;
}
