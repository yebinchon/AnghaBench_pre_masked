
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ thread_state_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_6__ {int count; int flavor; } ;
struct TYPE_7__ {TYPE_1__ ash; } ;
typedef TYPE_2__ arm_unified_thread_state_t ;
typedef int arm_saved_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__*,int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*,int ) ;
 int FUNC_4 (int const*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

kern_return_t
FUNC_7(
    thread_state_t VAR_6,
    mach_msg_type_number_t * VAR_7,
    const arm_saved_state_t *VAR_8)
{





 if (*VAR_7 < VAR_4) {
  return FUNC_1(VAR_6, VAR_7, VAR_8);
 }

 arm_unified_thread_state_t *VAR_9 = (arm_unified_thread_state_t *) VAR_6;
 FUNC_0(VAR_9, sizeof(*VAR_9));







 {
  VAR_9->ash.flavor = VAR_0;
  VAR_9->ash.count = VAR_1;
  (void)FUNC_3(VAR_8, FUNC_5(VAR_9));
 }
 *VAR_7 = VAR_4;
 return (VAR_5);
}
