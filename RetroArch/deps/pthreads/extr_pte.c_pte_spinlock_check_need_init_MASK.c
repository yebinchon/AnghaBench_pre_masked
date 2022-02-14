
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * pthread_spinlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int **,int ) ;

int FUNC_3 (pthread_spinlock_t * VAR_4)
{
   int VAR_5 = 0;
   FUNC_0 (VAR_3);
   if (*VAR_4 == VAR_2)
      VAR_5 = FUNC_2 (VAR_4, VAR_1);





   else if (*VAR_4 == ((void*)0))
      VAR_5 = VAR_0;

   FUNC_1(VAR_3);

   return (VAR_5);
}
