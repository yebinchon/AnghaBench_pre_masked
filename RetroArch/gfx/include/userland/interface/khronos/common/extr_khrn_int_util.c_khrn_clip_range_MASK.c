
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int32_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int) ;

void FUNC_4(
   int32_t *VAR_0, int32_t *VAR_1,
   int32_t VAR_2, int32_t VAR_3)
{
   int32_t VAR_4;
   int32_t VAR_5;
   int32_t VAR_6;
   int32_t VAR_7;

   FUNC_3((*VAR_1 >= 0) && (VAR_3 >= 0));

   VAR_4 = *VAR_0;
   VAR_5 = *VAR_1;

   VAR_6 = FUNC_0(VAR_4, VAR_5);
   VAR_7 = VAR_2 + VAR_3;

   if (VAR_4 < VAR_2) {
      VAR_4 = VAR_2;
   }
   if (VAR_6 > VAR_7) {
      VAR_6 = VAR_7;
   }

   VAR_5 = FUNC_1(FUNC_2(VAR_6, VAR_4), 0);

   *VAR_0 = (VAR_5 == 0) ? VAR_2 : VAR_4;
   *VAR_1 = VAR_5;
}
