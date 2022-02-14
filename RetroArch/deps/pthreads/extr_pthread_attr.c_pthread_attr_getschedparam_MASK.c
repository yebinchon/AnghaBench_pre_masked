
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sched_param {int dummy; } ;
typedef TYPE_1__* pthread_attr_t ;
struct TYPE_4__ {int param; } ;


 int VAR_0 ;
 int FUNC_0 (struct sched_param*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_1__* const*) ;

int FUNC_2 (const pthread_attr_t * VAR_1,
      struct sched_param *VAR_2)
{
   if (FUNC_1 (VAR_1) != 0 || VAR_2 == ((void*)0))
      return VAR_0;

   FUNC_0 (VAR_2, &(*VAR_1)->param, sizeof (*VAR_2));
   return 0;
}
