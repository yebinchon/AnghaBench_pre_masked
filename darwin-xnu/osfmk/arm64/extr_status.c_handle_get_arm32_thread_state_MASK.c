
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_state_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int arm_thread_state32_t ;
typedef int arm_saved_state_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int const*,int *) ;

kern_return_t
FUNC_2(
    thread_state_t VAR_3,
    mach_msg_type_number_t * VAR_4,
    const arm_saved_state_t *VAR_5)
{
 if (*VAR_4 < VAR_0)
  return (VAR_1);
 if (!FUNC_0(VAR_5))
  return (VAR_1);

 (void)FUNC_1(VAR_5, (arm_thread_state32_t *)VAR_3);
 *VAR_4 = VAR_0;
 return VAR_2;
}
