
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
   u64 VAR_4;
   int VAR_5 = FUNC_3();

   if (FUNC_3() <= VAR_3) {
      VAR_4 = FUNC_0();
      while ((FUNC_0() < VAR_4 + 500) && !FUNC_1()) {
         if (VAR_5 == VAR_0)
            return 0;
      }
      if (VAR_5 == VAR_0)
         return 0;
      if ((VAR_5 < VAR_2) || (VAR_5 > VAR_1)) {
         FUNC_2();
         return 0;
      }
   }

   return 1;
}
