
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {int sensor; TYPE_1__* ctrls; } ;
struct gspca_dev {int ctrl_dis; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;


 int FUNC_0 (struct gspca_dev*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 if (VAR_2->ctrl_dis & (1 << VAR_0))
  return;
 switch (VAR_3->sensor) {
 case 129:
  FUNC_0(VAR_2, 0x02,
   VAR_3->ctrls[VAR_0].val ? 0x64 : 0x60);
  break;
 case 128:
  if (VAR_1)
   FUNC_0(VAR_2, 0x02,
    VAR_3->ctrls[VAR_0].val ?
      0x55 : 0x54);
  else
   FUNC_0(VAR_2, 0x02,
    VAR_3->ctrls[VAR_0].val ?
      0x66 : 0x64);
  break;
 }
}
