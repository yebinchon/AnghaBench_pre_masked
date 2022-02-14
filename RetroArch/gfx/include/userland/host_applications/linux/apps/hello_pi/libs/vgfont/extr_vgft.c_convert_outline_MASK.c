
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FT_Vector ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int const*,char const*,short) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_2(const FT_Vector *VAR_4, const char *VAR_5, const short *VAR_6, short VAR_7, short VAR_8)
{
   VAR_3 = 0;
   VAR_2 = 0;

   short VAR_9 = 0;
   for (; VAR_7 != 0; ++VAR_6, --VAR_7) {
      short VAR_10 = *VAR_6 + 1;
      FUNC_1(VAR_4 + VAR_9, VAR_5 + VAR_9, VAR_10 - VAR_9);
      VAR_9 = VAR_10;
   }
   FUNC_0(VAR_9 == VAR_8);

   FUNC_0(VAR_3 <= VAR_1);
   FUNC_0(VAR_2 <= VAR_0);
}
