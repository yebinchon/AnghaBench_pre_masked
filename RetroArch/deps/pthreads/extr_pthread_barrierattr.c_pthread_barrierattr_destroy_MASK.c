
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pthread_barrierattr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int
FUNC_1 (pthread_barrierattr_t * VAR_1)
{
   int VAR_2 = 0;

   if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))
      VAR_2 = VAR_0;
   else
   {
      pthread_barrierattr_t VAR_3 = *VAR_1;

      *VAR_1 = ((void*)0);
      FUNC_0 (VAR_3);
   }

   return (VAR_2);
}
