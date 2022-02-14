
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int* src ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
typedef int* dst ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;

void FUNC_0(uint32_t *VAR_5, uint32_t *VAR_6, int VAR_7, int VAR_8, enum v4l2_field VAR_9, int VAR_10) {
   int VAR_11, VAR_12=0;
   uint32_t VAR_13=0;
   uint32_t *VAR_14 = VAR_2, *VAR_15 = VAR_3, *VAR_16 = VAR_4;


   if (VAR_9 == VAR_1)
      VAR_12 = VAR_7;
   else
      VAR_12 = VAR_7*-1;





   if (VAR_9 == VAR_0) {
      VAR_6 += VAR_7;
      if (VAR_10 == 1) {
         VAR_5 += VAR_7;
         VAR_14 += VAR_7;
         VAR_15 += VAR_7;
         VAR_16 += VAR_7;
      }
   }

   for (VAR_11 = 0; VAR_11 < VAR_7 * VAR_8; VAR_11+=1, VAR_5 += 1, VAR_6 += 1, ++VAR_14, ++VAR_15, ++VAR_16) {





      *(VAR_6) = (*(VAR_5) & 0x00FFFFFF) | (*VAR_6 & 0xFF000000);


      if (VAR_11 >= VAR_7 && VAR_11 <= (VAR_7*VAR_8-VAR_7)) {
         VAR_13=((((*(VAR_6)>> 0&0xFF) + (VAR_13>> 0&0xFF))>>1<<0 | ((*(VAR_6)>> 8&0xFF) + (VAR_13>> 8&0xFF))>>1<<8 | ((*(VAR_6)>>16&0xFF) + (VAR_13>>16&0xFF))>>1<<16) & 0x00FFFFFF) | 0xFE000000;




         if ( ((*(VAR_6 ) & 0xFF000000) == 0xFE000000) || ((*(VAR_6+VAR_12) & 0xFF000000) == 0xFE000000) ) {

            *VAR_6 = VAR_13 | 0xFF000000;
            *(VAR_6+VAR_12) = VAR_13 | 0xFF000000;
         } else {
            if (!(((*(VAR_5+0)>> 0&0xFF) >= ((*(VAR_15+0)>> 0&0xFF)-9) ) && ((*(VAR_5+0)>> 8&0xFF) >= ((*(VAR_15+0)>> 8&0xFF)-9) ) && ((*(VAR_5+0)>>16&0xFF) >= ((*(VAR_15+0)>>16&0xFF)-9) ) && ((*(VAR_5+0)>> 0&0xFF) <= ((*(VAR_15+0)>> 0&0xFF)+9) ) && ((*(VAR_5+0)>> 8&0xFF) <= ((*(VAR_15+0)>> 8&0xFF)+9) ) && ((*(VAR_5+0)>>16&0xFF) <= ((*(VAR_15+0)>>16&0xFF)+9) )) ) {





               *(VAR_6+VAR_12) = VAR_13;
            } else if (!(((*VAR_16>> 0&0xFF) >= ((*VAR_14>> 0&0xFF)-9) ) && ((*VAR_16>> 8&0xFF) >= ((*VAR_14>> 8&0xFF)-9) ) && ((*VAR_16>>16&0xFF) >= ((*VAR_14>>16&0xFF)-9) ) && ((*VAR_16>> 0&0xFF) <= ((*VAR_14>> 0&0xFF)+9) ) && ((*VAR_16>> 8&0xFF) <= ((*VAR_14>> 8&0xFF)+9) ) && ((*VAR_16>>16&0xFF) <= ((*VAR_14>>16&0xFF)+9) ))) {





               *(VAR_6+VAR_12) = VAR_13;
            }
         }
      }





      if ( ((VAR_11+1) % VAR_7) == 0 ) {
         VAR_6 += VAR_7;
         if (VAR_10 == 1) {
            VAR_5 += VAR_7;
            VAR_14 += VAR_7;
            VAR_15 += VAR_7;
            VAR_16 += VAR_7;
         }
      }
   }
}
