
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_P3d4; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (int ,int) ;

__attribute__((used)) static bool
FUNC_1(struct SiS_Private *VAR_1)
{
   unsigned short VAR_2;

   VAR_2 = FUNC_0(VAR_1->SiS_P3d4,0x31);
   if(VAR_2 & (VAR_0 >> 8)) return 1;
   return 0;
}
