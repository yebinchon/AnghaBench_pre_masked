
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_mutexattr_t ;
struct TYPE_3__ {int kind; int pshared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;

int FUNC_1 (pthread_mutexattr_t * VAR_3)
{
   int VAR_4 = 0;
   pthread_mutexattr_t VAR_5 = (pthread_mutexattr_t) FUNC_0 (1, sizeof (*VAR_5));

   if (VAR_5 == ((void*)0))
      VAR_4 = VAR_0;
   else
   {
      VAR_5->pshared = VAR_2;
      VAR_5->kind = VAR_1;
   }

   *VAR_3 = VAR_5;

   return (VAR_4);
}
