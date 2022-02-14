
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int planeh; int planew; int patterndatasize; int patternwh; int addr; } ;
typedef TYPE_1__ vdp2draw_struct ;
typedef int u32 ;
struct TYPE_5__ {int MPOFN; int MPABN0; int MPCDN0; } ;


 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_0(vdp2draw_struct *VAR_1, int VAR_2)
{
   u32 VAR_3 = (VAR_0->MPOFN & 0x7) << 6;
   u32 VAR_4=0;
   int VAR_5;
   int VAR_6;

   switch(VAR_2)
   {
      case 0:
         VAR_4 = VAR_3 | (VAR_0->MPABN0 & 0xFF);
         break;
      case 1:
         VAR_4 = VAR_3 | (VAR_0->MPABN0 >> 8);
         break;
      case 2:
         VAR_4 = VAR_3 | (VAR_0->MPCDN0 & 0xFF);
         break;
      case 3:
         VAR_4 = VAR_3 | (VAR_0->MPCDN0 >> 8);
         break;
   }

   VAR_5 = VAR_1->planeh + VAR_1->planew - 2;
   VAR_6 = VAR_1->planeh * VAR_1->planew;



      if (VAR_1->patterndatasize == 1)
      {
         if (VAR_1->patternwh == 1)
            VAR_1->addr = ((VAR_4 & 0x3F) >> VAR_5) * (VAR_6 * 0x2000);
         else
            VAR_1->addr = (VAR_4 >> VAR_5) * (VAR_6 * 0x800);
      }
      else
      {
         if (VAR_1->patternwh == 1)
            VAR_1->addr = ((VAR_4 & 0x1F) >> VAR_5) * (VAR_6 * 0x4000);
         else
            VAR_1->addr = ((VAR_4 & 0x7F) >> VAR_5) * (VAR_6 * 0x1000);
      }
}
