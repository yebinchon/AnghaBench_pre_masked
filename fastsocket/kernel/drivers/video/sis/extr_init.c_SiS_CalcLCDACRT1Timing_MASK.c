
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {unsigned short SiS_VGAHDE; int SiS_LCDInfo; unsigned short CHDisplay; unsigned short CHBlankStart; unsigned short CVDisplay; unsigned short SiS_VGAVDE; unsigned short CVBlankStart; scalar_t__ ChipType; unsigned short SiS_VGAHT; unsigned short PanelHT; unsigned short PanelXRes; unsigned short CHTotal; unsigned short CHBlankEnd; int CHSyncStart; int PanelHRS; int CHSyncEnd; int PanelHRE; unsigned short PanelVT; unsigned short PanelYRes; scalar_t__ SiS_LCDResInfo; unsigned short SiS_VGAVT; unsigned short CVTotal; unsigned short CVBlankEnd; unsigned short CVSyncStart; unsigned short CVSyncEnd; int* CCRT1CRTC; int SiS_P3d4; int SiS_P3c4; scalar_t__ PanelVRE; scalar_t__ PanelVRS; } ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct SiS_Private*,int) ;
 unsigned short FUNC_1 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,unsigned short) ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,char*,int,...) ;

void
FUNC_6(struct SiS_Private *VAR_9, unsigned short VAR_10,
  unsigned short VAR_11)
{
   unsigned short VAR_12, VAR_13, VAR_14 = 0, VAR_15 = 0;
   unsigned short VAR_16 = VAR_9->SiS_VGAHDE;
   int VAR_17, VAR_18;


   if(VAR_9->SiS_LCDInfo & VAR_3) return;

   VAR_12 = FUNC_1(VAR_9, VAR_10, VAR_11);

   if(VAR_12 & VAR_2) VAR_16 >>= 1;

   VAR_9->CHDisplay = VAR_16;
   VAR_9->CHBlankStart = VAR_16;

   VAR_9->CVDisplay = VAR_9->SiS_VGAVDE;
   VAR_9->CVBlankStart = VAR_9->SiS_VGAVDE;

   if(VAR_9->ChipType < VAR_7) {
   } else {
   }
   VAR_9->CHTotal = VAR_9->CHBlankEnd = VAR_14;

   if(VAR_9->ChipType < VAR_7) {
   } else {
   }

   VAR_14 = VAR_9->PanelVT - VAR_9->PanelYRes;
   VAR_13 = VAR_9->SiS_VGAVDE;
   if(VAR_9->SiS_LCDInfo & VAR_0) {
      VAR_13 = VAR_9->PanelYRes;
   } else if(VAR_9->ChipType < VAR_7) {
   }
   VAR_9->CVTotal = VAR_9->CVBlankEnd = VAR_14 + VAR_13;

   VAR_13 = VAR_9->SiS_VGAVDE;
   if(VAR_9->SiS_LCDInfo & VAR_0) {
      VAR_13 += (VAR_9->PanelYRes - VAR_13) >> 1;
   }
   VAR_13 += VAR_9->PanelVRS;
   VAR_9->CVSyncStart = VAR_13;
   VAR_13 += VAR_9->PanelVRE;
   VAR_9->CVSyncEnd = VAR_13;
   if(VAR_9->ChipType < VAR_7) {
      VAR_9->CVSyncStart--;
      VAR_9->CVSyncEnd--;
   }

   FUNC_0(VAR_9, 8);
   VAR_9->CCRT1CRTC[15] &= ~0xF8;
   VAR_9->CCRT1CRTC[15] |= (VAR_15 << 4);
   VAR_9->CCRT1CRTC[16] &= ~0xE0;

   FUNC_3(VAR_9->SiS_P3d4,0x11,0x7f);

   for(VAR_17 = 0, VAR_18 = 0; VAR_17 <= 7; VAR_17++, VAR_18++) {
      FUNC_2(VAR_9->SiS_P3d4,VAR_18,VAR_9->CCRT1CRTC[VAR_17]);
   }
   for(VAR_18 = 0x10; VAR_17 <= 10; VAR_17++, VAR_18++) {
      FUNC_2(VAR_9->SiS_P3d4,VAR_18,VAR_9->CCRT1CRTC[VAR_17]);
   }
   for(VAR_18 = 0x15; VAR_17 <= 12; VAR_17++, VAR_18++) {
      FUNC_2(VAR_9->SiS_P3d4,VAR_18,VAR_9->CCRT1CRTC[VAR_17]);
   }
   for(VAR_18 = 0x0A; VAR_17 <= 15; VAR_17++, VAR_18++) {
      FUNC_2(VAR_9->SiS_P3c4,VAR_18,VAR_9->CCRT1CRTC[VAR_17]);
   }

   VAR_13 = VAR_9->CCRT1CRTC[16] & 0xE0;
   FUNC_4(VAR_9->SiS_P3c4,0x0E,0x1F,VAR_13);

   VAR_13 = (VAR_9->CCRT1CRTC[16] & 0x01) << 5;
   if(VAR_12 & VAR_1) VAR_13 |= 0x80;
   FUNC_4(VAR_9->SiS_P3d4,0x09,0x5F,VAR_13);
}
