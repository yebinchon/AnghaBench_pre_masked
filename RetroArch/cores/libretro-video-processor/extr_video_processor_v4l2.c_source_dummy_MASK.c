
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ field; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (float,int,int) ;
 float VAR_4 ;
 int* VAR_5 ;
 int FUNC_1 (float) ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

void FUNC_2(int VAR_8, int VAR_9) {
   int VAR_10, VAR_11, VAR_12=0, VAR_13=0, VAR_14=0;
   bool VAR_15 = 0;
   uint8_t *VAR_16 = VAR_5;
   float VAR_17 = VAR_0/64;

   if (VAR_6.field == VAR_3) {
      VAR_14=0;
   } else if (VAR_6.field == VAR_1) {
      VAR_14=1;
   }

   VAR_4 += VAR_17;


   VAR_11 = (FUNC_1(VAR_4)+1)/2*VAR_8;
   if (VAR_6.field == VAR_2) {
      if (VAR_7 == 0)
          VAR_7 = 1;
      VAR_12 = (FUNC_1(VAR_4)+1)/2*VAR_8;
      VAR_4 += VAR_17;
      VAR_13 = (FUNC_1(VAR_4)+1)/2*VAR_8;
   }

   for (VAR_10 = 0; VAR_10 < VAR_8 * VAR_9; VAR_10+=1, VAR_16+=3) {
      float VAR_18 = (FUNC_0((float)(VAR_11 - (VAR_10%VAR_8) + VAR_14)/10, -1, 1)+1)/2;
      VAR_16[0] = 0x10 + VAR_18*0xE0;
      VAR_16[1] = 0x10 + VAR_18*0xE0;
      VAR_16[2] = 0x10 + VAR_18*0xE0;


      if ( ((VAR_10+1) % VAR_8) == 0 ) {
         VAR_11 -= 2;
         VAR_12 -= 1;
         VAR_13 -= 1;
         if (VAR_6.field == VAR_2) {
            if (VAR_15) {
               VAR_11 = VAR_13;
               VAR_15 = 0;
            } else {
               VAR_11 = VAR_12;
               VAR_15 = 1;
            }
         }
      }
   }

   if(VAR_6.field == VAR_3)
      VAR_6.field = VAR_1;
   else if (VAR_6.field == VAR_1)
      VAR_6.field = VAR_3;
}
