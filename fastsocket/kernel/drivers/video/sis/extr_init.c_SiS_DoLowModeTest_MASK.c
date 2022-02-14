
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {scalar_t__ ChipType; int SiS_P3d4; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int,unsigned short) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static bool
FUNC_3(struct SiS_Private *VAR_2, unsigned short VAR_3)
{
   unsigned short VAR_4, VAR_5, VAR_6;

   if((VAR_3 != 0x03) && (VAR_3 != 0x10) && (VAR_3 != 0x12))
      return 1;
   VAR_4 = FUNC_0(VAR_2->SiS_P3d4,0x11);
   FUNC_2(VAR_2->SiS_P3d4,0x11,0x80);
   VAR_5 = FUNC_0(VAR_2->SiS_P3d4,0x00);
   FUNC_1(VAR_2->SiS_P3d4,0x00,0x55);
   VAR_6 = FUNC_0(VAR_2->SiS_P3d4,0x00);
   FUNC_1(VAR_2->SiS_P3d4,0x00,VAR_5);
   FUNC_1(VAR_2->SiS_P3d4,0x11,VAR_4);
   if((VAR_2->ChipType >= VAR_1) ||
      (VAR_2->ChipType == VAR_0)) {
      if(VAR_6 == 0x55) return 0;
      else return 1;
   } else {
      if(VAR_6 != 0x55) return 1;
      else {
  FUNC_2(VAR_2->SiS_P3d4,0x35,0x01);
  return 0;
      }
   }
}
