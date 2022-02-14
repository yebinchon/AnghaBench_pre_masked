
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef scalar_t__ task_t ;
typedef int sfi_class_id_t ;
typedef int boolean_t ;
struct TYPE_3__ {scalar_t__ task; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

sfi_class_id_t FUNC_0(thread_t VAR_3)
{
 task_t VAR_4 = VAR_3->task;
 boolean_t VAR_5 = (VAR_4 == VAR_2);

 if (VAR_5) {
  return VAR_0;
 }

 return VAR_1;
}
