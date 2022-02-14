
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {scalar_t__ ChipType; int SiS_P3c4; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_1, unsigned short VAR_2)
{
   unsigned short VAR_3;

   for(VAR_3 = 0x0A; VAR_3 <= 0x0E; VAR_3++) {
      FUNC_0(VAR_1->SiS_P3c4,VAR_3,0x00);
   }

   if(VAR_1->ChipType >= VAR_0) {
      FUNC_1(VAR_1->SiS_P3c4,0x37,0xFE);
      if(VAR_2 <= 0x13) {
  if(VAR_2 == 0x06 || VAR_2 >= 0x0e) {
     FUNC_0(VAR_1->SiS_P3c4,0x0e,0x20);
  }
      }
   }
}
