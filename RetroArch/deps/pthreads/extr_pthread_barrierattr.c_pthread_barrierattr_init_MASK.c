
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* pthread_barrierattr_t ;
struct TYPE_3__ {int pshared; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

int FUNC_1 (pthread_barrierattr_t * VAR_2)
{
   int VAR_3 = 0;
   pthread_barrierattr_t VAR_4 = (pthread_barrierattr_t) FUNC_0 (1, sizeof (*VAR_4));

   if (VAR_4 == ((void*)0))
      VAR_3 = VAR_0;
   else
      VAR_4->pshared = VAR_1;

   *VAR_2 = VAR_4;

   return (VAR_3);
}
