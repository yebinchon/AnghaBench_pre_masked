
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ cam_type; int sensor_type; int exposure; int min_clockdiv; } ;
struct gspca_dev {int ctrl_dis; int width; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_4;
 int VAR_6 = VAR_3;
 u8 VAR_7[2];

 if (VAR_4->ctrl_dis & (1 << VAR_2))
  return;

 if (VAR_5->cam_type == VAR_0 && VAR_5->sensor_type == 1) {


  VAR_6 = (VAR_5->exposure * 9267) / 10000 + 300;
  FUNC_0(VAR_4, 3, VAR_6 >> 4);
  FUNC_0(VAR_4, 4, VAR_6 & 0x0f);
 } else if (VAR_5->sensor_type == 2) {
  VAR_6 = VAR_5->exposure;
  VAR_6 >>= 3;
  FUNC_0(VAR_4, 3, VAR_6 >> 8);
  FUNC_0(VAR_4, 4, VAR_6 & 0xff);
 } else {







  u8 VAR_8 = (60 * VAR_5->exposure + 7999) / 8000;


  if (VAR_8 < VAR_5->min_clockdiv && VAR_4->width >= 320)
   VAR_8 = VAR_5->min_clockdiv;
  else if (VAR_8 < 2)
   VAR_8 = 2;

  if (VAR_5->cam_type == VAR_1 && VAR_8 < 4)
   VAR_8 = 4;



  VAR_6 = (60 * 511 * VAR_5->exposure) / (8000 * VAR_8);
  if (VAR_6 > 511)
   VAR_6 = 511;


  VAR_6 = 511 - VAR_6;

  VAR_7[0] = VAR_6 & 0xff;
  VAR_7[1] = VAR_6 >> 8;
  FUNC_1(VAR_4, 0x0e, 0, VAR_7, 2);
  FUNC_0(VAR_4, 0x02, VAR_8);
 }
}
