
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SiS_Private {int SiS_P3da; } ;


 unsigned short FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct SiS_Private *VAR_0)
{
   unsigned short VAR_1,VAR_2,VAR_3,VAR_4;

   VAR_2 = 0;
   for(VAR_3 = 0; VAR_3 < 3; VAR_3++) {
     for(VAR_4 = 0; VAR_4 < 100; VAR_4++) {
        VAR_1 = FUNC_0(VAR_0->SiS_P3da);
        if(VAR_2 & 0x01) {
    if((VAR_1 & 0x08)) continue;
    else break;
        } else {
    if(!(VAR_1 & 0x08)) continue;
    else break;
        }
     }
     VAR_2 ^= 0x01;
   }
}
