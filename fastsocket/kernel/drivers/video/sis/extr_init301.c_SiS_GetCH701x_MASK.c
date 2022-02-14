
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_Index; int SiS_DDC_Data; int SiS_DDC_Clk; int SiS_DDC_DeviceAddr; unsigned short SiS_DDC_ReadAddr; } ;


 unsigned short FUNC_0 (struct SiS_Private*,int ) ;
 int FUNC_1 (struct SiS_Private*) ;

unsigned short
FUNC_2(struct SiS_Private *VAR_0, unsigned short VAR_1)
{
  VAR_0->SiS_DDC_Index = 0x11;
  VAR_0->SiS_DDC_Data = 0x08;
  VAR_0->SiS_DDC_Clk = 0x04;
  FUNC_1(VAR_0);
  VAR_0->SiS_DDC_DeviceAddr = 0xEA;

  VAR_0->SiS_DDC_ReadAddr = VAR_1;

  return FUNC_0(VAR_0,0);
}
