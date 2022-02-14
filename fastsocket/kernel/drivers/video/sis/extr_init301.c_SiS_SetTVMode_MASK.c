
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {unsigned char* VirtualRomBase; unsigned char* pSiS_OutputSelect; int SiS_TVMode; int SiS_VBInfo; scalar_t__ ChipType; int SiS_VBType; scalar_t__ SiS_YPbPr; int SiS_IF_DEF_CH70xx; int SiS_CHOverScan; int SiS_P3d4; scalar_t__ SiS_CHSOverScan; int SiS_ROMNew; scalar_t__ SiS_UseROM; TYPE_1__* SiS_EModeIDTable; scalar_t__ UseCustomMode; } ;
struct TYPE_2__ {unsigned short Ext_RESINFO; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned char VAR_2 ;
 unsigned short VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;
 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 unsigned short FUNC_0 (int ,int) ;
 int FUNC_1 (int ,unsigned short,int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned short VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 int FUNC_2 (int ,int ,char*,int,int) ;

void
FUNC_3(struct SiS_Private *VAR_44, unsigned short VAR_45, unsigned short VAR_46)
{
   unsigned char *VAR_47 = VAR_44->VirtualRomBase;
   unsigned short VAR_48, VAR_49, VAR_50 = 0, VAR_51 = 0;
   unsigned char VAR_52 = *VAR_44->pSiS_OutputSelect;

   VAR_44->SiS_TVMode = 0;

   if(!(VAR_44->SiS_VBInfo & VAR_15)) return;
   if(VAR_44->UseCustomMode) return;

   if(VAR_45 > 0x13) {
      VAR_50 = VAR_44->SiS_EModeIDTable[VAR_46].Ext_RESINFO;
   }

   if(VAR_44->ChipType < VAR_7) {

      if(VAR_44->SiS_VBInfo & VAR_19) VAR_44->SiS_TVMode |= VAR_30;

      if(VAR_44->SiS_VBType & VAR_38) {
  VAR_48 = 0;
  if((VAR_44->ChipType == VAR_6) ||
     (VAR_44->ChipType == VAR_8)) {
     VAR_48 = 0x35;
     VAR_51 = 0xfe;
  } else if(VAR_44->ChipType >= VAR_4) {
     VAR_48 = 0x38;
     if(VAR_44->ChipType < VAR_39) {
        VAR_51 = 0xf3;
        if(VAR_44->ChipType >= VAR_5) VAR_51 = 0x11b;
     }
  }
  if(VAR_48) {
     if(VAR_51 && VAR_44->SiS_UseROM && (!(VAR_44->SiS_ROMNew))) {
        VAR_52 = VAR_47[VAR_51];
        if(!(VAR_52 & VAR_2)) {
    FUNC_1(VAR_44->SiS_P3d4,VAR_48,0x3F);
        }
     }
     VAR_49 = FUNC_0(VAR_44->SiS_P3d4,VAR_48);
     if(VAR_44->SiS_TVMode & VAR_30) {
        if(VAR_49 & VAR_1) {
    VAR_44->SiS_TVMode |= VAR_31;
    VAR_44->SiS_TVMode &= ~VAR_30;
        } else if(VAR_49 & VAR_3) {
    VAR_44->SiS_TVMode |= VAR_32;
        }
     } else {
        if(VAR_49 & VAR_0) {
    VAR_44->SiS_TVMode |= VAR_29;
        }
     }
  }

  if(VAR_44->SiS_VBInfo & VAR_13) {
     if(VAR_44->SiS_YPbPr == VAR_42) VAR_44->SiS_TVMode |= VAR_36;
     else if(VAR_44->SiS_YPbPr == VAR_41) VAR_44->SiS_TVMode |= VAR_35;
     else if(VAR_44->SiS_YPbPr == VAR_43) VAR_44->SiS_TVMode |= VAR_27;
     else VAR_44->SiS_TVMode |= VAR_34;
     if(VAR_44->SiS_TVMode & (VAR_36 | VAR_35 | VAR_34)) {
        VAR_44->SiS_VBInfo &= ~VAR_13;
        VAR_44->SiS_VBInfo |= VAR_16;
     } else if(VAR_44->SiS_TVMode & VAR_27) {
        VAR_44->SiS_TVMode |= VAR_30;
     }
  }
      } else if(VAR_44->SiS_IF_DEF_CH70xx != 0) {
  if(VAR_44->SiS_CHOverScan) {
     if(VAR_44->SiS_IF_DEF_CH70xx == 1) {
        VAR_48 = FUNC_0(VAR_44->SiS_P3d4,0x35);
        if((VAR_48 & VAR_23) || (VAR_44->SiS_CHOverScan == 1)) {
    VAR_44->SiS_TVMode |= VAR_26;
        }
     } else if(VAR_44->SiS_IF_DEF_CH70xx == 2) {
        VAR_48 = FUNC_0(VAR_44->SiS_P3d4,0x79);
        if((VAR_48 & 0x80) || (VAR_44->SiS_CHOverScan == 1)) {
    VAR_44->SiS_TVMode |= VAR_26;
        }
     }
     if(VAR_44->SiS_CHSOverScan) {
        VAR_44->SiS_TVMode |= VAR_26;
     }
  }
  if(VAR_44->SiS_IF_DEF_CH70xx == 2) {
     VAR_48 = FUNC_0(VAR_44->SiS_P3d4,0x38);
     if(VAR_44->SiS_TVMode & VAR_30) {
        if(VAR_48 & VAR_1) VAR_44->SiS_TVMode |= VAR_31;
        else if(VAR_48 & VAR_3) VAR_44->SiS_TVMode |= VAR_32;
     } else {
        if(VAR_48 & VAR_0) {
    VAR_44->SiS_TVMode |= VAR_29;
        }
     }
  }
      }

   } else {

      VAR_49 = FUNC_0(VAR_44->SiS_P3d4,0x35);
      if(VAR_49 & 0x01) {
  VAR_44->SiS_TVMode |= VAR_30;
  if(VAR_49 & 0x08) {
     VAR_44->SiS_TVMode |= VAR_32;
  } else if(VAR_49 & 0x04) {
     if(VAR_44->SiS_VBType & VAR_38) {
        VAR_44->SiS_TVMode &= ~VAR_30;
     }
     VAR_44->SiS_TVMode |= VAR_31;
  }
      } else {
  if(VAR_49 & 0x02) {
     VAR_44->SiS_TVMode |= VAR_29;
  }
      }
      if(VAR_44->SiS_IF_DEF_CH70xx == 2) {
  if(VAR_44->SiS_CHOverScan) {
     if((VAR_49 & 0x10) || (VAR_44->SiS_CHOverScan == 1)) {
        VAR_44->SiS_TVMode |= VAR_26;
     }
  }
      }
      if(VAR_44->SiS_VBType & VAR_38) {
  if(VAR_44->SiS_VBInfo & VAR_16) {
     VAR_49 &= 0xe0;
     if(VAR_49 == 0x00) VAR_44->SiS_TVMode |= VAR_34;
     else if(VAR_49 == 0x20) VAR_44->SiS_TVMode |= VAR_35;
     else if(VAR_49 == 0x40) VAR_44->SiS_TVMode |= VAR_36;
  } else if(VAR_44->SiS_VBInfo & VAR_13) {
     VAR_44->SiS_TVMode |= (VAR_27 | VAR_30);
  }
  if(VAR_44->SiS_VBInfo & (VAR_16 | VAR_13)) {
     if(VAR_50 == VAR_12 || VAR_50 == VAR_9 || VAR_50 == VAR_11) {
        VAR_44->SiS_TVMode |= VAR_20;
     } else {
        VAR_49 = FUNC_0(VAR_44->SiS_P3d4,0x39);
        if(VAR_49 & 0x02) {
    if(VAR_44->SiS_TVMode & (VAR_36 | VAR_27)) {
       VAR_44->SiS_TVMode |= VAR_20;
    } else {
       VAR_44->SiS_TVMode |= VAR_22;
    }
        } else {
    VAR_44->SiS_TVMode |= VAR_21;
        }
     }
  }
      }
   }

   if(VAR_44->SiS_VBInfo & VAR_14) VAR_44->SiS_TVMode |= VAR_30;

   if(VAR_44->SiS_VBType & VAR_38) {

      if(VAR_44->SiS_VBInfo & VAR_13) {
  VAR_44->SiS_TVMode |= VAR_30;
  VAR_44->SiS_TVMode &= ~(VAR_31 | VAR_32 | VAR_29);
      } else if(VAR_44->SiS_VBInfo & VAR_16) {
  if(VAR_44->SiS_TVMode & (VAR_34 | VAR_35 | VAR_36)) {
     VAR_44->SiS_TVMode &= ~(VAR_30 | VAR_29 | VAR_31 | VAR_32);
  }
      }

      if(VAR_44->SiS_VBInfo & VAR_17) {
  if(!(VAR_44->SiS_VBInfo & VAR_18)) {
     VAR_44->SiS_TVMode |= VAR_33;
  }
      }

      if(!(VAR_44->SiS_TVMode & VAR_30)) {
  if(VAR_50 == VAR_10) {
     if(VAR_44->SiS_TVMode & VAR_35) {
        VAR_44->SiS_TVMode |= VAR_25;
     } else if(!(VAR_44->SiS_TVMode & (VAR_27 | VAR_36))) {
        VAR_44->SiS_TVMode |= VAR_28;
     }
  }
      }

      VAR_44->SiS_TVMode |= VAR_24;
      if((VAR_44->SiS_VBInfo & VAR_13) &&
  (VAR_44->SiS_VBInfo & VAR_17)) {
  VAR_44->SiS_TVMode &= ~VAR_24;
      } else if(VAR_44->SiS_TVMode & (VAR_35 | VAR_36)) {
  VAR_44->SiS_TVMode &= ~VAR_24;
      } else if(!(VAR_44->SiS_VBType & VAR_37)) {
  if(VAR_44->SiS_TVMode & VAR_33) {
     VAR_44->SiS_TVMode &= ~VAR_24;
  }
      }

   }

   VAR_44->SiS_VBInfo &= ~VAR_19;






}
