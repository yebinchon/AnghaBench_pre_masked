
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;

void FUNC_4(
   int32_t *VAR_0, int32_t *VAR_1, int32_t *VAR_2,
   int32_t VAR_3, int32_t VAR_4,
   int32_t VAR_5, int32_t VAR_6)
{
   int32_t VAR_7;
   int32_t VAR_8;
   int32_t VAR_9;
   int32_t VAR_10;
   int32_t VAR_11;
   int32_t VAR_12;
   int32_t VAR_13;

   FUNC_3((*VAR_2 >= 0) && (VAR_4 >= 0) && (VAR_6 >= 0));

   VAR_7 = *VAR_0;
   VAR_8 = *VAR_1;
   VAR_9 = *VAR_2;

   VAR_9 = FUNC_0(FUNC_1(VAR_7, VAR_8), VAR_9) - FUNC_1(VAR_7, VAR_8);
   VAR_10 = VAR_7 + VAR_9;
   VAR_11 = VAR_8 + VAR_9;
   VAR_12 = VAR_3 + VAR_4;
   VAR_13 = VAR_5 + VAR_6;






   if (VAR_7 < VAR_3) {
      VAR_8 = FUNC_0(VAR_8, FUNC_2(VAR_3, VAR_7));
      VAR_7 = VAR_3;
   }
   if (VAR_10 > VAR_12) {
      VAR_11 = FUNC_2(VAR_11, FUNC_2(VAR_10, VAR_12));
      VAR_10 = VAR_12;
   }

   if (VAR_8 < VAR_5) {
      VAR_7 = FUNC_0(VAR_7, FUNC_2(VAR_5, VAR_8));
      VAR_8 = VAR_5;
   }
   if (VAR_11 > VAR_13) {
      VAR_10 = FUNC_2(VAR_10, FUNC_2(VAR_11, VAR_13));
      VAR_11 = VAR_13;
   }

   VAR_9 = FUNC_1(FUNC_2(VAR_10, VAR_7), 0);
   FUNC_3(VAR_9 == FUNC_1(FUNC_2(VAR_11, VAR_8), 0));

   *VAR_0 = (VAR_9 == 0) ? VAR_3 : VAR_7;
   *VAR_1 = (VAR_9 == 0) ? VAR_5 : VAR_8;
   *VAR_2 = VAR_9;
}
