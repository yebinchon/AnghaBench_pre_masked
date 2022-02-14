
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {unsigned char gain; int sensor; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;
struct TYPE_2__ {int sensor_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct gspca_dev*,int*) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 unsigned char VAR_4 = VAR_3->gain;

 switch (VAR_3->sensor) {
 case 135: {
  __u8 VAR_5[] =
   {0xc0, 0x11, 0x31, 0x00, 0x00, 0x00, 0x00, 0x17};

  VAR_5[3] = 0x3f - (VAR_3->gain / 4);
  VAR_5[4] = 0x3f - (VAR_3->gain / 4);
  VAR_5[5] = 0x3f - (VAR_3->gain / 4);

  if (FUNC_1(VAR_2, VAR_5) < 0)
   goto err;
  break;
     }
 case 130:
 case 128: {
  __u8 VAR_6[] =
   {0x30, 0x11, 0x02, 0x20, 0x70, 0x00, 0x00, 0x10};

  VAR_6[4] = 255 - VAR_4;
  if (FUNC_1(VAR_2, VAR_6) < 0)
   goto err;
  break;
     }
 case 129: {
  __u8 VAR_7[] = {
   0xb0, 0x61, 0x02, 0x00, 0x10, 0x00, 0x00, 0x17 };
  VAR_4 = 255 - VAR_4;

  VAR_7[3] |= (VAR_4 & 0x80) >> 7;
  VAR_7[3] |= (VAR_4 & 0x40) >> 5;
  VAR_7[3] |= (VAR_4 & 0x20) >> 3;
  VAR_7[3] |= (VAR_4 & 0x10) >> 1;
  VAR_7[3] |= (VAR_4 & 0x08) << 1;
  VAR_7[3] |= (VAR_4 & 0x04) << 3;
  VAR_7[3] |= (VAR_4 & 0x02) << 5;
  VAR_7[3] |= (VAR_4 & 0x01) << 7;
  if (FUNC_1(VAR_2, VAR_7) < 0)
   goto err;
  break;
     }

 case 134:
  VAR_4 >>= 1;

 case 133: {
  __u8 VAR_8[] = {0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10};

  VAR_8[1] = VAR_1[VAR_3->sensor].sensor_addr;
  VAR_8[3] = VAR_4 >> 2;
  if (FUNC_1(VAR_2, VAR_8) < 0)
   goto err;
  break;
     }
 case 132:
 case 131: {
  __u8 VAR_9[] =
   {0xa0, 0x40, 0x10, 0x00, 0x00, 0x00, 0x00, 0x15};
  __u8 VAR_10[] =
   {0xc0, 0x40, 0x07, 0x00, 0x00, 0x00, 0x00, 0x15};
  __u8 VAR_11[] =
   {0xa0, 0x40, 0x11, 0x01, 0x00, 0x00, 0x00, 0x16};


  if (VAR_3->sensor == 132) {
   VAR_9[2] = 0x0e;
   VAR_10[0] = 0xd0;
   VAR_10[2] = 0x09;
   VAR_11[2] = 0x13;
  }

  VAR_9[3] = VAR_3->gain >> 3;
  VAR_10[3] = VAR_3->gain >> 4;
  VAR_10[4] = VAR_3->gain >> 4;
  VAR_10[5] = VAR_3->gain >> 4;
  VAR_10[6] = VAR_3->gain >> 4;

  if (FUNC_1(VAR_2, VAR_9) < 0)
   goto err;
  if (FUNC_1(VAR_2, VAR_10) < 0)
   goto err;
  if (FUNC_1(VAR_2, VAR_11) < 0)
   goto err;
  break;
     }
 }
 return;
err:
 FUNC_0(VAR_0, "i2c error gain");
}
