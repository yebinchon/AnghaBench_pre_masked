
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int FBCR; int EWRR; int EWLR; int EWDR; } ;
typedef TYPE_1__ Vdp1 ;
struct TYPE_5__ {scalar_t__ manualerase; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(Vdp1* VAR_4, u8 * VAR_5)
{
   int VAR_6,VAR_7;
   int VAR_8,VAR_9;

   if (((VAR_4->FBCR & 2) == 0) || VAR_0.manualerase)
   {
      VAR_9 = (VAR_4->EWRR & 0x1FF) + 1;
      if (VAR_9 > VAR_1) VAR_9 = VAR_1;
      VAR_8 = ((VAR_4->EWRR >> 6) & 0x3F8) + 8;
      if (VAR_8 > VAR_3) VAR_8 = VAR_3;

      if (VAR_2 == 2)
      {
         for (VAR_7 = (VAR_4->EWLR & 0x1FF); VAR_7 < VAR_9; VAR_7++)
         {
            for (VAR_6 = ((VAR_4->EWLR >> 6) & 0x1F8); VAR_6 < VAR_8; VAR_6++)
               ((u16 *)VAR_5)[(VAR_7 * VAR_3) + VAR_6] = VAR_4->EWDR;
         }
      }
      else
      {
         VAR_8 = VAR_4->EWRR >> 9;
         VAR_8 *= 16;

         for (VAR_7 = (VAR_4->EWLR & 0x1FF); VAR_7 < VAR_9; VAR_7++)
         {
            for (VAR_6 = ((VAR_4->EWLR >> 6) & 0x1F8); VAR_6 < VAR_8; VAR_6++)
            {
               int VAR_10 = (VAR_7 * VAR_3) + VAR_6;

               if (VAR_10 < 0x3FFFF)
                  VAR_5[VAR_10] = VAR_4->EWDR & 0xFF;
            }
         }
      }
      VAR_0.manualerase = 0;
   }
}
