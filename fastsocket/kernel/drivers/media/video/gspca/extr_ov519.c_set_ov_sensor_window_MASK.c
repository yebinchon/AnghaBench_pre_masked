
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; TYPE_2__ cam; } ;
struct sd {int sensor; int sensor_width; int sensor_height; struct gspca_dev gspca_dev; } ;
struct TYPE_3__ {int priv; } ;
 int FUNC_0 (struct sd*,int,int) ;
 int FUNC_1 (struct sd*) ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*) ;

__attribute__((used)) static void FUNC_4(struct sd *VAR_0)
{
 struct gspca_dev *VAR_1;
 int VAR_2, VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;


 switch (VAR_0->sensor) {
 case 141:
 case 140:
 case 130:
  FUNC_1(VAR_0);
  return;
 case 131:
  FUNC_3(VAR_0);
  FUNC_2(VAR_0);
  return;
 }

 VAR_1 = &VAR_0->gspca_dev;
 VAR_2 = VAR_1->cam.cam_mode[VAR_1->curr_mode].priv & 1;
 VAR_3 = VAR_1->cam.cam_mode[VAR_1->curr_mode].priv & 2;



 switch (VAR_0->sensor) {
 case 128:
  VAR_4 = 0x1e;
  VAR_5 = 0x1e;
  VAR_6 = 0x02;
  VAR_7 = 0x02;
  break;
 case 136:
 case 129:
  VAR_4 = 0x38;
  VAR_5 = 0x3a;
  VAR_6 = VAR_7 = 0x05;
  break;
 case 139:
 case 138:
 case 137:
  VAR_4 = 0x38;
  VAR_5 = 0x3a;
  VAR_6 = 0x05;
  VAR_7 = 0x06;
  if (VAR_0->sensor == 137 && VAR_2)

   VAR_4++;
  if (VAR_3) {
   VAR_4 += 8;
   VAR_5 += 8;
   VAR_6 += 11;
   VAR_7 += 11;
  }
  break;
 case 135:
 case 134:
  VAR_4 = 0x2f;
  VAR_5 = 0x2f;
  VAR_6 = VAR_7 = 0x05;
  break;
 case 133:
 case 132:
  VAR_4 = 0x1a;
  VAR_5 = 0x1a;
  VAR_6 = VAR_7 = 0x03;
  break;
 default:
  return;
 }

 switch (VAR_0->sensor) {
 case 139:
 case 138:
 case 137:
  if (VAR_2) {
   VAR_8 = 0;
   VAR_9 = 0;
  } else {
   VAR_8 = 1;
   VAR_9 = 1;

  }
  break;
 case 128:
  if (VAR_2) {
   VAR_8 = 1;
   VAR_9 = 1;
  } else {
   VAR_8 = 2;
   VAR_9 = 2;
  }
  break;
 default:
  if (VAR_2) {
   VAR_8 = 1;
   VAR_9 = 0;
  } else {
   VAR_8 = 2;
   VAR_9 = 1;
  }
 }

 FUNC_1(VAR_0);

 FUNC_0(VAR_0, 0x17, VAR_4);
 FUNC_0(VAR_0, 0x18, VAR_5 + (VAR_0->sensor_width >> VAR_8));
 FUNC_0(VAR_0, 0x19, VAR_6);
 FUNC_0(VAR_0, 0x1a, VAR_7 + (VAR_0->sensor_height >> VAR_9));
}
