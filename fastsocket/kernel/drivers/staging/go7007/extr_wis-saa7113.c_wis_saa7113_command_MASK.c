
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct wis_saa7113 {int norm; int brightness; int contrast; int saturation; int hue; } ;
struct v4l2_queryctrl {int minimum; int maximum; int step; int default_value; int flags; int name; void* type; int id; } ;
struct v4l2_control {int value; int id; } ;
struct i2c_client {int dummy; } ;






 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 struct wis_saa7113* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
    unsigned int VAR_5, void *VAR_6)
{
 struct wis_saa7113 *VAR_7 = FUNC_0(VAR_4);

 switch (VAR_5) {
 case 129:
 {
  int *VAR_8 = VAR_6;

  FUNC_1(VAR_4, 0x02, 0xC0 | *VAR_8);
  FUNC_1(VAR_4, 0x09,
    *VAR_8 < 6 ? 0x40 : 0x80);
  break;
 }
 case 128:
 {
  v4l2_std_id *VAR_9 = VAR_6;
  VAR_7->norm = *VAR_9;
  if (VAR_7->norm & VAR_1) {
   FUNC_3(VAR_4, 0x0e, 0x01);
   FUNC_3(VAR_4, 0x10, 0x40);
  } else if (VAR_7->norm & VAR_2) {
   FUNC_3(VAR_4, 0x0e, 0x01);
   FUNC_3(VAR_4, 0x10, 0x48);
  } else if (VAR_7->norm * VAR_3) {
   FUNC_3(VAR_4, 0x0e, 0x50);
   FUNC_3(VAR_4, 0x10, 0x48);
  }
  break;
 }
 case 131:
 {
  struct v4l2_queryctrl *VAR_10 = VAR_6;

  switch (VAR_10->id) {
  case 136:
   VAR_10->type = VAR_0;
   FUNC_2(VAR_10->name, "Brightness", sizeof(VAR_10->name));
   VAR_10->minimum = 0;
   VAR_10->maximum = 255;
   VAR_10->step = 1;
   VAR_10->default_value = 128;
   VAR_10->flags = 0;
   break;
  case 135:
   VAR_10->type = VAR_0;
   FUNC_2(VAR_10->name, "Contrast", sizeof(VAR_10->name));
   VAR_10->minimum = 0;
   VAR_10->maximum = 127;
   VAR_10->step = 1;
   VAR_10->default_value = 71;
   VAR_10->flags = 0;
   break;
  case 133:
   VAR_10->type = VAR_0;
   FUNC_2(VAR_10->name, "Saturation", sizeof(VAR_10->name));
   VAR_10->minimum = 0;
   VAR_10->maximum = 127;
   VAR_10->step = 1;
   VAR_10->default_value = 64;
   VAR_10->flags = 0;
   break;
  case 134:
   VAR_10->type = VAR_0;
   FUNC_2(VAR_10->name, "Hue", sizeof(VAR_10->name));
   VAR_10->minimum = -128;
   VAR_10->maximum = 127;
   VAR_10->step = 1;
   VAR_10->default_value = 0;
   VAR_10->flags = 0;
   break;
  }
  break;
 }
 case 130:
 {
  struct v4l2_control *VAR_11 = VAR_6;

  switch (VAR_11->id) {
  case 136:
   if (VAR_11->value > 255)
    VAR_7->brightness = 255;
   else if (VAR_11->value < 0)
    VAR_7->brightness = 0;
   else
    VAR_7->brightness = VAR_11->value;
   FUNC_3(VAR_4, 0x0a, VAR_7->brightness);
   break;
  case 135:
   if (VAR_11->value > 127)
    VAR_7->contrast = 127;
   else if (VAR_11->value < 0)
    VAR_7->contrast = 0;
   else
    VAR_7->contrast = VAR_11->value;
   FUNC_3(VAR_4, 0x0b, VAR_7->contrast);
   break;
  case 133:
   if (VAR_11->value > 127)
    VAR_7->saturation = 127;
   else if (VAR_11->value < 0)
    VAR_7->saturation = 0;
   else
    VAR_7->saturation = VAR_11->value;
   FUNC_3(VAR_4, 0x0c, VAR_7->saturation);
   break;
  case 134:
   if (VAR_11->value > 127)
    VAR_7->hue = 127;
   else if (VAR_11->value < -128)
    VAR_7->hue = -128;
   else
    VAR_7->hue = VAR_11->value;
   FUNC_3(VAR_4, 0x0d, VAR_7->hue);
   break;
  }
  break;
 }
 case 132:
 {
  struct v4l2_control *VAR_12 = VAR_6;

  switch (VAR_12->id) {
  case 136:
   VAR_12->value = VAR_7->brightness;
   break;
  case 135:
   VAR_12->value = VAR_7->contrast;
   break;
  case 133:
   VAR_12->value = VAR_7->saturation;
   break;
  case 134:
   VAR_12->value = VAR_7->hue;
   break;
  }
  break;
 }
 default:
  break;
 }
 return 0;
}
