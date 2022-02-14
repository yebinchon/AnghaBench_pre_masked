
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int* VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int*,int) ;

bool FUNC_5(uint32_t VAR_6)
{
   while (1)
   {
      uint32_t VAR_7 = 0;

      if (FUNC_4(VAR_5, &VAR_1, sizeof(uint32_t)) != sizeof(uint32_t) ||
          FUNC_4(VAR_5, &VAR_2, sizeof(uint32_t)) != sizeof(uint32_t))
         return 0;

      VAR_1 = FUNC_3(VAR_1);
      VAR_2 = FUNC_3(VAR_2);
      FUNC_0();

      if (FUNC_4(VAR_5, VAR_4, VAR_2) != VAR_2)
         return 0;


      if (VAR_1 == VAR_0)
         continue;


      VAR_7 = FUNC_2(0);
      if (VAR_7)
         VAR_7 -= VAR_3;


      FUNC_1();

      if (VAR_7 > VAR_6)
         break;
   }

   return 1;
}
