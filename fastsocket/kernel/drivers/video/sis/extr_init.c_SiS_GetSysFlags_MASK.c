
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_SensibleSR11; int SiS_MyCR63; scalar_t__ ChipType; int SiS_SysFlags; int SiS_P3d4; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static void
FUNC_3(struct SiS_Private *VAR_12)
{
   unsigned char VAR_13, VAR_14, VAR_15;



   VAR_12->SiS_SensibleSR11 = 0;
   VAR_12->SiS_MyCR63 = 0x63;
   if(VAR_12->ChipType >= VAR_7) {
      VAR_12->SiS_MyCR63 = 0x53;
      if(VAR_12->ChipType >= VAR_9) {
         VAR_12->SiS_SensibleSR11 = 1;
      }
   }



   VAR_12->SiS_SysFlags = 0;
   if(VAR_12->ChipType == VAR_8) {
      VAR_13 = FUNC_0(VAR_12->SiS_P3d4,0x5f) & 0xf0;
      FUNC_1(VAR_12->SiS_P3d4,0x5c,0x07);
      VAR_14 = FUNC_0(VAR_12->SiS_P3d4,0x5c) & 0xf8;
      FUNC_2(VAR_12->SiS_P3d4,0x5c,0xf8);
      VAR_15 = FUNC_0(VAR_12->SiS_P3d4,0x5c) & 0xf8;
      if((!VAR_14) || (VAR_15)) {
  switch(VAR_13) {
     case 0x80:
     case 0x90:
     case 0xc0:
        VAR_12->SiS_SysFlags |= VAR_4;
        break;
     case 0xa0:
     case 0xb0:
     case 0xe0:
        VAR_12->SiS_SysFlags |= VAR_2;
        break;
  }
      } else {
  switch(VAR_13) {
     case 0x90:
        VAR_14 = FUNC_0(VAR_12->SiS_P3d4,0x5c) & 0xf8;
        switch(VAR_14) {
    case 0x00: VAR_12->SiS_SysFlags |= VAR_5; break;
    case 0x40: VAR_12->SiS_SysFlags |= VAR_6; break;
    default: VAR_12->SiS_SysFlags |= VAR_4; break;
        }
        break;
     case 0xb0:
        VAR_12->SiS_SysFlags |= VAR_3;
        break;
     default:
        VAR_12->SiS_SysFlags |= VAR_4;
        break;
  }
      }
   }

   if(VAR_12->ChipType >= VAR_10 && VAR_12->ChipType <= VAR_11) {
      if(FUNC_0(VAR_12->SiS_P3d4,0x78) & 0x30) {
         VAR_12->SiS_SysFlags |= VAR_0;
      }
      if(FUNC_0(VAR_12->SiS_P3d4,0x79) & 0xf0) {
         VAR_12->SiS_SysFlags |= VAR_1;
      }
   }
}
