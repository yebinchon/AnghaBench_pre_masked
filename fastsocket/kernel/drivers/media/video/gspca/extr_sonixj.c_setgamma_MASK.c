
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int sensor; TYPE_1__* ctrls; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int val; } ;


 size_t VAR_0 ;
 int VAR_1 ;






 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int* VAR_5 ;
 int* VAR_6 ;
 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_7;
 int VAR_9, VAR_10;
 u8 VAR_11[17];
 const u8 *VAR_12;
 static const u8 VAR_13[17] = {
  0x00, 0x14, 0x1c, 0x1c, 0x1c, 0x1c, 0x1b, 0x1a,
  0x18, 0x13, 0x10, 0x0e, 0x08, 0x07, 0x04, 0x02, 0x00
 };

 switch (VAR_8->sensor) {
 case 133:
  VAR_12 = VAR_3;
  break;
 case 131:
 case 130:
 case 129:
  VAR_12 = VAR_4;
  break;
 case 132:
  VAR_12 = VAR_5;
  break;
 case 128:
  VAR_12 = VAR_6;
  break;
 default:
  VAR_12 = VAR_2;
  break;
 }

 VAR_10 = VAR_8->ctrls[VAR_0].val;
 for (VAR_9 = 0; VAR_9 < sizeof VAR_11; VAR_9++)
  VAR_11[VAR_9] = VAR_12[VAR_9]
   + VAR_13[VAR_9] * (VAR_10 - VAR_1) / 32;
 FUNC_0(VAR_7, 0x20, VAR_11, sizeof VAR_11);
}
