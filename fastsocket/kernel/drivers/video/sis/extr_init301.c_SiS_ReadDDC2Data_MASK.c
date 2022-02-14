
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned short SiS_DDC_Data; int SiS_DDC_Index; int SiS_DDC_Port; int SiS_DDC_NData; } ;


 unsigned short FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned short) ;
 int FUNC_2 (struct SiS_Private*) ;
 int FUNC_3 (struct SiS_Private*) ;

__attribute__((used)) static unsigned short
FUNC_4(struct SiS_Private *VAR_0)
{
  unsigned short VAR_1, VAR_2, VAR_3;

  VAR_3 = 0;
  for(VAR_1 = 0; VAR_1 < 8; VAR_1++) {
    VAR_3 <<= 1;
    FUNC_3(VAR_0);
    FUNC_1(VAR_0->SiS_DDC_Port,
      VAR_0->SiS_DDC_Index,
      VAR_0->SiS_DDC_NData,
      VAR_0->SiS_DDC_Data);
    FUNC_2(VAR_0);
    VAR_2 = FUNC_0(VAR_0->SiS_DDC_Port,VAR_0->SiS_DDC_Index);
    if(VAR_2 & VAR_0->SiS_DDC_Data) VAR_3 |= 0x01;
  }
  return VAR_3;
}
