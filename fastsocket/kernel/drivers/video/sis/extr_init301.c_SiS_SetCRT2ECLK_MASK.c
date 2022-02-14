
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct SiS_Private {unsigned char* VirtualRomBase; int SiS_LCDInfo; scalar_t__ SiS_CustomT; int SiS_VBInfo; int SiS_P3c4; scalar_t__ SiS_UseROM; TYPE_2__* SiS_VCLKData; int SiS_SetFlag; TYPE_1__* SiS_RefIndex; } ;
struct TYPE_4__ {unsigned char SR2B; unsigned char SR2C; } ;
struct TYPE_3__ {int Ext_CRTVCLK; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short FUNC_0 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_1 (int ,unsigned short,unsigned char) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_6, unsigned short VAR_7, unsigned short VAR_8,
           unsigned short VAR_9)
{
  unsigned char *VAR_10 = VAR_6->VirtualRomBase;
  unsigned short VAR_11, VAR_12 = 0;
  unsigned char VAR_13, VAR_14;

  if(VAR_6->SiS_LCDInfo & VAR_2) {
     VAR_6->SiS_SetFlag &= (~VAR_3);
     if(VAR_6->SiS_RefIndex[VAR_9].Ext_CRTVCLK == 2) {
 VAR_9--;
     }
     VAR_12 = FUNC_0(VAR_6, VAR_7, VAR_8,
                                    VAR_9);
     VAR_6->SiS_SetFlag |= VAR_3;
  } else {
     VAR_12 = FUNC_0(VAR_6, VAR_7, VAR_8,
                                    VAR_9);
  }

  VAR_13 = VAR_6->SiS_VCLKData[VAR_12].SR2B;
  VAR_14 = VAR_6->SiS_VCLKData[VAR_12].SR2C;

  if((VAR_6->SiS_CustomT == VAR_1) || (VAR_6->SiS_CustomT == VAR_0)) {
     if(VAR_6->SiS_UseROM) {
 if(VAR_10[0x220] & 0x01) {
    VAR_13 = VAR_10[0x227];
    VAR_14 = VAR_10[0x228];
 }
     }
  }

  VAR_11 = 0x02B;
  if(!(VAR_6->SiS_VBInfo & VAR_4)) {
     if(!(VAR_6->SiS_VBInfo & VAR_5)) {
 VAR_11 += 3;
     }
  }

  FUNC_1(VAR_6->SiS_P3c4,0x31,0x20);
  FUNC_1(VAR_6->SiS_P3c4,VAR_11,VAR_13);
  FUNC_1(VAR_6->SiS_P3c4,VAR_11+1,VAR_14);
  FUNC_1(VAR_6->SiS_P3c4,0x31,0x10);
  FUNC_1(VAR_6->SiS_P3c4,VAR_11,VAR_13);
  FUNC_1(VAR_6->SiS_P3c4,VAR_11+1,VAR_14);
  FUNC_1(VAR_6->SiS_P3c4,0x31,0x00);
  FUNC_1(VAR_6->SiS_P3c4,VAR_11,VAR_13);
  FUNC_1(VAR_6->SiS_P3c4,VAR_11+1,VAR_14);
}
