
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct SiS_Private {unsigned short CModeFlag; unsigned short CHDisplay; scalar_t__ ChipType; int CHTotal; unsigned short SiS_VGAHDE; int CHBlankStart; int SiS_VBInfo; int CHBlankEnd; int SiS_VGAHT; int SiS_LCDInfo; short SiS_RVBHRS2; unsigned short CHSyncStart; int CHSyncEnd; int CVTotal; unsigned short SiS_VGAVDE; unsigned short CVDisplay; unsigned short CVBlankStart; int CVBlankEnd; unsigned short SiS_VGAVT; unsigned short CVSyncStart; unsigned short CVSyncEnd; int* CCRT1CRTC; int SiS_Part1Port; scalar_t__ SiS_P3ca; int SiS_P3c4; int SiS_P3d4; TYPE_3__* SiS_RefIndex; TYPE_2__* SiS_EModeIDTable; scalar_t__ UseCustomMode; TYPE_1__* SiS_SModeIDTable; } ;
struct TYPE_6__ {unsigned short XRes; } ;
struct TYPE_5__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_4__ {unsigned short St_ModeFlag; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct SiS_Private*,int ) ;
 int FUNC_1 (int ,int) ;
 unsigned short FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned short const,unsigned short) ;
 int FUNC_4 (int ,unsigned short const,int,unsigned short) ;
 int FUNC_5 (int ,int,int) ;
 int VAR_7 ;
 int FUNC_6 (int ,int ,char*,int,...) ;

