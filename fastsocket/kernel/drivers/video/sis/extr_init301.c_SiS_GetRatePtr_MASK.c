
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {scalar_t__ SiS_IF_DEF_CH70xx; int SiS_VBInfo; int SiS_SelectCRT2Rate; int SiS_SetFlag; int SiS_VBType; int SiS_LCDInfo; scalar_t__ ChipType; unsigned short SiS_ModeType; TYPE_3__* SiS_RefIndex; TYPE_2__* SiS_EModeIDTable; int SiS_P3d4; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_6__ {unsigned short ModeID; unsigned short Ext_InfoFlag; } ;
struct TYPE_5__ {unsigned short Ext_ModeFlag; unsigned short REFindex; int Ext_VESAID; } ;
struct TYPE_4__ {unsigned short St_ModeFlag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct SiS_Private*,unsigned short,unsigned short,unsigned short,unsigned short*) ;
 size_t FUNC_1 (struct SiS_Private*) ;
 int FUNC_2 (int ,int) ;
 int VAR_13 ;
 int VAR_14 ;

unsigned short
FUNC_3(struct SiS_Private *VAR_15, unsigned short VAR_16, unsigned short VAR_17)
{
   unsigned short VAR_18,VAR_19,VAR_20;
   unsigned short VAR_21,VAR_22,VAR_23,VAR_24;
   static const unsigned short VAR_25[] = {
  0x00, 0x00, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01,
  0x00, 0x00, 0x00, 0x00
   };


   if(VAR_16 == 0xfe) return 0;

   if(VAR_16 <= 0x13) {
      VAR_21 = VAR_15->SiS_SModeIDTable[VAR_17].St_ModeFlag;
   } else {
      VAR_21 = VAR_15->SiS_EModeIDTable[VAR_17].Ext_ModeFlag;
   }

   if(VAR_15->SiS_IF_DEF_CH70xx != 0) {
      if(VAR_15->SiS_VBInfo & VAR_11) {
  if(VAR_21 & VAR_3) return 0;
      }
   }

   if(VAR_16 < 0x14) return 0xFFFF;

   VAR_22 = (FUNC_2(VAR_15->SiS_P3d4,0x33) >> VAR_15->SiS_SelectCRT2Rate) & 0x0F;
   VAR_24 = VAR_22;

   if(VAR_22 > 0) VAR_22--;

   if(VAR_15->SiS_SetFlag & VAR_6) {
      if(VAR_15->SiS_VBType & VAR_14) {
  if(VAR_15->SiS_VBInfo & VAR_8) {
     if(VAR_15->SiS_VBType & VAR_13) VAR_22 = 0;
     else if(VAR_15->SiS_LCDInfo & VAR_1) VAR_22 = VAR_24 = 0;
  }
  if(VAR_15->SiS_VBInfo & (VAR_8 | VAR_9)) {
     if(!(VAR_15->SiS_VBType & VAR_13)) {
        VAR_23 = VAR_25[FUNC_1(VAR_15)];
        if(VAR_22 > VAR_23) VAR_22 = VAR_23;
     }
  }
      } else {
  if(VAR_15->SiS_VBInfo & (VAR_8 | VAR_9)) VAR_22 = 0;
  if(VAR_15->SiS_IF_DEF_CH70xx != 0) {
     if(VAR_15->SiS_VBInfo & VAR_11) VAR_22 = 0;
  }
      }
   }

   VAR_18 = VAR_15->SiS_EModeIDTable[VAR_17].REFindex;
   VAR_16 = VAR_15->SiS_RefIndex[VAR_18].ModeID;

   if(VAR_15->ChipType >= VAR_7) {
      if(!(VAR_15->SiS_VBInfo & VAR_2)) {
  if( (VAR_15->SiS_EModeIDTable[VAR_17].Ext_VESAID == 0x105) ||
      (VAR_15->SiS_EModeIDTable[VAR_17].Ext_VESAID == 0x107) ) {
     if(VAR_24 <= 1) VAR_18++;
  }
      }
   }

   VAR_19 = 0;
   do {
      if(VAR_15->SiS_RefIndex[VAR_18 + VAR_19].ModeID != VAR_16) break;
      VAR_23 = VAR_15->SiS_RefIndex[VAR_18 + VAR_19].Ext_InfoFlag;
      VAR_23 &= VAR_5;
      if(VAR_23 < VAR_15->SiS_ModeType) break;
      VAR_19++;
      VAR_22--;
   } while(VAR_22 != 0xFFFF);

   if(!(VAR_15->SiS_VBInfo & VAR_10)) {
      if(VAR_15->SiS_VBInfo & VAR_12) {
  VAR_23 = VAR_15->SiS_RefIndex[VAR_18 + VAR_19 - 1].Ext_InfoFlag;
  if(VAR_23 & VAR_4) VAR_19++;
      }
   }

   VAR_19--;

   if((VAR_15->SiS_SetFlag & VAR_6) && (!(VAR_15->SiS_VBInfo & VAR_0))) {
      VAR_20 = VAR_19;
      if(!(FUNC_0(VAR_15, VAR_16, VAR_17, VAR_18, &VAR_19))) {
  VAR_19 = VAR_20;
      }
   }

   return (VAR_18 + VAR_19);
}
