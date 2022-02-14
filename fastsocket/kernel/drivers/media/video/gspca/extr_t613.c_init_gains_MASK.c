
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sd {int red_gain; int blue_gain; int green_gain; size_t sensor; int awb; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int reg80; } ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 u16 VAR_3;
 u8 VAR_4[8] =
  {0x87, 0x00, 0x88, 0x00, 0x89, 0x00, 0x80, 0x00};

 VAR_4[1] = VAR_2->red_gain;
 VAR_4[3] = VAR_2->blue_gain;
 VAR_4[5] = VAR_2->green_gain;
 VAR_3 = VAR_0[VAR_2->sensor].reg80;
 if (!VAR_2->awb)
  VAR_3 &= ~0x04;
 VAR_4[7] = VAR_3;
 FUNC_1(VAR_1, VAR_4, sizeof VAR_4);

 FUNC_0(VAR_1, (VAR_2->red_gain << 8) + 0x87);
 FUNC_0(VAR_1, (VAR_2->blue_gain << 8) + 0x88);
 FUNC_0(VAR_1, (VAR_2->green_gain << 8) + 0x89);
}
