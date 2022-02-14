
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_SetFlag; int SiS_VGAVDE; scalar_t__ SiS_ModeType; int SiS_VBType; int SiS_VBInfo; scalar_t__ SiS_LCDResInfo; int SiS_PanelXRes; int SiS_PanelYRes; int SiS_HDE; int SiS_VDE; int SiS_Part2Port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_8, unsigned short VAR_9)
{
  unsigned short VAR_10;

  if(!(VAR_8->SiS_SetFlag & VAR_0)) {
     if(VAR_8->SiS_VGAVDE == 525) {
 VAR_10 = 0xc3;
 if(VAR_8->SiS_ModeType <= VAR_1) {
    VAR_10++;
    if(VAR_8->SiS_VBType & VAR_7) VAR_10 += 2;
 }
 FUNC_0(VAR_8->SiS_Part2Port,0x2f,VAR_10);
 FUNC_0(VAR_8->SiS_Part2Port,0x30,0xb3);
     } else if(VAR_8->SiS_VGAVDE == 420) {
 VAR_10 = 0x4d;
 if(VAR_8->SiS_ModeType <= VAR_1) {
    VAR_10++;
    if(VAR_8->SiS_VBType & VAR_7) VAR_10++;
 }
 FUNC_0(VAR_8->SiS_Part2Port,0x2f,VAR_10);
     }
  }

  if(VAR_8->SiS_VBInfo & VAR_3) {
     if(VAR_8->SiS_LCDResInfo == VAR_2) {
 if(VAR_8->SiS_VBType & VAR_6) {
    FUNC_1(VAR_8->SiS_Part2Port,0x1a,0x03);

 }
 VAR_10 = 1;
 if(VAR_9 <= 0x13) VAR_10 = 3;
 FUNC_0(VAR_8->SiS_Part2Port,0x0b,VAR_10);
     }
  }
}
