
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_DDC_Data; int SiS_DDC_NData; int SiS_DDC_Index; int SiS_DDC_Port; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct SiS_Private*) ;
 scalar_t__ FUNC_2 (struct SiS_Private*) ;

__attribute__((used)) static unsigned short
FUNC_3(struct SiS_Private *VAR_0)
{
  if(FUNC_2(VAR_0)) return 0xFFFF;
  FUNC_0(VAR_0->SiS_DDC_Port,
    VAR_0->SiS_DDC_Index,
    VAR_0->SiS_DDC_NData,
    0x00);
  if(FUNC_1(VAR_0)) return 0xFFFF;
  FUNC_0(VAR_0->SiS_DDC_Port,
    VAR_0->SiS_DDC_Index,
    VAR_0->SiS_DDC_NData,
    VAR_0->SiS_DDC_Data);
  if(FUNC_1(VAR_0)) return 0xFFFF;
  return 0;
}
