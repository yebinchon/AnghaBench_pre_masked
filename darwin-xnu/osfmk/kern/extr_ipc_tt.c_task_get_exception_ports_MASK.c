
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__* thread_state_flavor_array_t ;
typedef TYPE_2__* task_t ;
typedef unsigned int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef scalar_t__* exception_port_array_t ;
typedef int exception_mask_t ;
typedef int* exception_mask_array_t ;
typedef scalar_t__* exception_behavior_array_t ;
struct TYPE_8__ {scalar_t__ itk_self; TYPE_1__* exc_actions; } ;
struct TYPE_7__ {scalar_t__ port; scalar_t__ behavior; scalar_t__ flavor; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

kern_return_t
FUNC_3(
 task_t VAR_8,
 exception_mask_t VAR_9,
 exception_mask_array_t VAR_10,
 mach_msg_type_number_t *VAR_11,
 exception_port_array_t VAR_12,
 exception_behavior_array_t VAR_13,
 thread_state_flavor_array_t VAR_14)
{
 unsigned int VAR_15, VAR_16, VAR_17;

 if (VAR_8 == VAR_7)
  return (VAR_5);

 if (VAR_9 & ~VAR_0)
  return (VAR_5);

 FUNC_1(VAR_8);

 if (VAR_8->itk_self == VAR_3) {
  FUNC_2(VAR_8);

  return (VAR_4);
 }

 VAR_17 = 0;

 for (VAR_15 = VAR_2; VAR_15 < VAR_1; ++VAR_15) {
  if (VAR_9 & (1 << VAR_15)) {
   for (VAR_16 = 0; VAR_16 < VAR_17; ++VAR_16) {




    if ( VAR_8->exc_actions[VAR_15].port == VAR_12[VAR_16] &&
      VAR_8->exc_actions[VAR_15].behavior == VAR_13[VAR_16] &&
      VAR_8->exc_actions[VAR_15].flavor == VAR_14[VAR_16] ) {
     VAR_10[VAR_16] |= (1 << VAR_15);
     break;
    }
   }

   if (VAR_16 == VAR_17) {
    VAR_10[VAR_16] = (1 << VAR_15);
    VAR_12[VAR_16] = FUNC_0(VAR_8->exc_actions[VAR_15].port);
    VAR_13[VAR_16] = VAR_8->exc_actions[VAR_15].behavior;
    VAR_14[VAR_16] = VAR_8->exc_actions[VAR_15].flavor;
    ++VAR_17;
    if (VAR_17 > *VAR_11)
     break;
   }
  }
 }

 FUNC_2(VAR_8);

 *VAR_11 = VAR_17;

 return (VAR_6);
}
