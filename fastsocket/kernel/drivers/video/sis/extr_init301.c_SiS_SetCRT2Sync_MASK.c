
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {unsigned short CInfoFlag; int SiS_IF_DEF_LVDS; int SiS_VBInfo; int SiS_LCDInfo; scalar_t__ SiS_CustomT; scalar_t__ ChipType; int SiS_VBType; scalar_t__ SiS_LCDResInfo; int SiS_Part2Port; int SiS_Part1Port; scalar_t__ SiS_P3ca; scalar_t__ UseCustomMode; int SiS_P3d4; scalar_t__ SiS_IF_DEF_DSTN; scalar_t__ SiS_IF_DEF_FSTN; scalar_t__ SiS_IF_DEF_TRUMPION; TYPE_1__* SiS_RefIndex; } ;
struct TYPE_2__ {unsigned short Ext_InfoFlag; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned short FUNC_0 (int ,int) ;
 unsigned short FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,int,unsigned short) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void
FUNC_3(struct SiS_Private *VAR_21, unsigned short VAR_22, unsigned short VAR_23)
{
   unsigned short VAR_24=0, VAR_25, VAR_26;

   VAR_25 = 0xC0;

   if(VAR_21->UseCustomMode) {
      VAR_26 = VAR_21->CInfoFlag;
   } else {
      VAR_26 = VAR_21->SiS_RefIndex[VAR_23].Ext_InfoFlag;
   }

   if(VAR_21->SiS_IF_DEF_LVDS == 1) {

      if(VAR_21->SiS_VBInfo & VAR_15) {
  VAR_24 = 0;
      } else if((VAR_21->SiS_VBInfo & VAR_12) && (VAR_21->SiS_LCDInfo & VAR_8)) {
  VAR_24 = VAR_21->SiS_LCDInfo;
      } else VAR_24 = VAR_26 >> 8;
      VAR_24 &= 0xC0;
      VAR_24 |= 0x20;
      if(!(VAR_21->SiS_LCDInfo & VAR_7)) VAR_24 |= 0x10;
      if(VAR_21->SiS_VBInfo & VAR_12) {
  if((VAR_21->SiS_CustomT == VAR_1) ||
     (VAR_21->SiS_CustomT == VAR_0)) {
     VAR_24 |= 0xf0;
  }
  if( (VAR_21->SiS_IF_DEF_FSTN) ||
      (VAR_21->SiS_IF_DEF_DSTN) ||
      (VAR_21->SiS_IF_DEF_TRUMPION) ||
      (VAR_21->SiS_CustomT == VAR_4) ||
      (VAR_21->SiS_CustomT == VAR_5) ) {
     VAR_24 |= 0x30;
  }
  if( (VAR_21->SiS_IF_DEF_FSTN) ||
      (VAR_21->SiS_IF_DEF_DSTN) ) {
     VAR_24 &= ~0xc0;
  }
      }
      if(VAR_21->SiS_VBInfo & VAR_15) {
  if(VAR_21->ChipType >= VAR_11) {
     VAR_24 >>= 3;
     VAR_24 &= 0x18;
     FUNC_2(VAR_21->SiS_Part1Port,0x13,0xE7,VAR_24);

  } else {
     FUNC_2(VAR_21->SiS_Part1Port,0x19,0x0F,0xe0);
  }
      } else {
  FUNC_2(VAR_21->SiS_Part1Port,0x19,0x0F,VAR_24);
      }

   } else if(VAR_21->SiS_VBType & VAR_20) {

      if(VAR_21->ChipType < VAR_11) {
      } else {
      }
   }
}
