
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

 int VAR_7 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;

kern_return_t
FUNC_9(
  task_t VAR_8,
  int VAR_9,
  thread_state_t VAR_10,
  mach_msg_type_number_t VAR_11)
{
 switch (VAR_9) {
 case 131:
 {
  arm_legacy_debug_state_t *VAR_12 = (arm_legacy_debug_state_t *) VAR_10;
  if (FUNC_6(VAR_8) ||
    (VAR_11 != VAR_2) ||
    (!FUNC_3(VAR_12))) {
   return VAR_5;
  }

  if (VAR_8->task_debug == ((void*)0)) {
   VAR_8->task_debug = FUNC_7(VAR_7);
   if (VAR_8->task_debug == ((void*)0))
    return VAR_4;
  }

  FUNC_2(VAR_12, (arm_legacy_debug_state_t *) VAR_8->task_debug, VAR_3);

  return VAR_6;
 }
 case 130:
 {
  arm_debug_state32_t *VAR_13 = (arm_debug_state32_t *) VAR_10;
  if (FUNC_6(VAR_8) ||
    (VAR_11 != VAR_0) ||
    (!FUNC_4(VAR_13))) {
   return VAR_5;
  }

  if (VAR_8->task_debug == ((void*)0)) {
   VAR_8->task_debug = FUNC_7(VAR_7);
   if (VAR_8->task_debug == ((void*)0))
    return VAR_4;
  }

  FUNC_0(VAR_13, (arm_debug_state32_t *) VAR_8->task_debug, VAR_3);

  return VAR_6;
 }
 case 129:
 {
  arm_debug_state64_t *VAR_14 = (arm_debug_state64_t *) VAR_10;

  if ((!FUNC_6(VAR_8)) ||
    (VAR_11 != VAR_1) ||
    (!FUNC_5(VAR_14))) {
   return VAR_5;
  }

  if (VAR_8->task_debug == ((void*)0)) {
   VAR_8->task_debug = FUNC_7(VAR_7);
   if (VAR_8->task_debug == ((void*)0))
    return VAR_4;
  }

  FUNC_1(VAR_14, (arm_debug_state64_t *) VAR_8->task_debug, VAR_3);

  return VAR_6;
 }
 case 128:
 {
  if (VAR_8->task_debug != ((void*)0)) {
   FUNC_8(VAR_7, VAR_8->task_debug);
   VAR_8->task_debug = ((void*)0);

   return VAR_6;
  }
  return VAR_4;
 }
 default:
   {
  return VAR_5;
   }
 }

 return VAR_4;
}
