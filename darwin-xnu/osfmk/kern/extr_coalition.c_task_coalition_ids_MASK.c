
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef TYPE_2__* task_t ;
struct TYPE_5__ {TYPE_1__** coalition; } ;
struct TYPE_4__ {scalar_t__ id; } ;


 int VAR_0 ;

void
FUNC_0(task_t VAR_1, uint64_t VAR_2[VAR_0])
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->coalition[VAR_3])
   VAR_2[VAR_3] = VAR_1->coalition[VAR_3]->id;
  else
   VAR_2[VAR_3] = 0;
 }
}
