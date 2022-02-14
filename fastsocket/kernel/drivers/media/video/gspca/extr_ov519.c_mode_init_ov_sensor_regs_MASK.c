
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int height; int width; TYPE_2__ cam; } ;
struct sd {int sensor; int clockdiv; struct gspca_dev gspca_dev; } ;
struct TYPE_3__ {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct sd*,int) ;
 int FUNC_1 (struct sd*,int,int) ;
 int FUNC_2 (struct sd*,int,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct sd *VAR_13)
{
 struct gspca_dev *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u8 VAR_20;

 VAR_14 = &VAR_13->gspca_dev;
 VAR_15 = VAR_14->cam.cam_mode[VAR_14->curr_mode].priv & 1;


 switch (VAR_13->sensor) {
 case 140:
  FUNC_2(VAR_13, 0x14, VAR_15 ? 0x20 : 0x00, 0x20);
  FUNC_2(VAR_13, 0x28, VAR_15 ? 0x00 : 0x20, 0x20);
  FUNC_1(VAR_13, 0x24, VAR_15 ? 0x20 : 0x3a);
  FUNC_1(VAR_13, 0x25, VAR_15 ? 0x30 : 0x60);
  FUNC_2(VAR_13, 0x2d, VAR_15 ? 0x40 : 0x00, 0x40);
  FUNC_2(VAR_13, 0x67, VAR_15 ? 0xf0 : 0x90, 0xf0);
  FUNC_2(VAR_13, 0x74, VAR_15 ? 0x20 : 0x00, 0x20);
  return;
 case 139:
  if (VAR_15) {
   VAR_16 = (1040 - VAR_14->width) / 2 + (0x1f << 4);
   VAR_18 = (776 - VAR_14->height) / 2;
  } else {
   VAR_16 = (2076 - VAR_14->width) / 2 + (0x10 << 4);
   VAR_18 = (1544 - VAR_14->height) / 2;
  }
  VAR_17 = VAR_16 + VAR_14->width;
  VAR_19 = VAR_18 + VAR_14->height;


  FUNC_2(VAR_13, 0x12, VAR_15 ? 0x40 : 0x00, 0xf0);
  FUNC_2(VAR_13, 0x32,
      (((VAR_17 >> 1) & 7) << 3) | ((VAR_16 >> 1) & 7),
      0x3f);
  FUNC_2(VAR_13, 0x03,
      (((VAR_19 >> 1) & 3) << 2) | ((VAR_18 >> 1) & 3),
      0x0f);
  FUNC_1(VAR_13, 0x17, VAR_16 >> 4);
  FUNC_1(VAR_13, 0x18, VAR_17 >> 4);
  FUNC_1(VAR_13, 0x19, VAR_18 >> 3);
  FUNC_1(VAR_13, 0x1a, VAR_19 >> 3);
  return;
 case 128:

  FUNC_2(VAR_13, VAR_0, VAR_15 ? (1 << 5) : 0, 1 << 5);
  FUNC_2(VAR_13, 0x13, 0x00, 0x20);
  FUNC_2(VAR_13, 0x12, 0x04, 0x06);
  FUNC_2(VAR_13, 0x2d, 0x00, 0x40);
  FUNC_2(VAR_13, 0x28, 0x20, 0x20);
  break;
 case 135:
  FUNC_2(VAR_13, 0x14, VAR_15 ? 0x20 : 0x00, 0x20);
  FUNC_1(VAR_13, 0x35, VAR_15 ? 0x1e : 0x9e);
  FUNC_2(VAR_13, 0x13, 0x00, 0x20);
  FUNC_2(VAR_13, 0x12, 0x04, 0x06);
  break;
 case 134:
 case 133:
 case 129:
  FUNC_2(VAR_13, 0x14, VAR_15 ? 0x20 : 0x00, 0x20);
  FUNC_2(VAR_13, 0x28, VAR_15 ? 0x00 : 0x20, 0x20);
  FUNC_1(VAR_13, 0x24, VAR_15 ? 0x20 : 0x3a);
  FUNC_1(VAR_13, 0x25, VAR_15 ? 0x30 : 0x60);
  FUNC_2(VAR_13, 0x2d, VAR_15 ? 0x40 : 0x00, 0x40);
  FUNC_2(VAR_13, 0x67, VAR_15 ? 0xb0 : 0x90, 0xf0);
  FUNC_2(VAR_13, 0x74, VAR_15 ? 0x20 : 0x00, 0x20);
  FUNC_2(VAR_13, 0x13, 0x00, 0x20);
  FUNC_2(VAR_13, 0x12, 0x04, 0x06);
  if (VAR_13->sensor == 129)
   FUNC_1(VAR_13, 0x35, VAR_15 ? 0x1e : 0x9e);
  break;
 case 132:
 case 131:
  FUNC_2(VAR_13, 0x14, VAR_15 ? 0x20 : 0x00, 0x20);
  FUNC_2(VAR_13, 0x28, VAR_15 ? 0x00 : 0x20, 0x20);


  FUNC_2(VAR_13, 0x2d, VAR_15 ? 0x40 : 0x00, 0x40);

  FUNC_2(VAR_13, 0x67, VAR_15 ? 0xf0 : 0x90, 0xf0);

  FUNC_2(VAR_13, 0x74, VAR_15 ? 0x20 : 0x00, 0x20);
  FUNC_2(VAR_13, 0x12, 0x04, 0x04);
  break;
 case 130:



  FUNC_2(VAR_13, VAR_6,
    VAR_15 ? VAR_2 : VAR_3,
    VAR_1);
  FUNC_2(VAR_13, 0x13, 0x00, 0x20);
  FUNC_2(VAR_13, VAR_7, VAR_4,
    VAR_4);
  if (VAR_15) {

   VAR_16 = 164;
   VAR_17 = 28;
   VAR_18 = 14;
   VAR_19 = 494;
  } else {
   VAR_16 = 158;
   VAR_17 = 14;
   VAR_18 = 10;
   VAR_19 = 490;
  }


  FUNC_1(VAR_13, VAR_8, VAR_16 >> 3);
  FUNC_1(VAR_13, VAR_9, VAR_17 >> 3);
  VAR_20 = FUNC_0(VAR_13, VAR_12);
  VAR_20 = (VAR_20 & 0xc0) | ((VAR_17 & 0x7) << 3) | (VAR_16 & 0x07);
  FUNC_3(10);

  FUNC_1(VAR_13, VAR_12, VAR_20);

  FUNC_1(VAR_13, VAR_10, VAR_18 >> 2);
  FUNC_1(VAR_13, VAR_11, VAR_19 >> 2);
  VAR_20 = FUNC_0(VAR_13, VAR_5);
  VAR_20 = (VAR_20 & 0xc0) | ((VAR_19 & 0x3) << 2) | (VAR_18 & 0x03);
  FUNC_3(10);

  FUNC_1(VAR_13, VAR_5, VAR_20);
  break;
 case 138:
  FUNC_2(VAR_13, 0x14, VAR_15 ? 0x20 : 0x00, 0x20);
  FUNC_2(VAR_13, 0x13, 0x00, 0x20);
  FUNC_2(VAR_13, 0x12, 0x04, 0x06);
  break;
 case 137:
 case 136:
  FUNC_2(VAR_13, 0x14, VAR_15 ? 0x20 : 0x00, 0x20);
  FUNC_2(VAR_13, 0x12, 0x04, 0x06);
  break;
 default:
  return;
 }


 FUNC_1(VAR_13, 0x11, VAR_13->clockdiv);
}
