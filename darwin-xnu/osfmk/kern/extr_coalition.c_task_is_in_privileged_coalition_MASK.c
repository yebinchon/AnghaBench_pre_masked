
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* task_t ;
typedef int boolean_t ;
struct TYPE_5__ {TYPE_1__** coalition; } ;
struct TYPE_4__ {int privileged; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

boolean_t
FUNC_0(task_t VAR_4, int VAR_5)
{
 if (VAR_5 < 0 || VAR_5 > VAR_0)
  return VAR_1;
 if (VAR_3)
  return VAR_2;
 if (!VAR_4->coalition[VAR_5])
  return VAR_1;
 return VAR_4->coalition[VAR_5]->privileged;
}
