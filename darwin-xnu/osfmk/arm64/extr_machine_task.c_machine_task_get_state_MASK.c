
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ thread_state_t ;
typedef TYPE_1__* task_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int arm_legacy_debug_state_t ;
typedef int arm_debug_state64_t ;
typedef int arm_debug_state32_t ;
struct TYPE_4__ {int * task_debug; } ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (TYPE_1__*) ;

kern_return_t
FUNC_5(task_t VAR_7,
  int VAR_8,
  thread_state_t VAR_9,
  mach_msg_type_number_t *VAR_10)
{
 switch (VAR_8) {
 case 130:
 {
  arm_legacy_debug_state_t *VAR_11 = (arm_legacy_debug_state_t *) VAR_9;

  if (FUNC_4(VAR_7) || (*VAR_10 != VAR_2)) {
   return VAR_5;
  }

  if (VAR_7->task_debug == ((void*)0)) {
   FUNC_0(VAR_9, sizeof(*VAR_11));
  } else {
   FUNC_3((arm_legacy_debug_state_t*) VAR_7->task_debug, VAR_11, VAR_3);
  }

  return VAR_6;
 }
 case 129:
 {
  arm_debug_state32_t *VAR_12 = (arm_debug_state32_t *) VAR_9;

  if (FUNC_4(VAR_7) || (*VAR_10 != VAR_0)) {
   return VAR_5;
  }

  if (VAR_7->task_debug == ((void*)0)) {
   FUNC_0(VAR_9, sizeof(*VAR_12));
  } else {
   FUNC_1((arm_debug_state32_t*) VAR_7->task_debug, VAR_12, VAR_3);
  }

  return VAR_6;
 }
 case 128:
 {
  arm_debug_state64_t *VAR_13 = (arm_debug_state64_t *) VAR_9;

  if ((!FUNC_4(VAR_7)) || (*VAR_10 != VAR_1)) {
   return VAR_5;
  }

  if (VAR_7->task_debug == ((void*)0)) {
   FUNC_0(VAR_9, sizeof(*VAR_13));
  } else {
   FUNC_2((arm_debug_state64_t*) VAR_7->task_debug, VAR_13, VAR_3);
  }

  return VAR_6;
 }
 default:
   {
  return VAR_5;
   }

 }
 return VAR_4;
}
