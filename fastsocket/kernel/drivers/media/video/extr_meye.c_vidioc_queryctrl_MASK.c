
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; int maximum; int step; int default_value; int flags; int minimum; int name; void* type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
    struct v4l2_queryctrl *VAR_5)
{
 switch (VAR_5->id) {

 case 136:
  VAR_5->type = VAR_2;
  FUNC_0(VAR_5->name, "Brightness");
  VAR_5->minimum = 0;
  VAR_5->maximum = 63;
  VAR_5->step = 1;
  VAR_5->default_value = 32;
  VAR_5->flags = 0;
  break;
 case 133:
  VAR_5->type = VAR_2;
  FUNC_0(VAR_5->name, "Hue");
  VAR_5->minimum = 0;
  VAR_5->maximum = 63;
  VAR_5->step = 1;
  VAR_5->default_value = 32;
  VAR_5->flags = 0;
  break;
 case 135:
  VAR_5->type = VAR_2;
  FUNC_0(VAR_5->name, "Contrast");
  VAR_5->minimum = 0;
  VAR_5->maximum = 63;
  VAR_5->step = 1;
  VAR_5->default_value = 32;
  VAR_5->flags = 0;
  break;
 case 129:
  VAR_5->type = VAR_2;
  FUNC_0(VAR_5->name, "Saturation");
  VAR_5->minimum = 0;
  VAR_5->maximum = 63;
  VAR_5->step = 1;
  VAR_5->default_value = 32;
  VAR_5->flags = 0;
  break;
 case 137:
  VAR_5->type = VAR_2;
  FUNC_0(VAR_5->name, "Agc");
  VAR_5->minimum = 0;
  VAR_5->maximum = 63;
  VAR_5->step = 1;
  VAR_5->default_value = 48;
  VAR_5->flags = 0;
  break;
 case 131:
 case 128:
  VAR_5->type = VAR_2;
  FUNC_0(VAR_5->name, "Sharpness");
  VAR_5->minimum = 0;
  VAR_5->maximum = 63;
  VAR_5->step = 1;
  VAR_5->default_value = 32;




  VAR_5->flags = (VAR_5->id == 128) ? 0 :
      VAR_1;
  break;
 case 130:
  VAR_5->type = VAR_2;
  FUNC_0(VAR_5->name, "Picture");
  VAR_5->minimum = 0;
  VAR_5->maximum = 63;
  VAR_5->step = 1;
  VAR_5->default_value = 0;
  VAR_5->flags = 0;
  break;
 case 132:
  VAR_5->type = VAR_2;
  FUNC_0(VAR_5->name, "JPEG quality");
  VAR_5->minimum = 0;
  VAR_5->maximum = 10;
  VAR_5->step = 1;
  VAR_5->default_value = 8;
  VAR_5->flags = 0;
  break;
 case 134:
  VAR_5->type = VAR_2;
  FUNC_0(VAR_5->name, "Framerate");
  VAR_5->minimum = 0;
  VAR_5->maximum = 31;
  VAR_5->step = 1;
  VAR_5->default_value = 0;
  VAR_5->flags = 0;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
