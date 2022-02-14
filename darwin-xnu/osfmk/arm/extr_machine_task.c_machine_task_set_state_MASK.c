
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

 int VAR_5 ;
 int FUNC_0 (int *,int *,int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;

kern_return_t
FUNC_3(
  task_t VAR_6,
  int VAR_7,
  thread_state_t VAR_8,
  mach_msg_type_number_t VAR_9)
{
 switch (VAR_7) {
 case 129:
 {
  arm_debug_state_t *VAR_10 = (arm_debug_state_t *) VAR_8;

  if (VAR_9 != VAR_0) {
   return VAR_3;
  }

  if (VAR_6->task_debug == ((void*)0)) {
   VAR_6->task_debug = FUNC_1(VAR_5);
   if (VAR_6->task_debug == ((void*)0))
    return VAR_2;
  }

  FUNC_0(VAR_10, (arm_debug_state_t*) VAR_6->task_debug, VAR_1);

  return VAR_4;
 }
 case 128:
 {
  if (VAR_6->task_debug != ((void*)0)) {
   FUNC_2(VAR_5, VAR_6->task_debug);
   VAR_6->task_debug = ((void*)0);

   return VAR_4;
  }
  return VAR_2;
 }
 default:
   {
  return VAR_3;
   }
 }

 return VAR_2;
}
