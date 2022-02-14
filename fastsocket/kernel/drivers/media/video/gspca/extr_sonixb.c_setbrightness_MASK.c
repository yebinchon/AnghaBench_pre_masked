
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int sensor; int brightness; } ;
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

 switch (VAR_3->sensor) {
 case 131:
 case 130: {
  __u8 VAR_4[] =
   {0xa0, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x10};


  VAR_4[1] = VAR_1[VAR_3->sensor].sensor_addr;
  VAR_4[3] = VAR_3->brightness;
  if (FUNC_1(VAR_2, VAR_4) < 0)
   goto err;
  break;
     }
 case 129:
 case 128: {
  __u8 VAR_5[] =
   {0xb0, 0x40, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x16};
  __u8 VAR_6[] =
   {0xa0, 0x40, 0x11, 0x01, 0x00, 0x00, 0x00, 0x16};


  if (VAR_3->sensor == 129) {
   VAR_5[2] = 7;
   VAR_6[2] = 0x13;
  }

  if (VAR_3->brightness < 127) {

   VAR_5[3] = 0x01;

   VAR_5[4] = 127 - VAR_3->brightness;
  } else
   VAR_5[4] = VAR_3->brightness - 127;

  if (FUNC_1(VAR_2, VAR_5) < 0)
   goto err;
  if (FUNC_1(VAR_2, VAR_6) < 0)
   goto err;
  break;
     }
 }
 return;
err:
 FUNC_0(VAR_0, "i2c error brightness");
}
