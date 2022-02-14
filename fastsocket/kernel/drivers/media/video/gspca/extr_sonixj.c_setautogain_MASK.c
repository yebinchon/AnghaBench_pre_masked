
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int sensor; int ag_cnt; TYPE_1__* ctrls; int gspca_dev; } ;
struct gspca_dev {int ctrl_dis; } ;
struct TYPE_2__ {scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 if (VAR_2->ctrl_dis & (1 << VAR_1))
  return;
 switch (VAR_3->sensor) {
 case 129:
 case 128: {
  u8 VAR_4;

  if (VAR_3->sensor == 129)
   VAR_4 = 0xc0;
  else
   VAR_4 = 0xa0;
  if (VAR_3->ctrls[VAR_1].val)
   VAR_4 |= 0x03;
  FUNC_0(&VAR_3->gspca_dev, 0x13, VAR_4);
  return;
     }
 }
 if (VAR_3->ctrls[VAR_1].val)
  VAR_3->ag_cnt = VAR_0;
 else
  VAR_3->ag_cnt = -1;
}
