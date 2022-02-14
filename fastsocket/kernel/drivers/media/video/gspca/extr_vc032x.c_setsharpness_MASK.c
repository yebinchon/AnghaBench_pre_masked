
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int sensor; int sharpness; } ;
struct gspca_dev {int dummy; } ;




 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2;

 switch (VAR_1->sensor) {
 case 129:
  VAR_2 = 0;
  FUNC_0(VAR_0, 0x03, &VAR_2, 1);
  if (VAR_1->sharpness < 0)
   VAR_2 = 0x6a;
  else
   VAR_2 = 0xb5 + VAR_1->sharpness * 3;
  FUNC_0(VAR_0, 0x61, &VAR_2, 1);
  break;
 case 128:
  if (VAR_1->sharpness < 0)
   VAR_2 = 0x7e;
  else
   VAR_2 = 0x60 + VAR_1->sharpness * 0x0f;
  FUNC_0(VAR_0, 0x59, &VAR_2, 1);
  break;
 }
}
