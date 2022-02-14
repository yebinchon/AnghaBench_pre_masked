
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_state_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int arm_unified_thread_state_t ;
typedef int arm_saved_state_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (scalar_t__ const,scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

kern_return_t
FUNC_8(
    const thread_state_t VAR_3,
    mach_msg_type_number_t VAR_4,
    arm_saved_state_t *VAR_5)
{





 if (VAR_4 < VAR_0) {
  if (!FUNC_3(VAR_5)) {
   return (VAR_1);
  }
  return FUNC_2(VAR_3, VAR_4, VAR_5);
 }

 const arm_unified_thread_state_t *VAR_6 = (const arm_unified_thread_state_t *) VAR_3;
 {
  if (!FUNC_3(VAR_5)) {
   return (VAR_1);
  }
  (void)FUNC_6(FUNC_0(VAR_6), VAR_5);
 }

 return (VAR_2);
}
