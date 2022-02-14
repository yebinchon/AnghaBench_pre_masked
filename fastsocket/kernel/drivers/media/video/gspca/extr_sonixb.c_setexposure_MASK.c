
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int sensor; int exposure; int reg11; int autogain; } ;
struct gspca_dev {int width; } ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_2__ {int sensor_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;







 int FUNC_1 (struct gspca_dev*,int const*) ;
 int FUNC_2 (struct gspca_dev*,int,int*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 switch (VAR_3->sensor) {
 case 134: {


  __u8 VAR_4[] = {0xc0, 0x11, 0x25, 0x00, 0x00, 0x00, 0x00, 0x17};






  __u16 VAR_5 = VAR_3->exposure * 6;
  VAR_4[3] = VAR_5 >> 8;
  VAR_4[4] = VAR_5 & 0xff;
  if (FUNC_1(VAR_2, VAR_4) != 0)
   goto err;
  break;
     }
 case 129:
 case 128: {



  __u8 VAR_6 = VAR_3->exposure;
  VAR_6 = (VAR_6 << 4) | 0x0b;
  FUNC_2(VAR_2, 0x19, &VAR_6, 1);
  break;
     }
 case 133:
 case 132: {
  __u8 VAR_7[] = {0xb0, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10};
  int VAR_8, VAR_9, VAR_10;







  if (VAR_3->sensor == 133) {
   VAR_10 = 0x4d;
   VAR_7[4] = 0xc0;
  } else
   VAR_10 = 0x41;

  VAR_9 = (15 * VAR_3->exposure + 999) / 1000;
  if (VAR_9 < 1)
   VAR_9 = 1;
  else if (VAR_9 > 16)
   VAR_9 = 16;




  if (VAR_2->width == 640 && VAR_9 < 4)
   VAR_9 = 4;



  VAR_8 = (VAR_3->exposure * 15 * VAR_10) / (1000 * VAR_9);





  if (VAR_3->autogain && VAR_8 < 10)
   VAR_8 = 10;
  else if (VAR_8 > VAR_10)
   VAR_8 = VAR_10;


  VAR_7[1] = VAR_1[VAR_3->sensor].sensor_addr;
  VAR_7[3] = VAR_8;
  VAR_7[4] |= VAR_9 - 1;


  if (VAR_3->reg11 == VAR_9)
   VAR_7[0] = 0xa0;

  if (FUNC_1(VAR_2, VAR_7) == 0)
   VAR_3->reg11 = VAR_9;
  else
   goto err;
  break;
     }
 case 130: {
  __u8 VAR_11[] =
   {0xb0, 0x40, 0x04, 0x00, 0x00, 0x00, 0x00, 0x16};
  __u8 VAR_12[] =
   {0xa0, 0x40, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x16};
  const __u8 VAR_13[] =
   {0xa0, 0x40, 0x11, 0x01, 0x00, 0x00, 0x00, 0x16};
  int VAR_14;
  if (VAR_3->exposure < 200) {
   VAR_12[3] = 255 - (VAR_3->exposure * 255) / 200;
   VAR_14 = 500;
  } else {



   VAR_14 = (VAR_3->exposure - 200) * 1000 / 229 +
      500;
  }

  VAR_11[3] = VAR_14 >> 6;
  VAR_11[4] = VAR_14 & 0x3f;
  if (FUNC_1(VAR_2, VAR_11) < 0)
   goto err;
  if (FUNC_1(VAR_2, VAR_12) < 0)
   goto err;
  if (FUNC_1(VAR_2, VAR_13) < 0)
   goto err;
  break;
     }
 case 131: {
  __u8 VAR_15[] =
   {0xb1, 0x40, 0x03, 0x00, 0x00, 0x00, 0x00, 0x14};
  __u8 VAR_16[] =
   {0xa1, 0x40, 0x05, 0x00, 0x00, 0x00, 0x00, 0x14};
  const __u8 VAR_17[] =
   {0xa1, 0x40, 0x13, 0x01, 0x00, 0x00, 0x00, 0x14};
  int VAR_18;



  if (VAR_3->exposure < 150) {
   VAR_16[3] = 150 - VAR_3->exposure;
   VAR_18 = 300;
  } else {



   VAR_18 = (VAR_3->exposure - 150) * 1000 / 230 +
      300;
  }

  VAR_15[3] = VAR_18 >> 4;
  VAR_15[4] = VAR_18 & 0x0f;
  if (FUNC_1(VAR_2, VAR_15) < 0)
   goto err;
  if (FUNC_1(VAR_2, VAR_16) < 0)
   goto err;
  if (FUNC_1(VAR_2, VAR_17) < 0)
   goto err;
  break;
     }
 }
 return;
err:
 FUNC_0(VAR_0, "i2c error exposure");
}
