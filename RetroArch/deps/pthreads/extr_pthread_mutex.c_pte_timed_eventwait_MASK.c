
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int pte_osSemaphoreHandle ;
typedef scalar_t__ pte_osResult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,unsigned int*) ;
 unsigned int FUNC_1 (struct timespec const*) ;

__attribute__((used)) static int FUNC_2 (pte_osSemaphoreHandle VAR_2, const struct timespec *VAR_3)
{
   unsigned int VAR_4;
   pte_osResult VAR_5;
   int VAR_6;

   if (VAR_3 == ((void*)0))
      VAR_5 = FUNC_0(VAR_2, ((void*)0));
   else
   {



      VAR_4 = FUNC_1 (VAR_3);

      VAR_5 = FUNC_0(VAR_2, &VAR_4);
   }


   if (VAR_5 == VAR_1)
   {
      VAR_6 = VAR_0;
   }
   else
   {
      VAR_6 = 0;
   }

   return VAR_6;

}
