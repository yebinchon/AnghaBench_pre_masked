
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {scalar_t__ ChipType; int SiS_VBType; int SiS_VBInfo; void* SiS_YPbPr; int SiS_P3d4; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned char FUNC_0 (int ,int) ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;

void
FUNC_1(struct SiS_Private *VAR_8)
{

   unsigned char VAR_9;
   VAR_8->SiS_YPbPr = 0;
   if(VAR_8->ChipType >= VAR_1) return;

   if(VAR_8->SiS_VBType) {
      if(VAR_8->SiS_VBInfo & VAR_2) {
  VAR_8->SiS_YPbPr = VAR_7;
      }
   }

   if(VAR_8->ChipType >= VAR_0) {
      if(VAR_8->SiS_VBType & VAR_3) {
  VAR_9 = FUNC_0(VAR_8->SiS_P3d4,0x38);
  if(VAR_9 & 0x08) {
     switch((VAR_9 >> 4)) {
     case 0x00: VAR_8->SiS_YPbPr = VAR_4; break;
     case 0x01: VAR_8->SiS_YPbPr = VAR_5; break;
     case 0x02: VAR_8->SiS_YPbPr = VAR_6; break;
     case 0x03: VAR_8->SiS_YPbPr = VAR_7; break;
     }
  }
      }
   }

}
