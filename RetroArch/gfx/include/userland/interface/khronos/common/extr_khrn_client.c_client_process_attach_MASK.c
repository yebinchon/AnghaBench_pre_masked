
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ KHR_STATUS_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

bool FUNC_5()
{
   KHR_STATUS_T VAR_5;
   VAR_5 = FUNC_3(&VAR_2);
   if (VAR_5 != VAR_0) {
      return 0;
   }
   VAR_5 = FUNC_1(&VAR_1);

   if (VAR_5 != VAR_0) {
      FUNC_4(VAR_2);
      return 0;
   }
   if (!FUNC_0()) {
      FUNC_2(&VAR_1);
      FUNC_4(VAR_2);
      return 0;
   }
   return 1;
}
