
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int thread_state_t ;
typedef TYPE_1__* task_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_7__ {int active; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

kern_return_t
FUNC_3(
 task_t VAR_3,
 int VAR_4,
 thread_state_t VAR_5,
 mach_msg_type_number_t *VAR_6)
{
 kern_return_t VAR_7;

 if (VAR_3 == VAR_2) {
  return (VAR_1);
 }

 FUNC_1(VAR_3);

 if (!VAR_3->active) {
  FUNC_2(VAR_3);
  return (VAR_0);
 }

 VAR_7 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6);

 FUNC_2(VAR_3);
 return VAR_7;
}
