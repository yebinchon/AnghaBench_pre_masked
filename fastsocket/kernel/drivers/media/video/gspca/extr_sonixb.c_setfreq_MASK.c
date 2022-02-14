
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int sensor; int freq; } ;
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
 case 129:
 case 128: {




  __u8 VAR_4[] = {0xa0, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x10};
  switch (VAR_3->freq) {
  default:


   VAR_4[3] = 0;
   break;
  case 1:
   VAR_4[3] = (VAR_3->sensor == 129)
     ? 0x4f : 0x8a;
   break;
  }
  VAR_4[1] = VAR_1[VAR_3->sensor].sensor_addr;
  if (FUNC_1(VAR_2, VAR_4) < 0)
   FUNC_0(VAR_0, "i2c error setfreq");
  break;
     }
 }
}
