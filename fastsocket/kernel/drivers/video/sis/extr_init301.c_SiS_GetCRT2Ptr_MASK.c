
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {int SiS_VBType; scalar_t__ SiS_IF_DEF_LVDS; int SiS_VBInfo; unsigned short SiS_LCDResInfo; int SiS_SetFlag; int SiS_LCDInfo; scalar_t__ SiS_CustomT; int SiS_TVMode; scalar_t__ SiS_ModeType; scalar_t__ SiS_CHSOverScan; scalar_t__ SiS_IF_DEF_CH70xx; TYPE_3__* SiS_RefIndex; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_6__ {unsigned short Ext_CRT2CRTC; unsigned short Ext_CRT2CRTC_NS; } ;
struct TYPE_5__ {unsigned short Ext_RESINFO; } ;
struct TYPE_4__ {unsigned short St_CRT2CRTC; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;





 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 unsigned short VAR_10 ;


 unsigned short VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;





 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;

__attribute__((used)) static void
FUNC_0(struct SiS_Private *VAR_29, unsigned short VAR_30, unsigned short VAR_31,
        unsigned short VAR_32, unsigned short *VAR_33,
        unsigned short *VAR_34)
{
  unsigned short VAR_35=0, VAR_36=0, VAR_37=0;

  if(VAR_30 <= 0x13) {
     VAR_36 = VAR_29->SiS_SModeIDTable[VAR_31].St_CRT2CRTC;
  } else {
     VAR_36 = VAR_29->SiS_RefIndex[VAR_32].Ext_CRT2CRTC;
     VAR_37 = VAR_29->SiS_EModeIDTable[VAR_31].Ext_RESINFO;
  }

  if((VAR_29->SiS_VBType & VAR_28) && (VAR_29->SiS_IF_DEF_LVDS == 0)) {

     if(VAR_29->SiS_VBInfo & VAR_16) {

 VAR_35 = VAR_29->SiS_LCDResInfo;
 if(!(VAR_29->SiS_SetFlag & VAR_6)) VAR_35 += 32;


 if(VAR_29->SiS_LCDResInfo == VAR_11) {
    if (VAR_37 == VAR_13) VAR_36 = 9;
    else if(VAR_37 == VAR_14) VAR_36 = 11;
 } else if((VAR_29->SiS_LCDResInfo == VAR_8) ||
    (VAR_29->SiS_LCDResInfo == VAR_9) ||
    (VAR_29->SiS_LCDResInfo == VAR_10)) {
    if (VAR_37 == VAR_12) VAR_36 = 9;
 }

 if(VAR_29->SiS_LCDInfo & VAR_4) {



    VAR_35 = 100;
    if(VAR_30 >= 0x13) {
       VAR_36 = VAR_29->SiS_RefIndex[VAR_32].Ext_CRT2CRTC_NS;
    }
 }
     } else {

 if(VAR_29->SiS_VBInfo & VAR_15) {

    VAR_35 = 2;
    if(VAR_29->SiS_VBInfo & VAR_20) {
       VAR_35 = 13;
       if(!(VAR_29->SiS_TVMode & VAR_25)) VAR_35 = 14;
    }
 } else if(VAR_29->SiS_VBInfo & VAR_19) {
    if(VAR_29->SiS_TVMode & VAR_27) VAR_35 = 7;
    else if(VAR_29->SiS_TVMode & VAR_26) VAR_35 = 6;
    else VAR_35 = 5;
    if(VAR_29->SiS_TVMode & VAR_25) VAR_35 += 5;
 } else {
    if(VAR_29->SiS_TVMode & VAR_22) VAR_35 = 3;
    else VAR_35 = 4;
    if(VAR_29->SiS_TVMode & VAR_25) VAR_35 += 5;
 }

     }

     VAR_36 &= 0x3F;

     if(VAR_30 > 0x13) {
        if(VAR_29->SiS_VBInfo & VAR_18) {
    switch(VAR_37) {
    case 131:
       VAR_36 = 6;
       if(VAR_29->SiS_TVMode & (VAR_22 | VAR_24)) VAR_36 = 9;
       break;
    case 130:
    case 129:
    case 135:
       VAR_36 = 6;
       if(VAR_29->SiS_VBInfo & VAR_19) {
   if(VAR_29->SiS_TVMode & VAR_27) VAR_36 = 8;
       }
       break;
    case 128:
       VAR_36 = 4;
       break;
    case 132:
    case 134:
       VAR_36 = 7;
       if(VAR_29->SiS_VBInfo & VAR_19) {
   if(VAR_29->SiS_TVMode & VAR_26) VAR_36 = 8;
       }
       break;
    case 133:
       if(VAR_29->SiS_VBInfo & VAR_19) {
   if(VAR_29->SiS_TVMode & VAR_27) VAR_36 = 9;
       }
       break;
    }
 }
     }

     *VAR_33 = VAR_35;
     *VAR_34 = VAR_36;

  } else {

     VAR_35 = 0;
     if((VAR_29->SiS_IF_DEF_CH70xx) && (VAR_29->SiS_VBInfo & VAR_17)) {

 VAR_35 = 90;
 if(VAR_29->SiS_TVMode & VAR_22) {
    VAR_35 = 92;
    if(VAR_29->SiS_ModeType > VAR_7) {
       if(VAR_29->SiS_CHSOverScan) VAR_35 = 99;
    }
    if(VAR_29->SiS_TVMode & VAR_23) VAR_35 = 94;
    else if(VAR_29->SiS_TVMode & VAR_24) VAR_35 = 96;
 }
 if(VAR_35 != 99) {
    if(VAR_29->SiS_TVMode & VAR_21) VAR_35++;
 }

     } else {

 switch(VAR_29->SiS_LCDResInfo) {
 case 138: VAR_35 = 12; break;
 case 141: VAR_35 = 10; break;
 case 140:
 case 139: VAR_35 = 14; break;
 case 137: VAR_35 = 16; break;
 case 148: VAR_35 = 18; break;
 case 146:
 case 147: VAR_35 = 20; break;
 case 144: VAR_35 = 22; break;
 case 145: VAR_35 = 24; break;
 case 143: VAR_35 = 26; break;
 case 142: VAR_35 = 28; break;



 }

 switch(VAR_29->SiS_LCDResInfo) {
 case 141:
 case 140:
 case 139:
 case 138:
    break;
 default:
    if(VAR_29->SiS_LCDInfo & VAR_4) VAR_35++;
 }

 if(VAR_29->SiS_LCDInfo & VAR_5) VAR_35 = 30;
     }

     (*VAR_33) = VAR_35;
     (*VAR_34) = VAR_36 & 0x1F;
  }
}
