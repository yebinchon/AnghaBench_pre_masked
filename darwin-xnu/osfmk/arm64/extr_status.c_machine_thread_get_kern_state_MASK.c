
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
typedef int thread_state_t ;
typedef int thread_flavor_t ;
typedef int mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_2__ {int * cpu_int_state; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *,int *) ;

kern_return_t
FUNC_5(
         thread_t VAR_3,
         thread_flavor_t VAR_4,
         thread_state_t VAR_5,
         mach_msg_type_number_t * VAR_6)
{



 if (VAR_3 != FUNC_0() || FUNC_1()->cpu_int_state == ((void*)0))
  return VAR_0;

 switch (VAR_4) {
 case 130:
 {
  kern_return_t VAR_7 = FUNC_4(VAR_5, VAR_6, FUNC_1()->cpu_int_state);
  if (VAR_7) return VAR_7;
  break;
 }
 case 129:
 {
  kern_return_t VAR_8 = FUNC_2(VAR_5, VAR_6, FUNC_1()->cpu_int_state);
  if (VAR_8) return VAR_8;
  break;
 }
 default:
  return (VAR_1);
 }
 return (VAR_2);
}
