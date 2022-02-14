
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int gain; scalar_t__ agc; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2;

 if (VAR_1->agc)
  return;

 VAR_2 = VAR_1->gain;
 switch (VAR_2 & 0x30) {
 case 0x00:
  VAR_2 &= 0x0f;
  break;
 case 0x10:
  VAR_2 &= 0x0f;
  VAR_2 |= 0x30;
  break;
 case 0x20:
  VAR_2 &= 0x0f;
  VAR_2 |= 0x70;
  break;
 default:

  VAR_2 &= 0x0f;
  VAR_2 |= 0xf0;
  break;
 }
 FUNC_0(VAR_0, 0x00, VAR_2);
}
