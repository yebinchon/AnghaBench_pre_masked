
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ thread_state_flavor_t ;
typedef scalar_t__* thread_state_flavor_array_t ;
typedef TYPE_2__* task_t ;
struct label {int dummy; } ;
typedef unsigned int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_port_t ;
typedef scalar_t__* exception_port_array_t ;
typedef int exception_mask_t ;
typedef int* exception_mask_array_t ;
typedef int exception_behavior_t ;
typedef int* exception_behavior_array_t ;
typedef int boolean_t ;
struct TYPE_9__ {scalar_t__* val; } ;
struct TYPE_12__ {TYPE_1__ sec_token; } ;
struct TYPE_11__ {scalar_t__ port; int behavior; scalar_t__ flavor; int privileged; } ;
struct TYPE_10__ {scalar_t__ itk_self; TYPE_4__* exc_actions; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 TYPE_7__* FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 struct label* FUNC_8 () ;
 int FUNC_9 (struct label*) ;
 scalar_t__ FUNC_10 (TYPE_4__*,struct label*) ;

kern_return_t
FUNC_11(
 task_t VAR_9,
 exception_mask_t VAR_10,
 ipc_port_t VAR_11,
 exception_behavior_t VAR_12,
 thread_state_flavor_t VAR_13,
 exception_mask_array_t VAR_14,
 mach_msg_type_number_t *VAR_15,
 exception_port_array_t VAR_16,
 exception_behavior_array_t VAR_17,
 thread_state_flavor_array_t VAR_18)
{
 ipc_port_t VAR_19[VAR_1];
 boolean_t VAR_20 = FUNC_3()->sec_token.val[0] == 0;
 unsigned int VAR_21, VAR_22, VAR_23;





 if (VAR_9 == VAR_8)
  return (VAR_5);

 if (VAR_10 & ~VAR_0)
  return (VAR_5);

 if (FUNC_0(VAR_11)) {
  switch (VAR_12 & ~VAR_7) {

  case 130:
  case 129:
  case 128:
   break;

  default:
   return (VAR_5);
  }
 }

 if (VAR_13 != 0 && !FUNC_1(VAR_13))
  return (VAR_5);





 FUNC_6(VAR_9);

 if (VAR_9->itk_self == VAR_3) {
  FUNC_7(VAR_9);

  return (VAR_4);
 }

 FUNC_2(VAR_1 > VAR_2);
 for (VAR_23 = 0, VAR_21 = VAR_2; VAR_21 < VAR_1 && VAR_23 < *VAR_15; ++VAR_21) {
  if ((VAR_10 & (1 << VAR_21))



   ) {
   for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {




    if ( VAR_9->exc_actions[VAR_21].port == VAR_16[VAR_22] &&
      VAR_9->exc_actions[VAR_21].behavior == VAR_17[VAR_22] &&
      VAR_9->exc_actions[VAR_21].flavor == VAR_18[VAR_22] ) {
     VAR_14[VAR_22] |= (1 << VAR_21);
     break;
    }
   }

   if (VAR_22 == VAR_23) {
    VAR_14[VAR_22] = (1 << VAR_21);
    VAR_16[VAR_22] = FUNC_4(VAR_9->exc_actions[VAR_21].port);
    VAR_17[VAR_22] = VAR_9->exc_actions[VAR_21].behavior;
    VAR_18[VAR_22] = VAR_9->exc_actions[VAR_21].flavor;
    ++VAR_23;
   }

   VAR_19[VAR_21] = VAR_9->exc_actions[VAR_21].port;

   VAR_9->exc_actions[VAR_21].port = FUNC_4(VAR_11);
   VAR_9->exc_actions[VAR_21].behavior = VAR_12;
   VAR_9->exc_actions[VAR_21].flavor = VAR_13;
   VAR_9->exc_actions[VAR_21].privileged = VAR_20;
  }
  else
   VAR_19[VAR_21] = VAR_3;
 }

 FUNC_7(VAR_9);





 while (--VAR_21 >= VAR_2) {
  if (FUNC_0(VAR_19[VAR_21]))
   FUNC_5(VAR_19[VAR_21]);
 }

 if (FUNC_0(VAR_11))
  FUNC_5(VAR_11);

 *VAR_15 = VAR_23;

 return (VAR_6);
}
