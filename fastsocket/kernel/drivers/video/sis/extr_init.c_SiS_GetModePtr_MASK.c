
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {scalar_t__ SiS_ModeType; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_2__ {unsigned short St_StTableIndex; } ;


 scalar_t__ VAR_0 ;

unsigned short
FUNC_0(struct SiS_Private *VAR_1, unsigned short VAR_2, unsigned short VAR_3)
{
   unsigned short VAR_4;

   if(VAR_2 <= 0x13) {
      VAR_4 = VAR_1->SiS_SModeIDTable[VAR_3].St_StTableIndex;
   } else {
      if(VAR_1->SiS_ModeType <= VAR_0) VAR_4 = 0x1B;
      else VAR_4 = 0x0F;
   }
   return VAR_4;
}
