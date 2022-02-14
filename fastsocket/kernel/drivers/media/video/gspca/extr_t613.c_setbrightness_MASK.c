
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {unsigned int brightness; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 unsigned int VAR_2;
 u8 VAR_3[4] = { 0x8f, 0x24, 0xc3, 0x00 };

 VAR_2 = VAR_1->brightness;
 if (VAR_2 < 7) {
  VAR_3[1] = 0x26;
  VAR_3[3] = 0x70 - VAR_2 * 0x10;
 } else {
  VAR_3[3] = 0x00 + ((VAR_2 - 7) * 0x10);
 }

 FUNC_0(VAR_0, VAR_3, sizeof VAR_3);
}
