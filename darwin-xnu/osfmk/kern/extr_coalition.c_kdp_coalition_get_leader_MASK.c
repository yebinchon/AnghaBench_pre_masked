
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int task_t ;
typedef TYPE_2__* coalition_t ;
struct TYPE_4__ {int leader; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__ j; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

task_t FUNC_0(coalition_t VAR_2)
{
 if (!VAR_2)
  return VAR_1;

 if (VAR_2->type == VAR_0) {
  return VAR_2->j.leader;
 }
 return VAR_1;
}
