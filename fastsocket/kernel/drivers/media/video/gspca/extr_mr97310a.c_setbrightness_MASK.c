
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {scalar_t__ cam_type; scalar_t__ brightness; scalar_t__ do_lcd_stop; } ;
struct gspca_dev {int ctrl_dis; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 u8 VAR_5;
 u8 VAR_6 = 7;
 u8 VAR_7 = 8;
 static const u8 VAR_8[] =

  { 0, 4, 8, 12, 1, 2, 3, 5, 6, 9, 7, 10, 13, 11, 14, 15};






 if ((VAR_3->ctrl_dis & (1 << VAR_2)) &&
     (VAR_3->ctrl_dis & (1 << VAR_0)))
  return;

 if (VAR_4->cam_type == VAR_1) {
  VAR_6 += 4;
  VAR_7 += 4;
 }


 if (VAR_4->brightness > 0) {
  FUNC_0(VAR_3, VAR_6, 0x00);
  VAR_5 = VAR_4->brightness;
 } else {
  FUNC_0(VAR_3, VAR_6, 0x01);
  VAR_5 = (257 - VAR_4->brightness);
 }

 if (VAR_4->do_lcd_stop)
  VAR_5 = VAR_8[VAR_5];

 FUNC_0(VAR_3, VAR_7, VAR_5);
}