__attribute__((used)) static void
FUNC_7(struct SiS_Private *VAR_8, unsigned short VAR_9,unsigned short VAR_10,
                  unsigned short VAR_11)
{
  unsigned short VAR_12, VAR_13, VAR_14, VAR_15, VAR_16=0, VAR_17;
  static const unsigned short VAR_18[] = {

   0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a,

   0x00, 0x0b, 0x17, 0x18, 0x19, 0x00, 0x1a, 0x00,

   0x0c, 0x0d, 0x0e, 0x00, 0x0f, 0x10, 0x11, 0x00
  };

  if(VAR_9 <= 0x13) {
     VAR_13 = VAR_8->SiS_SModeIDTable[VAR_10].St_ModeFlag;
  } else if(VAR_8->UseCustomMode) {
     VAR_13 = VAR_8->CModeFlag;
     VAR_16 = VAR_8->CHDisplay;
  } else {
     VAR_13 = VAR_8->SiS_EModeIDTable[VAR_10].Ext_ModeFlag;
     VAR_16 = VAR_8->SiS_RefIndex[VAR_11].XRes;
  }



  if(VAR_8->ChipType >= VAR_4) {
     if(VAR_16 >= 1600) {
        FUNC_5(VAR_8->SiS_P3c4,0x31,0x04);
     }
  }

  VAR_8->CHTotal = 8224;

  VAR_8->CHDisplay = VAR_8->SiS_VGAHDE;
  if(VAR_13 & VAR_1) VAR_8->CHDisplay >>= 1;

  VAR_8->CHBlankStart = VAR_8->CHDisplay;
  if(VAR_8->SiS_VBInfo & VAR_6) {
     VAR_8->CHBlankStart += 16;
  }

  VAR_8->CHBlankEnd = 32;
  if(VAR_8->SiS_VBInfo & VAR_5) {
     if(VAR_16 == 1600) VAR_8->CHBlankEnd += 80;
  }

  VAR_12 = VAR_8->SiS_VGAHT - 96;
  if(!(VAR_13 & VAR_1)) VAR_12 -= 32;
  if(VAR_8->SiS_LCDInfo & VAR_2) {
     VAR_12 = FUNC_1(VAR_8->SiS_P3d4,0x04);
     VAR_12 |= ((FUNC_1(VAR_8->SiS_P3c4,0x0b) & 0xc0) << 2);
     VAR_12 -= 3;
     VAR_12 <<= 3;
  } else {
     if(VAR_8->SiS_RVBHRS2) VAR_12 = VAR_8->SiS_RVBHRS2;
  }
  VAR_8->CHSyncStart = VAR_12;

  VAR_8->CHSyncEnd = 0xffe8;

  VAR_8->CVTotal = 2049;

  VAR_17 = VAR_8->SiS_VGAVDE;
  if (VAR_17 == 357) VAR_17 = 350;
  else if(VAR_17 == 360) VAR_17 = 350;
  else if(VAR_17 == 375) VAR_17 = 350;
  else if(VAR_17 == 405) VAR_17 = 400;
  else if(VAR_17 == 420) VAR_17 = 400;
  else if(VAR_17 == 525) VAR_17 = 480;
  else if(VAR_17 == 1056) VAR_17 = 1024;
  VAR_8->CVDisplay = VAR_17;

  VAR_8->CVBlankStart = VAR_8->CVDisplay;

  VAR_8->CVBlankEnd = 1;
  if(VAR_9 == 0x3c) VAR_8->CVBlankEnd = 226;

  VAR_12 = (VAR_8->SiS_VGAVT - VAR_17) >> 1;
  VAR_8->CVSyncStart = VAR_17 + VAR_12;

  VAR_12 >>= 3;
  VAR_8->CVSyncEnd = VAR_8->CVSyncStart + VAR_12;

  FUNC_0(VAR_8, 0);
  VAR_8->CCRT1CRTC[16] &= ~0xE0;

  for(VAR_14 = 0; VAR_14 <= 7; VAR_14++) {
     FUNC_3(VAR_8->SiS_Part1Port,VAR_18[VAR_14],VAR_8->CCRT1CRTC[VAR_14]);
  }
  for(VAR_14 = 0x10, VAR_15 = 8; VAR_14 <= 0x12; VAR_14++, VAR_15++) {
     FUNC_3(VAR_8->SiS_Part1Port,VAR_18[VAR_14],VAR_8->CCRT1CRTC[VAR_15]);
  }
  for(VAR_14 = 0x15, VAR_15 = 11; VAR_14 <= 0x16; VAR_14++, VAR_15++) {
     FUNC_3(VAR_8->SiS_Part1Port,VAR_18[VAR_14],VAR_8->CCRT1CRTC[VAR_15]);
  }
  for(VAR_14 = 0x0a, VAR_15 = 13; VAR_14 <= 0x0c; VAR_14++, VAR_15++) {
     FUNC_3(VAR_8->SiS_Part1Port,VAR_18[VAR_14],VAR_8->CCRT1CRTC[VAR_15]);
  }

  VAR_12 = VAR_8->CCRT1CRTC[16] & 0xE0;
  FUNC_4(VAR_8->SiS_Part1Port,VAR_18[0x0E],0x1F,VAR_12);

  VAR_12 = (VAR_8->CCRT1CRTC[16] & 0x01) << 5;
  if(VAR_13 & VAR_0) VAR_12 |= 0x80;
  FUNC_4(VAR_8->SiS_Part1Port,VAR_18[0x09],0x5F,VAR_12);

  VAR_12 = 0;
  VAR_12 |= (FUNC_1(VAR_8->SiS_P3c4,0x01) & 0x01);
  if(VAR_13 & VAR_1) VAR_12 |= 0x08;
  FUNC_3(VAR_8->SiS_Part1Port,0x16,VAR_12);

  FUNC_3(VAR_8->SiS_Part1Port,0x0F,0x00);
  FUNC_3(VAR_8->SiS_Part1Port,0x12,0x00);

  VAR_12 = 0;
  if(VAR_8->SiS_LCDInfo & VAR_3) {
     VAR_12 = (FUNC_1(VAR_8->SiS_Part1Port,0x00) & 0x01) << 7;
  }
  FUNC_3(VAR_8->SiS_Part1Port,0x1A,VAR_12);

  VAR_12 = FUNC_2((VAR_8->SiS_P3ca+0x02));
  FUNC_3(VAR_8->SiS_Part1Port,0x1b,VAR_12);
}
