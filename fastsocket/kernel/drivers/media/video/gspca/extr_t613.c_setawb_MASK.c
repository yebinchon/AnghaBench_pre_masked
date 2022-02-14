
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sd {size_t sensor; void* green_gain; void* blue_gain; void* red_gain; int awb; } ;
struct gspca_dev {int dummy; } ;
struct TYPE_2__ {int reg80; } ;


 void* FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 u16 VAR_3;

 VAR_3 = (VAR_0[VAR_2->sensor].reg80 << 8) | 0x80;


 if (!VAR_2->awb) {


  VAR_2->red_gain = FUNC_0(VAR_1, 0x0087);
  VAR_2->blue_gain = FUNC_0(VAR_1, 0x0088);
  VAR_2->green_gain = FUNC_0(VAR_1, 0x0089);
  VAR_3 &= ~0x0400;
 }
 FUNC_1(VAR_1, VAR_3);
 FUNC_1(VAR_1, VAR_3);
}
