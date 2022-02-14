
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int const colors; } ;
struct gspca_dev {int dummy; } ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int const) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 int VAR_5, VAR_6;
 static const int VAR_7[9] =
  {217, -212, 0, -101, 170, -67, -38, -315, 355};
 static const int VAR_8[9] =
  {19, 106, 0, 19, 106, 1, 19, 106, 1};

 FUNC_1(VAR_3, 0xff, 0x03);
 FUNC_1(VAR_3, 0x11, 0x01);
 FUNC_1(VAR_3, 0xff, 0x00);
 for (VAR_5 = 0; VAR_5 < 9; VAR_5++) {
  VAR_6 = VAR_7[VAR_5] * VAR_4->colors / VAR_0 + VAR_8[VAR_5];
  FUNC_1(VAR_3, 0x0f + 2 * VAR_5, (VAR_6 >> 8) & 0x07);
  FUNC_1(VAR_3, 0x0f + 2 * VAR_5 + 1, VAR_6);
 }
 FUNC_1(VAR_3, 0xdc, 0x01);
 FUNC_0(VAR_1|VAR_2, "color: %i", VAR_4->colors);
}
