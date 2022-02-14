
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
typedef int u8 ;
struct wis_saa7115 {int norm; int brightness; int contrast; int saturation; int hue; } ;
struct video_decoder_resolution {int width; int height; } ;
struct v4l2_queryctrl {int minimum; int maximum; int step; int default_value; int flags; int name; void* type; int id; } ;
struct v4l2_control {int value; int id; } ;
struct i2c_client {int dummy; } ;







 void* VAR_0 ;
 int VAR_1 ;





 struct wis_saa7115* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct i2c_client*,int,int) ;
 int FUNC_4 (struct i2c_client*,int*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_2,
    unsigned int VAR_3, void *VAR_4)
{
 struct wis_saa7115 *VAR_5 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 129:
 {
  int *VAR_6 = VAR_4;

  FUNC_1(VAR_2, 0x02, 0xC0 | *VAR_6);
  FUNC_1(VAR_2, 0x09,
    *VAR_6 < 6 ? 0x40 : 0xC0);
  break;
 }
 case 137:
 {
  struct video_decoder_resolution *VAR_7 = VAR_4;

  int VAR_8 = VAR_7->width < 704 ? 704 / VAR_7->width : 1;

  int VAR_9 = (704 / VAR_8) *
     1024 / VAR_7->width;

  int VAR_10 = (VAR_5->norm & VAR_1 ?
    240 : 288) * 1024 / VAR_7->height;
  u8 VAR_11[] = {
   0x88, 0xc0,
   0x9c, VAR_7->width & 0xff,
   0x9d, VAR_7->width >> 8,
   0x9e, VAR_7->height & 0xff,
   0x9f, VAR_7->height >> 8,
   0xa0, VAR_8,
   0xa1, 1,
   0xa2, 1,
   0xa8, VAR_9 & 0xff,
   0xa9, VAR_9 >> 8,
   0xac, (VAR_9 / 2) & 0xff,
   0xad, (VAR_9 / 2) >> 8,
   0xb0, VAR_10 & 0xff,
   0xb1, VAR_10 >> 8,
   0xb2, VAR_10 & 0xff,
   0xb3, VAR_10 >> 8,
   0xcc, VAR_7->width & 0xff,
   0xcd, VAR_7->width >> 8,
   0xce, VAR_7->height & 0xff,
   0xcf, VAR_7->height >> 8,
   0xd0, VAR_8,
   0xd1, 1,
   0xd2, 1,
   0xd8, VAR_9 & 0xff,
   0xd9, VAR_9 >> 8,
   0xdc, (VAR_9 / 2) & 0xff,
   0xdd, (VAR_9 / 2) >> 8,
   0xe0, VAR_10 & 0xff,
   0xe1, VAR_10 >> 8,
   0xe2, VAR_10 & 0xff,
   0xe3, VAR_10 >> 8,
   0x88, 0xf0,
   0, 0,
  };
  FUNC_4(VAR_2, VAR_11);
  break;
 }
 case 128:
 {
  v4l2_std_id *VAR_12 = VAR_4;
  u8 VAR_13[] = {
   0x88, 0xc0,
   0x98, *VAR_12 & VAR_1 ? 0x12 : 0x16,
   0x9a, *VAR_12 & VAR_1 ? 0xf2 : 0x20,
   0x9b, *VAR_12 & VAR_1 ? 0x00 : 0x01,
   0xc8, *VAR_12 & VAR_1 ? 0x12 : 0x16,
   0xca, *VAR_12 & VAR_1 ? 0xf2 : 0x20,
   0xcb, *VAR_12 & VAR_1 ? 0x00 : 0x01,
   0x88, 0xf0,
   0x30, *VAR_12 & VAR_1 ? 0x66 : 0x00,
   0x31, *VAR_12 & VAR_1 ? 0x90 : 0xe0,
   0, 0,
  };
  FUNC_4(VAR_2, VAR_13);
  VAR_5->norm = *VAR_12;
  break;
 }
 case 131:
 {
  struct v4l2_queryctrl *VAR_14 = VAR_4;

  switch (VAR_14->id) {
  case 136:
   VAR_14->type = VAR_0;
   FUNC_2(VAR_14->name, "Brightness", sizeof(VAR_14->name));
   VAR_14->minimum = 0;
   VAR_14->maximum = 255;
   VAR_14->step = 1;
   VAR_14->default_value = 128;
   VAR_14->flags = 0;
   break;
  case 135:
   VAR_14->type = VAR_0;
   FUNC_2(VAR_14->name, "Contrast", sizeof(VAR_14->name));
   VAR_14->minimum = 0;
   VAR_14->maximum = 127;
   VAR_14->step = 1;
   VAR_14->default_value = 64;
   VAR_14->flags = 0;
   break;
  case 133:
   VAR_14->type = VAR_0;
   FUNC_2(VAR_14->name, "Saturation", sizeof(VAR_14->name));
   VAR_14->minimum = 0;
   VAR_14->maximum = 127;
   VAR_14->step = 1;
   VAR_14->default_value = 64;
   VAR_14->flags = 0;
   break;
  case 134:
   VAR_14->type = VAR_0;
   FUNC_2(VAR_14->name, "Hue", sizeof(VAR_14->name));
   VAR_14->minimum = -128;
   VAR_14->maximum = 127;
   VAR_14->step = 1;
   VAR_14->default_value = 0;
   VAR_14->flags = 0;
   break;
  }
  break;
 }
 case 130:
 {
  struct v4l2_control *VAR_15 = VAR_4;

  switch (VAR_15->id) {
  case 136:
   if (VAR_15->value > 255)
    VAR_5->brightness = 255;
   else if (VAR_15->value < 0)
    VAR_5->brightness = 0;
   else
    VAR_5->brightness = VAR_15->value;
   FUNC_3(VAR_2, 0x0a, VAR_5->brightness);
   break;
  case 135:
   if (VAR_15->value > 127)
    VAR_5->contrast = 127;
   else if (VAR_15->value < 0)
    VAR_5->contrast = 0;
   else
    VAR_5->contrast = VAR_15->value;
   FUNC_3(VAR_2, 0x0b, VAR_5->contrast);
   break;
  case 133:
   if (VAR_15->value > 127)
    VAR_5->saturation = 127;
   else if (VAR_15->value < 0)
    VAR_5->saturation = 0;
   else
    VAR_5->saturation = VAR_15->value;
   FUNC_3(VAR_2, 0x0c, VAR_5->saturation);
   break;
  case 134:
   if (VAR_15->value > 127)
    VAR_5->hue = 127;
   else if (VAR_15->value < -128)
    VAR_5->hue = -128;
   else
    VAR_5->hue = VAR_15->value;
   FUNC_3(VAR_2, 0x0d, VAR_5->hue);
   break;
  }
  break;
 }
 case 132:
 {
  struct v4l2_control *VAR_16 = VAR_4;

  switch (VAR_16->id) {
  case 136:
   VAR_16->value = VAR_5->brightness;
   break;
  case 135:
   VAR_16->value = VAR_5->contrast;
   break;
  case 133:
   VAR_16->value = VAR_5->saturation;
   break;
  case 134:
   VAR_16->value = VAR_5->hue;
   break;
  }
  break;
 }
 default:
  break;
 }
 return 0;
}
