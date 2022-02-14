
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ cam_type; int sensor_type; int gain; } ;
struct gspca_dev {int ctrl_dis; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_4;
 u8 VAR_6;

 if ((VAR_4->ctrl_dis & (1 << VAR_2)) &&
     (VAR_4->ctrl_dis & (1 << VAR_3)))
  return;

 if (VAR_5->cam_type == VAR_0 && VAR_5->sensor_type == 1)
  FUNC_0(VAR_4, 0x0e, VAR_5->gain);
 else if (VAR_5->cam_type == VAR_1 && VAR_5->sensor_type == 2)
  for (VAR_6 = 0x0a; VAR_6 < 0x11; VAR_6 += 2) {
   FUNC_0(VAR_4, VAR_6, VAR_5->gain >> 8);
   FUNC_0(VAR_4, VAR_6 + 1, VAR_5->gain & 0xff);
  }
 else
  FUNC_0(VAR_4, 0x10, VAR_5->gain);
}
