
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
struct TYPE_6__ {TYPE_1__* map; } ;
struct TYPE_5__ {int pmap; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;

int
FUNC_3(task_t VAR_3)
{
 if (VAR_3 == VAR_2)
  return (0);

 if (VAR_0) {
  if ((FUNC_2() || FUNC_0()) &&
      (unsigned int)FUNC_1(VAR_3->map->pmap) > (VAR_1 / 4))
   return (1);
 }
 return (0);
}
