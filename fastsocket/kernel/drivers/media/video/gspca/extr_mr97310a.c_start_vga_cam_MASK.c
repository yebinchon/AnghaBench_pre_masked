
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; int member_6; int member_7; } ;
struct sensor_w_data {int member_0; int member_1; int member_3; TYPE_1__ member_2; } ;
struct sd {int sensor_type; scalar_t__ adj_colors; int do_lcd_stop; } ;
struct gspca_dev {int* usb_buf; int width; } ;
typedef int __u8 ;


 int FUNC_0 (struct sensor_w_data const*) ;
 int FUNC_1 (int*,int const*,int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,struct sensor_w_data const*,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 __u8 *VAR_2 = VAR_0->usb_buf;
 int VAR_3;
 static const __u8 VAR_4[] =
  {0x00, 0x0d, 0x01, 0x00, 0x00, 0x2b, 0x00, 0x00,
   0x00, 0x50, 0xc0};


 FUNC_1(VAR_2, VAR_4, 11);
 if (!VAR_1->sensor_type) {
  VAR_2[5] = 0x00;
  VAR_2[10] = 0x91;
 }
 if (VAR_1->sensor_type == 2) {
  VAR_2[5] = 0x00;
  VAR_2[10] = 0x18;
 }

 switch (VAR_0->width) {
 case 160:
  VAR_2[9] |= 0x0c;

 case 320:
  VAR_2[9] |= 0x04;

 case 640:
 default:
  VAR_2[3] = 0x50;
  VAR_2[4] = 0x78;
  VAR_2[6] = 0x04;
  VAR_2[8] = 0x03;
  if (VAR_1->sensor_type == 2) {
   VAR_2[6] = 2;
   VAR_2[8] = 1;
  }
  if (VAR_1->do_lcd_stop)
   VAR_2[8] = 0x04;
  break;

 case 176:
  VAR_2[9] |= 0x04;

 case 352:
  VAR_2[3] = 0x2c;
  VAR_2[4] = 0x48;
  VAR_2[6] = 0x94;
  VAR_2[8] = 0x63;
  if (VAR_1->do_lcd_stop)
   VAR_2[8] = 0x64;
  break;
 }

 VAR_3 = FUNC_2(VAR_0, 11);
 if (VAR_3 < 0)
  return VAR_3;

 if (!VAR_1->sensor_type) {
  static const struct sensor_w_data VAR_5[] = {
   {0x01, 0x00, {0x0c, 0x00, 0x04}, 3},
   {0x14, 0x00, {0x01, 0xe4, 0x02, 0x84}, 4},
   {0x20, 0x00, {0x00, 0x80, 0x00, 0x08}, 4},
   {0x25, 0x00, {0x03, 0xa9, 0x80}, 3},
   {0x30, 0x00, {0x30, 0x18, 0x10, 0x18}, 4},
   {0, 0, 0, 0}
  };
  VAR_3 = FUNC_3(VAR_0, VAR_5,
      FUNC_0(VAR_5));
 } else if (VAR_1->sensor_type == 1) {
  static const struct sensor_w_data VAR_6[] = {
   {0x02, 0x00, {0x06, 0x59, 0x0c, 0x16, 0x00,


    0x05, 0x01, 0x04}, 8}
  };

  static const struct sensor_w_data VAR_7[] = {
   {0x02, 0x00, {0x06, 0x59, 0x0c, 0x16, 0x00,

    0x07, 0x00, 0x01}, 8}
  };

  static const struct sensor_w_data VAR_8[] = {
   {0x11, 0x04, 0x01, 1},
   {0x0a, 0x00, {0x00, 0x01, 0x00, 0x00, 0x01,


    0x00, 0x0a}, 7},
   {0x11, 0x04, 0x01, 1},
   {0x12, 0x00, {0x00, 0x63, 0x00, 0x70, 0x00, 0x00}, 6},
   {0x11, 0x04, 0x01, 1},
   {0, 0, 0, 0}
  };

  if (VAR_1->adj_colors)
   VAR_3 = FUNC_3(VAR_0, VAR_6,
      FUNC_0(VAR_6));
  else
   VAR_3 = FUNC_3(VAR_0, VAR_7,
      FUNC_0(VAR_7));

  if (VAR_3 < 0)
   return VAR_3;

  VAR_3 = FUNC_3(VAR_0, VAR_8,
      FUNC_0(VAR_8));
 } else {
  static const struct sensor_w_data VAR_9[] = {

   {0x01, 0x00, 0x48, 1},
   {0x02, 0x00, 0x22, 1},

   {0x05, 0x00, 0x10, 1},
   {0x06, 0x00, 0x00, 1},
   {0x07, 0x00, 0x00, 1},
   {0x08, 0x00, 0x00, 1},
   {0x09, 0x00, 0x00, 1},
   {0x12, 0x00, 0x00, 1},
   {0x13, 0x00, 0x04, 1},
   {0x14, 0x00, 0x00, 1},
   {0x15, 0x00, 0x06, 1},
   {0x16, 0x00, 0x01, 1},
   {0x17, 0x00, 0xe2, 1},
   {0x18, 0x00, 0x02, 1},
   {0x19, 0x00, 0x82, 1},
   {0x1a, 0x00, 0x00, 1},
   {0x1b, 0x00, 0x20, 1},

   {0x1d, 0x00, 0x80, 1},
   {0x1e, 0x00, 0x08, 1},
   {0x1f, 0x00, 0x0c, 1},
   {0x20, 0x00, 0x00, 1},
   {0, 0, 0, 0}
  };
  VAR_3 = FUNC_3(VAR_0, VAR_9,
      FUNC_0(VAR_9));
 }
 return VAR_3;
}
