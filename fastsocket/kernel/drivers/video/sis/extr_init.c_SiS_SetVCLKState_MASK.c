
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct SiS_Private {unsigned short CSRClock; scalar_t__ ChipType; int SiS_P3c4; TYPE_1__* SiS_VCLKData; scalar_t__ UseCustomMode; } ;
struct TYPE_2__ {unsigned short CLOCK; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 unsigned short FUNC_1 (struct SiS_Private*,unsigned short,unsigned short,unsigned short) ;
 int FUNC_2 (int ,int,unsigned short) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,unsigned short) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_5(struct SiS_Private *VAR_5, unsigned short VAR_6,
  unsigned short VAR_7, unsigned short VAR_8)
{
   unsigned short VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;

   if(VAR_6 > 0x13) {
      if(VAR_5->UseCustomMode) {
         VAR_10 = VAR_5->CSRClock;
      } else {
         VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_8, VAR_7);
         VAR_10 = VAR_5->SiS_VCLKData[VAR_11].CLOCK;
      }
   }

   if(VAR_5->ChipType < VAR_0) {
   } else if(VAR_5->ChipType < VAR_4) {
   } else {
   }


   if(VAR_5->ChipType >= VAR_3) {

      FUNC_4(VAR_5->SiS_P3c4,0x07,0xE8,0x10);

   } else {

      VAR_9 = 0x03;
      if(VAR_10 >= 260) VAR_9 = 0x00;
      else if(VAR_10 >= 160) VAR_9 = 0x01;
      else if(VAR_10 >= 135) VAR_9 = 0x02;

      if(VAR_5->ChipType == VAR_2) {
         if((VAR_10 == 203) || (VAR_10 < 234)) VAR_9 = 0x02;
      }

      if(VAR_5->ChipType < VAR_0) {
         FUNC_4(VAR_5->SiS_P3c4,0x07,0xFC,VAR_9);
      } else {
         if(VAR_5->ChipType > VAR_1) {
            if(VAR_6 > 0x13) VAR_9 &= 0xfc;
         }
         FUNC_4(VAR_5->SiS_P3c4,0x07,0xF8,VAR_9);
      }

   }
}
