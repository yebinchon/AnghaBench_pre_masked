
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int* VAR_0 ;

void FUNC_0(uint8_t *VAR_1, int VAR_2, int VAR_3) {
   uint32_t *VAR_4 = VAR_0;
   int VAR_5;
   for (VAR_5 = 0; VAR_5 < VAR_2 * VAR_3; VAR_5+=1, VAR_1 += 3, ++VAR_4) {




      if (VAR_1[0] <= 0 && VAR_1[1] <= 0 && VAR_1[2] <= 0 && VAR_5 >= VAR_2 && VAR_5 <= VAR_2 * VAR_3 - VAR_2) {
         if (*(VAR_1 + 0 - VAR_2*3) >= ((*VAR_4>> 0&0xFF)-6) && *(VAR_1 + 1 - VAR_2*3) >= ((*VAR_4>> 8&0xFF)-6) && *(VAR_1 + 2 - VAR_2*3) >= ((*VAR_4>>16&0xFF)-6) && *(VAR_1 + 0 - VAR_2*3) <= ((*VAR_4>> 0&0xFF)+6) && *(VAR_1 + 1 - VAR_2*3) <= ((*VAR_4>> 8&0xFF)+6) && *(VAR_1 + 2 - VAR_2*3) <= ((*VAR_4>>16&0xFF)+6)) {





            VAR_1[0] = (*VAR_4>> 0&0xFF);
            VAR_1[1] = (*VAR_4>> 8&0xFF);
            VAR_1[2] = (*VAR_4>>16&0xFF);
         } else {
            VAR_1[0] = (*(VAR_4+VAR_5+VAR_2)>> 0&0xFF);
            VAR_1[1] = (*(VAR_4+VAR_5+VAR_2)>> 8&0xFF);
            VAR_1[2] = (*(VAR_4+VAR_5+VAR_2)>>16&0xFF);
         }
      }
   }
}
