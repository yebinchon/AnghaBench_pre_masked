
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
typedef int pthread_mutex_t ;
typedef int pthread_cond_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct timespec const*) ;

int
FUNC_1 (pthread_cond_t * VAR_1,
      pthread_mutex_t * VAR_2,
      const struct timespec *VAR_3)
{
   if (VAR_3 == ((void*)0))
   {
      return VAR_0;
   }

   return (FUNC_0 (VAR_1, VAR_2, VAR_3));
}
