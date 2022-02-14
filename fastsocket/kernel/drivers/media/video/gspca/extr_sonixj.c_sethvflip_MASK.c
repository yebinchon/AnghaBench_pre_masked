
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gspca_dev {int dummy; } ;
struct sd {int sensor; struct gspca_dev gspca_dev; TYPE_1__* ctrls; } ;
struct TYPE_2__ {int val; } ;


 size_t VAR_0 ;




 size_t VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 u8 VAR_4;

 switch (VAR_3->sensor) {
 case 131:
  VAR_4 = 0x18;
  if (VAR_3->ctrls[VAR_1].val)
   VAR_4 |= 0x01;
  FUNC_0(VAR_2, 0x01, VAR_4);
  break;
 case 130:
  VAR_4 = 0x02;
  if (!VAR_3->ctrls[VAR_1].val)
   VAR_4 |= 0x80;
  FUNC_0(VAR_2, 0x75, VAR_4);
  break;
 case 129:
  VAR_4 = 0x06;
  if (VAR_3->ctrls[VAR_1].val)
   VAR_4 |= 0x80;
  FUNC_0(VAR_2, 0x75, VAR_4);
  break;
 case 128:
  VAR_4 = 0x0a;
  if (VAR_3->ctrls[VAR_0].val)
   VAR_4 |= 0x80;
  if (VAR_3->ctrls[VAR_1].val)
   VAR_4 |= 0x40;
  FUNC_0(&VAR_3->gspca_dev, 0x1e, VAR_4);
  break;
 }
}
