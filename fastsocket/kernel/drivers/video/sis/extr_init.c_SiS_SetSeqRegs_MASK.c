
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {int SiS_VBType; int SiS_VBInfo; int SiS_P3c4; TYPE_1__* SiS_StandTable; scalar_t__ SiS_IF_DEF_LVDS; } ;
struct TYPE_2__ {int* SR; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,unsigned char) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct SiS_Private *VAR_5, unsigned short VAR_6)
{
   unsigned char VAR_7;
   int VAR_8;

   FUNC_0(VAR_5->SiS_P3c4,0x00,0x03);


   VAR_7 = VAR_5->SiS_StandTable[VAR_6].SR[0] | 0x20;


   if((VAR_5->SiS_VBType & VAR_4) || (VAR_5->SiS_IF_DEF_LVDS)) {

      if(VAR_5->SiS_VBInfo & (VAR_0 | VAR_2)) {
         if(VAR_5->SiS_VBInfo & VAR_3) VAR_7 |= 0x01;
      } else if(VAR_5->SiS_VBInfo & VAR_1) VAR_7 |= 0x01;

   }

   FUNC_0(VAR_5->SiS_P3c4,0x01,VAR_7);

   for(VAR_8 = 2; VAR_8 <= 4; VAR_8++) {
      VAR_7 = VAR_5->SiS_StandTable[VAR_6].SR[VAR_8 - 1];
      FUNC_0(VAR_5->SiS_P3c4,VAR_8,VAR_7);
   }
}
