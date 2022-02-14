
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef int * processor_set_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

kern_return_t
FUNC_0(
 task_t VAR_3,
 processor_set_t *VAR_4)
{
 if (!VAR_3 || !VAR_3->active)
  return VAR_0;

 *VAR_4 = &VAR_2;

 return VAR_1;
}
