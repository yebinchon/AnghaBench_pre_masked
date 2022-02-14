
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {scalar_t__ SiS_CustomT; int SiS_VBInfo; int SiS_VBType; int SiS_LCDInfo; scalar_t__ ChipType; int SiS_SetFlag; int SiS_P3d4; TYPE_2__* SiS_EModeIDTable; TYPE_1__* SiS_SModeIDTable; int SiS_P3c4; struct SiS_LVDSCRT1Data* SiS_CHTVCRT1SOPAL; struct SiS_LVDSCRT1Data* SiS_CHTVCRT1OPAL; struct SiS_LVDSCRT1Data* SiS_CHTVCRT1UPAL; struct SiS_LVDSCRT1Data* SiS_CHTVCRT1ONTSC; struct SiS_LVDSCRT1Data* SiS_CHTVCRT1UNTSC; struct SiS_LVDSCRT1Data* SiS_LVDSCRT11024x600_2_H; struct SiS_LVDSCRT1Data* SiS_LVDSCRT11024x600_2; struct SiS_LVDSCRT1Data* SiS_LVDSCRT11024x600_1_H; struct SiS_LVDSCRT1Data* SiS_LVDSCRT11024x600_1; struct SiS_LVDSCRT1Data* SiS_LVDSCRT1640x480_1_H; struct SiS_LVDSCRT1Data* SiS_LVDSCRT1640x480_1; struct SiS_LVDSCRT1Data* SiS_LVDSCRT1320x240_3_H; struct SiS_LVDSCRT1Data* SiS_LVDSCRT1320x240_3; struct SiS_LVDSCRT1Data* SiS_LVDSCRT1320x240_2_H; struct SiS_LVDSCRT1Data* SiS_LVDSCRT1320x240_2; struct SiS_LVDSCRT1Data* SiS_LVDSCRT1320x240_1; scalar_t__ SiS_IF_DEF_LVDS; } ;
struct SiS_LVDSCRT1Data {unsigned short* CR; } ;
struct TYPE_4__ {unsigned short Ext_ModeFlag; } ;
struct TYPE_3__ {unsigned short St_ModeFlag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct SiS_Private*,unsigned short,unsigned short) ;
 int FUNC_1 (struct SiS_Private*,unsigned short,unsigned short,unsigned short,unsigned short*,unsigned short*) ;
 int FUNC_2 (int ,unsigned short const,unsigned short) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,unsigned short) ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_5(struct SiS_Private *VAR_11, unsigned short VAR_12, unsigned short VAR_13,
                unsigned short VAR_14)
{
  unsigned short VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
  const struct SiS_LVDSCRT1Data *VAR_21=((void*)0);
  static const unsigned short VAR_22[] = {
 0x00, 0x02, 0x03, 0x04, 0x05, 0x06,
 0x07, 0x10, 0x11, 0x15, 0x16
  };

  if((VAR_11->SiS_CustomT == VAR_1) ||
     (VAR_11->SiS_CustomT == VAR_0) ||
     (VAR_11->SiS_CustomT == VAR_2) ||
     (VAR_11->SiS_CustomT == VAR_3) )
     return;

  if(VAR_11->SiS_IF_DEF_LVDS) {
     if(!(VAR_11->SiS_VBInfo & VAR_7)) {
        if(!(VAR_11->SiS_VBInfo & VAR_9)) return;
     }
  } else if(VAR_11->SiS_VBType & VAR_10) {
     if(!(VAR_11->SiS_VBInfo & VAR_9)) return;
  } else return;

  if(VAR_11->SiS_LCDInfo & VAR_5) return;

  if(VAR_11->ChipType < VAR_6) {
     if(VAR_11->SiS_SetFlag & VAR_8) return;
  }

  if(!(FUNC_1(VAR_11, VAR_12, VAR_13, VAR_14,
                          &VAR_19, &VAR_20))) {
     return;
  }

  switch(VAR_20) {
    case 50: VAR_21 = VAR_11->SiS_LVDSCRT1320x240_1; break;
    case 14: VAR_21 = VAR_11->SiS_LVDSCRT1320x240_2; break;
    case 15: VAR_21 = VAR_11->SiS_LVDSCRT1320x240_2_H; break;
    case 18: VAR_21 = VAR_11->SiS_LVDSCRT1320x240_3; break;
    case 19: VAR_21 = VAR_11->SiS_LVDSCRT1320x240_3_H; break;
    case 10: VAR_21 = VAR_11->SiS_LVDSCRT1640x480_1; break;
    case 11: VAR_21 = VAR_11->SiS_LVDSCRT1640x480_1_H; break;






    case 80: VAR_21 = VAR_11->SiS_CHTVCRT1UNTSC; break;
    case 81: VAR_21 = VAR_11->SiS_CHTVCRT1ONTSC; break;
    case 82: VAR_21 = VAR_11->SiS_CHTVCRT1UPAL; break;
    case 83: VAR_21 = VAR_11->SiS_CHTVCRT1OPAL; break;
    case 84: VAR_21 = VAR_11->SiS_CHTVCRT1SOPAL; break;
  }

  if(VAR_21) {

     FUNC_3(VAR_11->SiS_P3d4,0x11,0x7f);

     for(VAR_16 = 0; VAR_16 <= 10; VAR_16++) {
        VAR_15 = (VAR_21 + VAR_19)->CR[VAR_16];
        FUNC_2(VAR_11->SiS_P3d4,VAR_22[VAR_16],VAR_15);
     }

     for(VAR_16 = 0x0A, VAR_18 = 11; VAR_16 <= 0x0C; VAR_16++, VAR_18++) {
        VAR_15 = (VAR_21 + VAR_19)->CR[VAR_18];
        FUNC_2(VAR_11->SiS_P3c4,VAR_16,VAR_15);
     }

     VAR_15 = (VAR_21 + VAR_19)->CR[14] & 0xE0;
     FUNC_4(VAR_11->SiS_P3c4,0x0E,0x1f,VAR_15);

     if(VAR_12 <= 0x13) VAR_17 = VAR_11->SiS_SModeIDTable[VAR_13].St_ModeFlag;
     else VAR_17 = VAR_11->SiS_EModeIDTable[VAR_13].Ext_ModeFlag;

     VAR_15 = ((VAR_21 + VAR_19)->CR[14] & 0x01) << 5;
     if(VAR_17 & VAR_4) VAR_15 |= 0x80;
     FUNC_4(VAR_11->SiS_P3d4,0x09,~0x020,VAR_15);

  } else {

     FUNC_0(VAR_11, VAR_12, VAR_13);

  }
}
