
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_TVData {int RVBHCMAX; int RVBHCFACT; unsigned short VGAHT; unsigned char VGAVT; unsigned short TVHDE; unsigned short TVVDE; int RVBHRS2; int HALFRVBHRS; int RVBHRS; int FlickerMode; int RY1COE; int RY2COE; int RY3COE; int RY4COE; } ;
struct SiS_Private {unsigned short CModeFlag; int SiS_VBInfo; int SiS_SetFlag; unsigned char* VirtualRomBase; int SiS_NewFlickerMode; int SiS_RVBHRS; int SiS_RY1COE; int SiS_RY2COE; int SiS_RY3COE; int SiS_RY4COE; int SiS_RVBHRS2; int SiS_RVBHCMAX; int SiS_RVBHCFACT; unsigned short SiS_HDE; unsigned short SiS_VGAHDE; unsigned short SiS_VDE; unsigned short SiS_VGAVDE; unsigned short CHTotal; unsigned short SiS_VGAHT; unsigned short SiS_HT; unsigned char SiS_VGAVT; unsigned char SiS_VT; unsigned char CVTotal; int SiS_TVMode; int SiS_LCDInfo; unsigned short PanelHT; unsigned char PanelVT; unsigned short PanelXRes; unsigned short PanelYRes; int SiS_LCDResInfo; int ChipType; struct SiS_LCDData* SiS_ExtLCD1024x768Data; struct SiS_LCDData* SiS_St2LCD1280x1024Data; struct SiS_LCDData* SiS_NoScaleData; struct SiS_LCDData* SiS_LCD1680x1050Data; struct SiS_LCDData* SiS_StLCD1600x1200Data; struct SiS_LCDData* SiS_ExtLCD1600x1200Data; struct SiS_LCDData* SiS_StLCD1400x1050Data; struct SiS_LCDData* SiS_ExtLCD1400x1050Data; struct SiS_LCDData* SiS_ExtLCD1280x1024Data; struct SiS_LCDData* SiS_LCD1280x960Data; struct SiS_LCDData* SiS_LCD1280x854Data; struct SiS_LCDData* SiS_LCD1280x800_2Data; struct SiS_LCDData* SiS_LCD1280x800Data; struct SiS_LCDData* SiS_StLCD1280x768_2Data; struct SiS_LCDData* SiS_ExtLCD1280x768_2Data; struct SiS_LCDData* SiS_LCD1280x720Data; struct SiS_LCDData* SiS_St2LCD1024x768Data; scalar_t__ UseCustomMode; struct SiS_TVData* SiS_StPALData; struct SiS_TVData* SiS_St2HiTVData; struct SiS_TVData* SiS_St1HiTVData; struct SiS_TVData* SiS_St750pData; struct SiS_TVData* SiS_St525pData; struct SiS_TVData* SiS_St525iData; struct SiS_TVData* SiS_StNTSCData; struct SiS_TVData* SiS_Ext750pData; struct SiS_TVData* SiS_Ext525pData; struct SiS_TVData* SiS_Ext525iData; struct SiS_TVData* SiS_ExtNTSCData; struct SiS_TVData* SiS_ExtPALData; struct SiS_TVData* SiS_ExtHiTVData; scalar_t__ SiS_NeedRomModeData; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; } ;
struct SiS_LCDData {int RVBHCMAX; int RVBHCFACT; unsigned short VGAHT; unsigned char VGAVT; unsigned short LCDHT; unsigned char LCDVT; } ;
struct TYPE_4__ {unsigned short Ext_ModeFlag; unsigned short Ext_RESINFO; short ROMMODEIDX661; } ;
struct TYPE_3__ {unsigned short St_ModeFlag; unsigned short St_ResInfo; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char* FUNC_0 (struct SiS_Private*) ;
 unsigned short VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned short FUNC_1 (int) ;
 int VAR_11 ;
 unsigned short VAR_12 ;
 unsigned short VAR_13 ;
 unsigned short VAR_14 ;
 unsigned short VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct SiS_LCDData* VAR_22 ;
 int FUNC_2 (struct SiS_Private*,unsigned short,unsigned short,unsigned short,unsigned short*,unsigned short*) ;
 int FUNC_3 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_4 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 unsigned short VAR_23 ;
 unsigned char VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_5 (int ,int ,char*,unsigned short,unsigned short) ;

__attribute__((used)) static void
FUNC_6(struct SiS_Private *VAR_32, unsigned short VAR_33, unsigned short VAR_34,
  unsigned short VAR_35)
{
  unsigned char *VAR_36 = ((void*)0);
  unsigned short VAR_37, VAR_38, VAR_39, VAR_40=0;
  unsigned short VAR_41, VAR_42, VAR_43;
  const struct SiS_LCDData *VAR_44 = ((void*)0);
  const struct SiS_TVData *VAR_45 = ((void*)0);




  if(VAR_33 <= 0x13) {
     VAR_39 = VAR_32->SiS_SModeIDTable[VAR_34].St_ModeFlag;
     VAR_41 = VAR_32->SiS_SModeIDTable[VAR_34].St_ResInfo;
  } else if(VAR_32->UseCustomMode) {
     VAR_39 = VAR_32->CModeFlag;
     VAR_41 = 0;
  } else {
     VAR_39 = VAR_32->SiS_EModeIDTable[VAR_34].Ext_ModeFlag;
     VAR_41 = VAR_32->SiS_EModeIDTable[VAR_34].Ext_RESINFO;
  }

  VAR_32->SiS_NewFlickerMode = 0;
  VAR_32->SiS_RVBHRS = 50;
  VAR_32->SiS_RY1COE = 0;
  VAR_32->SiS_RY2COE = 0;
  VAR_32->SiS_RY3COE = 0;
  VAR_32->SiS_RY4COE = 0;
  VAR_32->SiS_RVBHRS2 = 0;

  FUNC_3(VAR_32,VAR_33,VAR_34);

  if(VAR_32->SiS_VBInfo & VAR_18) {

     if(VAR_32->UseCustomMode) {

 VAR_32->SiS_RVBHCMAX = 1;
 VAR_32->SiS_RVBHCFACT = 1;
 VAR_32->SiS_HDE = VAR_32->SiS_VGAHDE;
 VAR_32->SiS_VDE = VAR_32->SiS_VGAVDE;

 VAR_37 = VAR_32->CHTotal;
 if(VAR_39 & VAR_3) VAR_37 <<= 1;
 VAR_32->SiS_VGAHT = VAR_32->SiS_HT = VAR_37;
 VAR_32->SiS_VGAVT = VAR_32->SiS_VT = VAR_32->CVTotal;

     } else {

 FUNC_4(VAR_32, VAR_33, VAR_34, VAR_35);

     }

  } else if(VAR_32->SiS_VBInfo & VAR_19) {

     FUNC_2(VAR_32,VAR_33,VAR_34,VAR_35,
      &VAR_42,&VAR_43);

     switch(VAR_42) {
 case 2: VAR_45 = VAR_32->SiS_ExtHiTVData; break;
 case 3: VAR_45 = VAR_32->SiS_ExtPALData; break;
 case 4: VAR_45 = VAR_32->SiS_ExtNTSCData; break;
 case 5: VAR_45 = VAR_32->SiS_Ext525iData; break;
 case 6: VAR_45 = VAR_32->SiS_Ext525pData; break;
 case 7: VAR_45 = VAR_32->SiS_Ext750pData; break;
 case 8: VAR_45 = VAR_32->SiS_StPALData; break;
 case 9: VAR_45 = VAR_32->SiS_StNTSCData; break;
 case 10: VAR_45 = VAR_32->SiS_St525iData; break;
 case 11: VAR_45 = VAR_32->SiS_St525pData; break;
 case 12: VAR_45 = VAR_32->SiS_St750pData; break;
 case 13: VAR_45 = VAR_32->SiS_St1HiTVData; break;
 case 14: VAR_45 = VAR_32->SiS_St2HiTVData; break;
 default: VAR_45 = VAR_32->SiS_StPALData; break;
     }

     VAR_32->SiS_RVBHCMAX = (VAR_45+VAR_43)->RVBHCMAX;
     VAR_32->SiS_RVBHCFACT = (VAR_45+VAR_43)->RVBHCFACT;
     VAR_32->SiS_VGAHT = (VAR_45+VAR_43)->VGAHT;
     VAR_32->SiS_VGAVT = (VAR_45+VAR_43)->VGAVT;
     VAR_32->SiS_HDE = (VAR_45+VAR_43)->TVHDE;
     VAR_32->SiS_VDE = (VAR_45+VAR_43)->TVVDE;
     VAR_32->SiS_RVBHRS2 = (VAR_45+VAR_43)->RVBHRS2 & 0x0fff;
     if(VAR_39 & VAR_3) {
 VAR_32->SiS_RVBHRS = (VAR_45+VAR_43)->HALFRVBHRS;
 if(VAR_32->SiS_RVBHRS2) {
    VAR_32->SiS_RVBHRS2 = ((VAR_32->SiS_RVBHRS2 + 3) >> 1) - 3;
    VAR_37 = ((VAR_45+VAR_43)->RVBHRS2 >> 12) & 0x07;
    if((VAR_45+VAR_43)->RVBHRS2 & 0x8000) VAR_32->SiS_RVBHRS2 -= VAR_37;
    else VAR_32->SiS_RVBHRS2 += VAR_37;
 }
     } else {
 VAR_32->SiS_RVBHRS = (VAR_45+VAR_43)->RVBHRS;
     }
     VAR_32->SiS_NewFlickerMode = ((VAR_45+VAR_43)->FlickerMode) << 7;

     if(VAR_32->SiS_VBInfo & VAR_16) {

 if((VAR_41 == VAR_15) ||
    (VAR_41 == VAR_12) ||
    (VAR_41 == VAR_13) ||
    (VAR_41 == VAR_14)) {
    VAR_32->SiS_NewFlickerMode = 0x40;
 }

 if(VAR_32->SiS_VGAVDE == 350) VAR_32->SiS_TVMode |= VAR_28;

 VAR_32->SiS_HT = VAR_1;
 VAR_32->SiS_VT = VAR_2;
 if(VAR_32->SiS_VBInfo & VAR_21) {
    if(VAR_32->SiS_TVMode & VAR_28) {
       VAR_32->SiS_HT = VAR_23;
       VAR_32->SiS_VT = VAR_24;
    }
 }

     } else if(VAR_32->SiS_VBInfo & VAR_20) {

 if(VAR_32->SiS_TVMode & VAR_30) {
    VAR_32->SiS_HT = 1650;
    VAR_32->SiS_VT = 750;
 } else if(VAR_32->SiS_TVMode & VAR_29) {
    VAR_32->SiS_HT = VAR_7;
    if(VAR_32->SiS_TVMode & VAR_25) VAR_32->SiS_HT = VAR_6;
    VAR_32->SiS_VT = VAR_8;
 } else {
    VAR_32->SiS_HT = VAR_7;
    if(VAR_32->SiS_TVMode & VAR_26) VAR_32->SiS_HT = VAR_6;
    VAR_32->SiS_VT = VAR_8;
 }

     } else {

 VAR_32->SiS_RY1COE = (VAR_45+VAR_43)->RY1COE;
 VAR_32->SiS_RY2COE = (VAR_45+VAR_43)->RY2COE;
 VAR_32->SiS_RY3COE = (VAR_45+VAR_43)->RY3COE;
 VAR_32->SiS_RY4COE = (VAR_45+VAR_43)->RY4COE;

 if(VAR_39 & VAR_3) {
    VAR_32->SiS_RY1COE = 0x00;
    VAR_32->SiS_RY2COE = 0xf4;
    VAR_32->SiS_RY3COE = 0x10;
    VAR_32->SiS_RY4COE = 0x38;
 }

 if(!(VAR_32->SiS_TVMode & VAR_27)) {
    VAR_32->SiS_HT = VAR_7;
    if(VAR_32->SiS_TVMode & VAR_26) VAR_32->SiS_HT = VAR_6;
    VAR_32->SiS_VT = VAR_8;
 } else {
    VAR_32->SiS_HT = VAR_9;
    VAR_32->SiS_VT = VAR_10;
 }

     }

  } else if(VAR_32->SiS_VBInfo & VAR_17) {

     VAR_32->SiS_RVBHCMAX = 1;
     VAR_32->SiS_RVBHCFACT = 1;

     if(VAR_32->UseCustomMode) {

 VAR_32->SiS_HDE = VAR_32->SiS_VGAHDE;
 VAR_32->SiS_VDE = VAR_32->SiS_VGAVDE;

 VAR_37 = VAR_32->CHTotal;
 if(VAR_39 & VAR_3) VAR_37 <<= 1;
 VAR_32->SiS_VGAHT = VAR_32->SiS_HT = VAR_37;
 VAR_32->SiS_VGAVT = VAR_32->SiS_VT = VAR_32->CVTotal;

     } else {

 bool VAR_46 = 0;

 if((VAR_32->SiS_LCDInfo & VAR_0) && (!(VAR_32->SiS_LCDInfo & VAR_4))) {

    VAR_32->SiS_VGAHT = VAR_32->PanelHT;
    VAR_32->SiS_VGAVT = VAR_32->PanelVT;
    VAR_32->SiS_HT = VAR_32->PanelHT;
    VAR_32->SiS_VT = VAR_32->PanelVT;
    VAR_46 = 1;

 } else if( (!(VAR_32->SiS_LCDInfo & VAR_0)) && (VAR_40) && (VAR_36) ) {
 }

 if(!VAR_46) {

    FUNC_2(VAR_32,VAR_33,VAR_34,VAR_35,
     &VAR_42,&VAR_43);

    switch(VAR_42) {
       case 138 : VAR_44 = VAR_32->SiS_ExtLCD1024x768Data; break;
       case 138 + 32: VAR_44 = VAR_32->SiS_St2LCD1024x768Data; break;
       case 136 :
       case 136 + 32: VAR_44 = VAR_32->SiS_LCD1280x720Data; break;
       case 135 : VAR_44 = VAR_32->SiS_ExtLCD1280x768_2Data; break;
       case 135 + 32: VAR_44 = VAR_32->SiS_StLCD1280x768_2Data; break;
       case 134 :
       case 134 + 32: VAR_44 = VAR_32->SiS_LCD1280x800Data; break;
       case 133 :
       case 133 + 32: VAR_44 = VAR_32->SiS_LCD1280x800_2Data; break;
       case 132 :
       case 132 + 32: VAR_44 = VAR_32->SiS_LCD1280x854Data; break;
       case 131 :
       case 131 + 32: VAR_44 = VAR_32->SiS_LCD1280x960Data; break;
       case 137 : VAR_44 = VAR_32->SiS_ExtLCD1280x1024Data; break;
       case 137 + 32: VAR_44 = VAR_32->SiS_St2LCD1280x1024Data; break;
       case 130 : VAR_44 = VAR_32->SiS_ExtLCD1400x1050Data; break;
       case 130 + 32: VAR_44 = VAR_32->SiS_StLCD1400x1050Data; break;
       case 129 : VAR_44 = VAR_32->SiS_ExtLCD1600x1200Data; break;
       case 129 + 32: VAR_44 = VAR_32->SiS_StLCD1600x1200Data; break;
       case 128 :
       case 128 + 32: VAR_44 = VAR_32->SiS_LCD1680x1050Data; break;
       case 100 : VAR_44 = VAR_32->SiS_NoScaleData; break;




       default : VAR_44 = VAR_32->SiS_ExtLCD1024x768Data; break;
    }







    VAR_32->SiS_RVBHCMAX = (VAR_44+VAR_43)->RVBHCMAX;
    VAR_32->SiS_RVBHCFACT = (VAR_44+VAR_43)->RVBHCFACT;
    VAR_32->SiS_VGAHT = (VAR_44+VAR_43)->VGAHT;
    VAR_32->SiS_VGAVT = (VAR_44+VAR_43)->VGAVT;
    VAR_32->SiS_HT = (VAR_44+VAR_43)->LCDHT;
    VAR_32->SiS_VT = (VAR_44+VAR_43)->LCDVT;

        }

 VAR_37 = VAR_32->PanelXRes;
 VAR_38 = VAR_32->PanelYRes;

 switch(VAR_32->SiS_LCDResInfo) {
 case 138:
    if(VAR_32->SiS_SetFlag & VAR_5) {
       if(VAR_32->ChipType < VAR_11) {
   if (VAR_32->SiS_VGAVDE == 350) VAR_38 = 560;
   else if(VAR_32->SiS_VGAVDE == 400) VAR_38 = 640;
       }
    } else {
       if (VAR_32->SiS_VGAVDE == 357) VAR_38 = 527;
       else if(VAR_32->SiS_VGAVDE == 420) VAR_38 = 620;
       else if(VAR_32->SiS_VGAVDE == 525) VAR_38 = 775;
       else if(VAR_32->SiS_VGAVDE == 600) VAR_38 = 775;
       else if(VAR_32->SiS_VGAVDE == 350) VAR_38 = 560;
       else if(VAR_32->SiS_VGAVDE == 400) VAR_38 = 640;
    }
    break;
 case 131:
    if (VAR_32->SiS_VGAVDE == 350) VAR_38 = 700;
    else if(VAR_32->SiS_VGAVDE == 400) VAR_38 = 800;
    else if(VAR_32->SiS_VGAVDE == 1024) VAR_38 = 960;
    break;
 case 137:
    if (VAR_32->SiS_VGAVDE == 360) VAR_38 = 768;
    else if(VAR_32->SiS_VGAVDE == 375) VAR_38 = 800;
    else if(VAR_32->SiS_VGAVDE == 405) VAR_38 = 864;
    break;
 case 129:
    if(!(VAR_32->SiS_SetFlag & VAR_5)) {
       if (VAR_32->SiS_VGAVDE == 350) VAR_38 = 875;
       else if(VAR_32->SiS_VGAVDE == 400) VAR_38 = 1000;
    }
    break;
 }

 if(VAR_32->SiS_LCDInfo & VAR_0) {
    VAR_37 = VAR_32->SiS_VGAHDE;
    VAR_38 = VAR_32->SiS_VGAVDE;
 }

 VAR_32->SiS_HDE = VAR_37;
 VAR_32->SiS_VDE = VAR_38;
     }
  }
}
