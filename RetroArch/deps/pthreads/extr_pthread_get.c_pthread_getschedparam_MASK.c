
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
typedef scalar_t__ pthread_t ;
struct TYPE_2__ {int sched_priority; } ;
typedef TYPE_1__ pte_thread_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;

int FUNC_1 (pthread_t VAR_3, int *VAR_4,
      struct sched_param *VAR_5)
{
   int VAR_6;


   VAR_6 = FUNC_0 (VAR_3, 0);
   if (0 != VAR_6)
      return VAR_6;





   if (VAR_4 <= (int *) VAR_1 || VAR_5 == ((void*)0))
      return VAR_0;


   *VAR_4 = VAR_2;







   VAR_5->sched_priority = ((pte_thread_t *)VAR_3)->sched_priority;

   return 0;
}
