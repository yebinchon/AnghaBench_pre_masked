
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pthread_t ;
struct TYPE_2__ {scalar_t__ x; } ;
typedef TYPE_1__ pte_thread_t ;



int FUNC_0 (pthread_t VAR_0, pthread_t VAR_1)
{




   int VAR_2 = ( VAR_0 == VAR_1 && ((pte_thread_t*)VAR_0)->x == ((pte_thread_t*)VAR_1)->x );

   return (VAR_2);
}
