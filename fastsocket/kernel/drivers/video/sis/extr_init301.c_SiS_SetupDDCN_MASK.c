
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_NData; int SiS_DDC_Data; int SiS_DDC_NClk; int SiS_DDC_Clk; int SiS_DDC_Index; scalar_t__ SiS_SensibleSR11; } ;



__attribute__((used)) static void
FUNC_0(struct SiS_Private *VAR_0)
{
  VAR_0->SiS_DDC_NData = ~VAR_0->SiS_DDC_Data;
  VAR_0->SiS_DDC_NClk = ~VAR_0->SiS_DDC_Clk;
  if((VAR_0->SiS_DDC_Index == 0x11) && (VAR_0->SiS_SensibleSR11)) {
     VAR_0->SiS_DDC_NData &= 0x0f;
     VAR_0->SiS_DDC_NClk &= 0x0f;
  }
}
