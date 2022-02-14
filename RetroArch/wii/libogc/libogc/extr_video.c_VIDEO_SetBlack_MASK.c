
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct _timing {int psbEven; int psbOdd; int prbEven; int prbOdd; int acv; int equ; } ;
struct TYPE_2__ {int black; int dispSizeY; int adjustedDispPosY; struct _timing* timing; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int) ;

void FUNC_3(bool VAR_1)
{
 u32 VAR_2;
 const struct _timing *VAR_3;

 FUNC_0(VAR_2);
 VAR_0.black = VAR_1;
 VAR_3 = VAR_0.timing;
 FUNC_2(VAR_0.adjustedDispPosY,VAR_0.dispSizeY,VAR_3->equ,VAR_3->acv,VAR_3->prbOdd,VAR_3->prbEven,VAR_3->psbOdd,VAR_3->psbEven,VAR_0.black);
 FUNC_1(VAR_2);
}
