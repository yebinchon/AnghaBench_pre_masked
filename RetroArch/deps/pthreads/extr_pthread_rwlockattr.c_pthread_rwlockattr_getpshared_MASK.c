
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_rwlockattr_t ;
struct TYPE_3__ {int pshared; } ;


 int VAR_0 ;

int
FUNC_0 (const pthread_rwlockattr_t * VAR_1,
      int *VAR_2)
{
   int VAR_3;

   if ((VAR_1 != ((void*)0) && *VAR_1 != ((void*)0)) && (VAR_2 != ((void*)0)))
   {
      *VAR_2 = (*VAR_1)->pshared;
      VAR_3 = 0;
   }
   else
      VAR_3 = VAR_0;

   return (VAR_3);
}
