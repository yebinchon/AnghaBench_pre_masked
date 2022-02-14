
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int red_gain; int blue_gain; int green_gain; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2[6] =
  {0x87, 0x00, 0x88, 0x00, 0x89, 0x00};

 VAR_2[1] = VAR_1->red_gain;
 VAR_2[3] = VAR_1->blue_gain;
 VAR_2[5] = VAR_1->green_gain;
 FUNC_0(VAR_0, VAR_2, sizeof VAR_2);
}
