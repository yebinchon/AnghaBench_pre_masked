
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ thread_state_t ;
typedef TYPE_1__* task_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int arm_debug_state_t ;
struct TYPE_3__ {int * task_debug; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *,int *,int ) ;

kern_return_t
FUNC_2(task_t VAR_5,
  int VAR_6,
  thread_state_t VAR_7,
  mach_msg_type_number_t *VAR_8)
{
 switch (VAR_6) {
 case 128:
 {
  arm_debug_state_t *VAR_9 = (arm_debug_state_t *) VAR_7;

  if (*VAR_8 != VAR_0) {
   return VAR_3;
  }

  if (VAR_5->task_debug == ((void*)0)) {
   FUNC_0(VAR_7, sizeof(*VAR_9));
  } else {
   FUNC_1((arm_debug_state_t*) VAR_5->task_debug, VAR_9, VAR_1);
  }

  return VAR_4;
 }
 default:
   {
  return VAR_3;
   }

 }
 return VAR_2;
}
