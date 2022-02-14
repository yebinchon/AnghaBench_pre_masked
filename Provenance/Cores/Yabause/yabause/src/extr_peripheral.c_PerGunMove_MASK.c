
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int s32 ;
struct TYPE_3__ {int* gunbits; } ;
typedef TYPE_1__ PerGun_struct ;



void FUNC_0(PerGun_struct * VAR_0, s32 VAR_1, s32 VAR_2)
{
   int VAR_3, VAR_4;
   int VAR_5, VAR_6;
   VAR_3 = (*(VAR_0->gunbits+1) << 8) + *(VAR_0->gunbits+2) + (VAR_1 / 4);
   VAR_4 = (*(VAR_0->gunbits+3) << 8) + *(VAR_0->gunbits+4) - (VAR_2 / 4);

   if (VAR_3 < 0)
      VAR_3 = 0;
   else if (VAR_3 >= 320)
      VAR_3 = 319;

   if (VAR_4 < 0)
      VAR_4 = 0;
   else if (VAR_4 >= 224)
      VAR_4 = 223;

   *(VAR_0->gunbits+1) = VAR_3 >> 8;
   *(VAR_0->gunbits+2) = VAR_3;
   *(VAR_0->gunbits+3) = VAR_4 >> 8;
   *(VAR_0->gunbits+4) = VAR_4;
}
