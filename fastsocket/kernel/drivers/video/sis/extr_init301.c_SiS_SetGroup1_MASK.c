
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {unsigned char* VirtualRomBase; int SiS_VBInfo; unsigned short CModeFlag; scalar_t__ ChipType; int SiS_IF_DEF_LVDS; int SiS_VGAHT; int SiS_VGAHDE; int SiS_VBType; unsigned short SiS_HT; unsigned short SiS_HDE; int SiS_LCDInfo; scalar_t__ SiS_LCDResInfo; unsigned short CHSyncStart; unsigned short CHSyncEnd; unsigned char* CCRT1CRTC; int SiS_TVMode; int SiS_VGAVT; scalar_t__ SiS_IF_DEF_CH70xx; int SiS_VGAVDE; unsigned short CVSyncStart; unsigned short CVSyncEnd; int PDC; int SiS_Part1Port; int SiS_ROMNew; scalar_t__ SiS_UseROM; scalar_t__ SiS_IF_DEF_FSTN; scalar_t__ SiS_IF_DEF_DSTN; TYPE_3__* SiS_CRT1Table; scalar_t__ UseCustomMode; TYPE_2__* SiS_EModeIDTable; int SiS_UseWideCRT2; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_6__ {unsigned char* CR; } ;
struct TYPE_5__ {unsigned short Ext_RESINFO; unsigned short Ext_ModeFlag; } ;
struct TYPE_4__ {unsigned short St_ModeFlag; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,int ) ;
 int FUNC_1 (struct SiS_Private*,unsigned short) ;
 int FUNC_2 (struct SiS_Private*) ;
 int FUNC_3 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_4 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_5 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_6 (int ,int,unsigned short) ;
 int FUNC_7 (int ,int,int,unsigned short) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;

__attribute__((used)) static void
FUNC_8(struct SiS_Private *VAR_30, unsigned short VAR_31, unsigned short VAR_32,
  unsigned short VAR_33)
{



  unsigned short VAR_34=0, VAR_35=0, VAR_36=0, VAR_37=0, VAR_38=0;
  unsigned short VAR_39=0, VAR_40=0, VAR_41, VAR_42=0;




  if(VAR_30->SiS_VBInfo & VAR_19) {
     FUNC_5(VAR_30, VAR_31, VAR_32, VAR_33);
     return;
  }

  if(VAR_31 <= 0x13) {
     VAR_41 = VAR_30->SiS_SModeIDTable[VAR_32].St_ModeFlag;
  } else if(VAR_30->UseCustomMode) {
     VAR_41 = VAR_30->CModeFlag;
  } else {
     VAR_40 = FUNC_0(VAR_30, VAR_33, VAR_30->SiS_UseWideCRT2);
     VAR_42 = VAR_30->SiS_EModeIDTable[VAR_32].Ext_RESINFO;
     VAR_41 = VAR_30->SiS_EModeIDTable[VAR_32].Ext_ModeFlag;
  }

  FUNC_3(VAR_30, VAR_31, VAR_32, VAR_33);

  if( ! ((VAR_30->ChipType >= VAR_10) &&
         (VAR_30->SiS_IF_DEF_LVDS == 1) &&
         (VAR_30->SiS_VBInfo & VAR_24)) ) {

     if(VAR_30->ChipType < VAR_10 ) {



     } else {



     }



     if(VAR_30->ChipType < VAR_10 ) {
     } else {
     }

     if(VAR_30->SiS_VBType & VAR_29) {

 if(VAR_30->UseCustomMode) {
    VAR_36 = VAR_30->CHSyncStart + VAR_38;
    VAR_37 = VAR_30->CHSyncEnd + VAR_38;
    VAR_35 = VAR_30->SiS_VGAHT;
    if(VAR_41 & VAR_2) VAR_35 >>= 1;
    VAR_35--;
    if(VAR_37 > VAR_35) VAR_37 = VAR_35;
 }

 if(VAR_30->SiS_VBInfo & VAR_20) {
    unsigned char VAR_43, VAR_44, VAR_45, VAR_46;
    if(VAR_30->UseCustomMode) {
       VAR_43 = VAR_30->CCRT1CRTC[4];
       VAR_44 = VAR_30->CCRT1CRTC[14];
       VAR_45 = VAR_30->CCRT1CRTC[5];
       VAR_46 = VAR_30->CCRT1CRTC[15];
    } else {
       VAR_43 = VAR_30->SiS_CRT1Table[VAR_40].CR[4];
       VAR_44 = VAR_30->SiS_CRT1Table[VAR_40].CR[14];
       VAR_45 = VAR_30->SiS_CRT1Table[VAR_40].CR[5];
       VAR_46 = VAR_30->SiS_CRT1Table[VAR_40].CR[15];
    }
    VAR_36 = ((VAR_43 | ((VAR_44 & 0xC0) << 2)) - 3) << 3;
    VAR_37 = (((VAR_45 & 0x1f) | ((VAR_46 & 0x04) << (5-2))) - 3) << 3;
    VAR_37 &= 0x00FF;
    VAR_37 |= (VAR_36 & 0xFF00);
    VAR_36 += VAR_38;
    VAR_37 += VAR_38;
    VAR_35 = VAR_30->SiS_VGAHT;
    if(VAR_41 & VAR_2) VAR_35 >>= 1;
    VAR_35--;
    if(VAR_37 > VAR_35) VAR_37 = VAR_35;
 }

 if(VAR_30->SiS_TVMode & (VAR_26 | VAR_25)) {
    VAR_36 = 1040;
    VAR_37 = 1044;
 }

     }

     FUNC_6(VAR_30->SiS_Part1Port,0x0B,VAR_36);

     FUNC_6(VAR_30->SiS_Part1Port,0x0D,VAR_37);

     VAR_34 = ((VAR_36 >> 8) & 0x0F) | ((VAR_39 >> 4) & 0xF0);
     FUNC_6(VAR_30->SiS_Part1Port,0x0C,VAR_34);



     VAR_37 = VAR_30->SiS_VGAVT - 1;
     VAR_34 = VAR_37 & 0x00FF;

     if(VAR_30->ChipType < VAR_12) {
        if(VAR_30->SiS_IF_DEF_LVDS == 1) {
    if(VAR_30->ChipType < VAR_10) {
       if(VAR_30->SiS_IF_DEF_CH70xx != 0) {
          if(VAR_30->SiS_VBInfo & (VAR_21 | VAR_16)) {
             VAR_34--;
          }
       }
    } else {
       VAR_34--;
    }
 } else if(VAR_30->ChipType >= VAR_10) {
    VAR_34--;
 }
     }
     FUNC_6(VAR_30->SiS_Part1Port,0x0E,VAR_34);

     VAR_36 = VAR_30->SiS_VGAVDE - 1;
     FUNC_6(VAR_30->SiS_Part1Port,0x0F,VAR_36);

     VAR_34 = ((VAR_36 >> 5) & 0x38) | ((VAR_37 >> 8) & 0x07);
     FUNC_6(VAR_30->SiS_Part1Port,0x12,VAR_34);

     if((VAR_30->ChipType >= VAR_10) && (VAR_30->ChipType < VAR_12)) {
 VAR_36++;
 VAR_35 = VAR_36;
 VAR_37++;
 VAR_37 -= VAR_35;
 VAR_37 >>= 2;
 VAR_36 += VAR_37;
 if(VAR_37 < 4) VAR_37 = 4;
 VAR_37 >>= 2;
 VAR_37 += VAR_36;
 VAR_37++;
     } else {
 VAR_36 = (VAR_30->SiS_VGAVT + VAR_30->SiS_VGAVDE) >> 1;
 VAR_37 = ((VAR_30->SiS_VGAVT - VAR_30->SiS_VGAVDE) >> 4) + VAR_36 + 1;
     }

     if(VAR_30->SiS_VBType & VAR_29) {
 if(VAR_30->UseCustomMode) {
    VAR_36 = VAR_30->CVSyncStart;
    VAR_37 = VAR_30->CVSyncEnd;
 }
 if(VAR_30->SiS_VBInfo & VAR_20) {
    unsigned char VAR_47, VAR_48, VAR_49;
    if(VAR_30->UseCustomMode) {
       VAR_47 = VAR_30->CCRT1CRTC[8];
       VAR_48 = VAR_30->CCRT1CRTC[7];
       VAR_49 = VAR_30->CCRT1CRTC[13];
       VAR_37 = VAR_30->CCRT1CRTC[9];
    } else {
       VAR_47 = VAR_30->SiS_CRT1Table[VAR_40].CR[8];
       VAR_48 = VAR_30->SiS_CRT1Table[VAR_40].CR[7];
       VAR_49 = VAR_30->SiS_CRT1Table[VAR_40].CR[13];
       VAR_37 = VAR_30->SiS_CRT1Table[VAR_40].CR[9];
    }
    VAR_36 = VAR_47;
    if(VAR_48 & 0x04) VAR_36 |= 0x0100;
    if(VAR_48 & 0x80) VAR_36 |= 0x0200;
    if(VAR_49 & 0x08) VAR_36 |= 0x0400;
 }
     }
     FUNC_6(VAR_30->SiS_Part1Port,0x10,VAR_36);

     VAR_34 = ((VAR_36 >> 4) & 0x70) | (VAR_37 & 0x0F);
     FUNC_6(VAR_30->SiS_Part1Port,0x11,VAR_34);



     if(VAR_30->ChipType < VAR_10) {
     } else {
     }

  }

  if(VAR_30->SiS_VBType & VAR_29) {
     if((VAR_30->SiS_VBType & VAR_27) && (VAR_30->SiS_VBInfo & VAR_18)) {

 FUNC_5(VAR_30, VAR_31, VAR_32, VAR_33);
     } else if(VAR_30->SiS_VBInfo & VAR_24) {
 FUNC_4(VAR_30, VAR_31, VAR_32, VAR_33);
     }
  } else {
     if(VAR_30->ChipType < VAR_10) {
 FUNC_5(VAR_30, VAR_31, VAR_32, VAR_33);
     } else {
 if(VAR_30->SiS_IF_DEF_CH70xx != 0) {
    if((!(VAR_30->SiS_VBInfo & VAR_22)) || (VAR_30->SiS_VBInfo & VAR_24)) {
       FUNC_5(VAR_30, VAR_31,VAR_32,VAR_33);
    }
 } else {
    FUNC_5(VAR_30, VAR_31,VAR_32,VAR_33);
 }
     }
  }
}
