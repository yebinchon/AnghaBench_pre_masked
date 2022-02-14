
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sd {int sensor; TYPE_1__* ctrls; } ;
struct gspca_dev {int ctrl_dis; } ;
struct TYPE_2__ {int val; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 if (VAR_2->ctrl_dis & (1 << VAR_0))
  return;
 if (VAR_3->sensor == VAR_1) {
  u8 VAR_4;

  VAR_4 = 0xdf;
  switch (VAR_3->ctrls[VAR_0].val) {
  case 0:
   FUNC_0(VAR_2, 0x13, VAR_4 | 0x20);
   break;
  case 1:
   FUNC_0(VAR_2, 0x13, VAR_4);
   FUNC_0(VAR_2, 0x3b, 0x0a);
   break;
  case 2:
   FUNC_0(VAR_2, 0x13, VAR_4);
   FUNC_0(VAR_2, 0x3b, 0x02);
   break;
  }
 } else {
  u8 VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;


  switch (VAR_3->sensor) {
  case 129:
   VAR_5 = 0x08;
   VAR_7 = 0x01;
   break;
  case 128:
   VAR_5 = 0x11;
   VAR_7 = 0x81;
   break;
  }

  switch (VAR_3->ctrls[VAR_0].val) {
  case 0:
   break;
  case 1:
   VAR_5 |= 0x80;
   VAR_6 = 0xac;
   VAR_7 |= 0x04;
   break;
  case 2:
   VAR_5 |= 0x80;
   VAR_7 |= 0x04;
   break;
  }
  FUNC_0(VAR_2, 0x2a, VAR_5);
  FUNC_0(VAR_2, 0x2b, VAR_6);
  FUNC_0(VAR_2, 0x2d, VAR_7);
 }
}
