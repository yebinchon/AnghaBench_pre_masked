
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int sensor; int freq; } ;
struct gspca_dev {int dummy; } ;




 int FUNC_0 (struct gspca_dev*,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2;
 u8 VAR_3[4] = { 0x66, 0x00, 0xa8, 0xe8 };

 switch (VAR_1->sensor) {
 case 129:
  if (VAR_1->freq != 0)
   VAR_3[3] = 0xa8;
  VAR_2 = 0x41;
  break;
 case 128:
  VAR_2 = 0xca;
  break;
 default:
  VAR_2 = 0x40;
  break;
 }
 switch (VAR_1->freq) {
 case 0:
  VAR_3[3] = 0xf0;
  break;
 case 2:
  VAR_2 &= ~0x40;
  break;
 }
 VAR_3[1] = VAR_2;

 FUNC_0(VAR_0, VAR_3, sizeof VAR_3);
}
