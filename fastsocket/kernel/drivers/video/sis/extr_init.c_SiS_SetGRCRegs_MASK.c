
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {scalar_t__ SiS_ModeType; int SiS_P3ce; TYPE_1__* SiS_StandTable; } ;
struct TYPE_2__ {unsigned char* GRC; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned short,unsigned char) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_1, unsigned short VAR_2)
{
   unsigned char VAR_3;
   unsigned short VAR_4;

   for(VAR_4 = 0; VAR_4 <= 0x08; VAR_4++) {
      VAR_3 = VAR_1->SiS_StandTable[VAR_2].GRC[VAR_4];
      FUNC_0(VAR_1->SiS_P3ce,VAR_4,VAR_3);
   }

   if(VAR_1->SiS_ModeType > VAR_0) {

      FUNC_1(VAR_1->SiS_P3ce,0x05,0xBF);
   }
}
