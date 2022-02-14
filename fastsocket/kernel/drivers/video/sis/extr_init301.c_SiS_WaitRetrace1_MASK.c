
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_P3da; int SiS_P3d4; int SiS_P3c4; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct SiS_Private *VAR_0)
{
   unsigned short VAR_1;

   if(FUNC_0(VAR_0->SiS_P3c4,0x1f) & 0xc0) return;
   if(!(FUNC_0(VAR_0->SiS_P3d4,0x17) & 0x80)) return;

   VAR_1 = 65535;
   while((FUNC_1(VAR_0->SiS_P3da) & 0x08) && --VAR_1);
   VAR_1 = 65535;
   while((!(FUNC_1(VAR_0->SiS_P3da) & 0x08)) && --VAR_1);
}
