
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_4__ {scalar_t__ Ext_RESINFO; } ;
struct TYPE_3__ {scalar_t__ St_ResInfo; } ;



unsigned short
FUNC_0(struct SiS_Private *VAR_0, unsigned short VAR_1, unsigned short VAR_2)
{
   if(VAR_1 <= 0x13)
      return ((unsigned short)VAR_0->SiS_SModeIDTable[VAR_2].St_ResInfo);
   else
      return ((unsigned short)VAR_0->SiS_EModeIDTable[VAR_2].Ext_RESINFO);
}
