
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pthread_mutex_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int **,int *) ;

int FUNC_3 (pthread_mutex_t * VAR_7)
{
   register int VAR_8 = 0;
   register pthread_mutex_t VAR_9;
   FUNC_0 (VAR_5);
   VAR_9 = *VAR_7;

   if (VAR_9 == VAR_2)
      VAR_8 = FUNC_2 (VAR_7, ((void*)0));
   else if (VAR_9 == VAR_3)
      VAR_8 = FUNC_2 (VAR_7, &VAR_6);
   else if (VAR_9 == VAR_1)
      VAR_8 = FUNC_2 (VAR_7, &VAR_4);





   else if (VAR_9 == ((void*)0))
      VAR_8 = VAR_0;

   FUNC_1(VAR_5);

   return (VAR_8);
}
