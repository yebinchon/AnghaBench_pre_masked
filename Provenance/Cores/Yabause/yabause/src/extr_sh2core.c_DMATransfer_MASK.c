
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int IPRA; } ;
struct TYPE_5__ {TYPE_1__ onchip; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_2__*,int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;

void FUNC_9(u32 *VAR_1, u32 *VAR_2, u32 *VAR_3, u32 *VAR_4, u32 *VAR_5)
{
   int VAR_6;
   u32 VAR_7, VAR_8;

   if (!(*VAR_1 & 0x2)) {
      int VAR_9;
      int VAR_10;

      switch(*VAR_1 & 0x3000) {
         case 0x0000: VAR_9 = 0; break;
         case 0x1000: VAR_9 = 1; break;
         case 0x2000: VAR_9 = -1; break;
         default: VAR_9 = 0; break;
      }

      switch(*VAR_1 & 0xC000) {
         case 0x0000: VAR_10 = 0; break;
         case 0x4000: VAR_10 = 1; break;
         case 0x8000: VAR_10 = -1; break;
         default: VAR_10 = 0; break;
      }

      switch (VAR_6 = ((*VAR_1 & 0x0C00) >> 10)) {
         case 0:
            for (VAR_7 = 0; VAR_7 < *VAR_4; VAR_7++) {
               FUNC_3(*VAR_3, FUNC_0(*VAR_2));
               *VAR_2 += VAR_9;
               *VAR_3 += VAR_10;
            }

            *VAR_4 = 0;
            break;
         case 1:
            VAR_10 *= 2;
            VAR_9 *= 2;

            for (VAR_7 = 0; VAR_7 < *VAR_4; VAR_7++) {
               FUNC_5(*VAR_3, FUNC_2(*VAR_2));
               *VAR_2 += VAR_9;
               *VAR_3 += VAR_10;
            }

            *VAR_4 = 0;
            break;
         case 2:
            VAR_10 *= 4;
            VAR_9 *= 4;

            for (VAR_7 = 0; VAR_7 < *VAR_4; VAR_7++) {
               FUNC_4(*VAR_3, FUNC_1(*VAR_2));
               *VAR_3 += VAR_10;
               *VAR_2 += VAR_9;
            }

            *VAR_4 = 0;
            break;
         case 3:
            VAR_10 *= 4;
            VAR_9 *= 4;

            for (VAR_7 = 0; VAR_7 < *VAR_4; VAR_7+=4) {
               for(VAR_8 = 0; VAR_8 < 4; VAR_8++) {
                  FUNC_4(*VAR_3, FUNC_1(*VAR_2));
                  *VAR_3 += VAR_10;
                  *VAR_2 += VAR_9;
               }
            }

            *VAR_4 = 0;
            break;
      }
      FUNC_7(VAR_10<0?*VAR_3:*VAR_3-VAR_7*VAR_10,VAR_7*FUNC_8(VAR_10));
   }

   if (*VAR_1 & 0x4)
      FUNC_6(VAR_0, *VAR_5, (VAR_0->onchip.IPRA & 0xF00) >> 8);


   *VAR_1 |= 0x2;
}
