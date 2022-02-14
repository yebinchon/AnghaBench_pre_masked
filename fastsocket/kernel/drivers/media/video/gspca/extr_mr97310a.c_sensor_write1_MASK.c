
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ cam_type; scalar_t__ sensor_type; } ;
struct gspca_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_1;
 u8 VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = VAR_3;
 if (VAR_4->cam_type == VAR_0) {
  VAR_7 = FUNC_0(VAR_1, VAR_2, 0x01, &VAR_5, 1);
  VAR_6 = VAR_4->sensor_type ? 0x13 : 0x11;
 } else {
  VAR_7 = FUNC_0(VAR_1, VAR_2, 0x00, &VAR_5, 1);
  VAR_6 = 0x11;
 }
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5 = 0x01;
 VAR_7 = FUNC_0(VAR_1, VAR_6, 0x00, &VAR_5, 1);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
