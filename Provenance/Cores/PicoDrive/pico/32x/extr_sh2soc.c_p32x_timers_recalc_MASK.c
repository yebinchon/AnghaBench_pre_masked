
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int peri_regs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 TYPE_1__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int* VAR_3 ;

void FUNC_2(void)
{
  int VAR_4;
  int VAR_5, VAR_6;


  for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
    VAR_5 = FUNC_0(VAR_1[VAR_6].peri_regs, 0x80) & 7;

    if (VAR_5)
      VAR_4 = 0x20 << VAR_5;
    else
      VAR_4 = 2;
    VAR_3[VAR_6] = VAR_4;
    VAR_2[VAR_6] = 0;
    FUNC_1(VAR_0, "WDT cycles[%d] = %d", VAR_6, VAR_4);
  }
}
