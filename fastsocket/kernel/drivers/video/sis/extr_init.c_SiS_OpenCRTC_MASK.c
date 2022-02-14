
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_P3d4; int SiS_ROMNew; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct SiS_Private *VAR_3)
{
   if(VAR_0) {
      FUNC_0(VAR_3->SiS_P3d4,0x51,0x1f);
      if(VAR_1) FUNC_1(VAR_3->SiS_P3d4,0x51,0x20);
      FUNC_0(VAR_3->SiS_P3d4,0x56,0xe7);
   } else if(VAR_2) {
      FUNC_0(VAR_3->SiS_P3d4,0x61,0xf7);
      FUNC_0(VAR_3->SiS_P3d4,0x51,0x1f);
      FUNC_0(VAR_3->SiS_P3d4,0x56,0xe7);
      if(!VAR_3->SiS_ROMNew) {
  FUNC_0(VAR_3->SiS_P3d4,0x3a,0xef);
      }
   }
}
