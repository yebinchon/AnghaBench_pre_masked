
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {scalar_t__ ChipType; int SiS_Part1Port; } ;


 scalar_t__ VAR_0 ;
 unsigned short FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct SiS_Private*) ;

__attribute__((used)) static bool
FUNC_2(struct SiS_Private *VAR_1)
{
   unsigned short VAR_2;

   if(FUNC_1(VAR_1)) {
      VAR_2 = FUNC_0(VAR_1->SiS_Part1Port,0x00);
      if(VAR_1->ChipType < VAR_0) {
 VAR_2 &= 0xa0;
 if((VAR_2 == 0x80) || (VAR_2 == 0x20)) return 1;
      } else {
 VAR_2 &= 0x50;
 if((VAR_2 == 0x40) || (VAR_2 == 0x10)) return 1;
      }
   }
   return 0;
}
