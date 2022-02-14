
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
typedef TYPE_1__* pthread_attr_t ;
struct TYPE_4__ {int param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct sched_param const*,int) ;
 scalar_t__ FUNC_1 (TYPE_1__**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4 (pthread_attr_t * VAR_2,
       const struct sched_param *VAR_3)
{
  int VAR_4;

  if (FUNC_1 (VAR_2) != 0 || VAR_3 == ((void*)0))
    {
      return VAR_0;
    }

  VAR_4 = VAR_3->sched_priority;


  if (VAR_4 < FUNC_3 (VAR_1) ||
      VAR_4 > FUNC_2 (VAR_1))
    {
      return VAR_0;
    }

  FUNC_0 (&(*VAR_2)->param, VAR_3, sizeof (*VAR_3));
  return 0;
}
