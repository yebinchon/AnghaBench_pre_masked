
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ thread_state_flavor_t ;
typedef scalar_t__* thread_state_flavor_array_t ;
struct label {int dummy; } ;
typedef unsigned int mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef scalar_t__ ipc_port_t ;
typedef TYPE_1__* host_priv_t ;
typedef scalar_t__* exception_port_array_t ;
typedef int exception_mask_t ;
typedef int* exception_mask_array_t ;
typedef int exception_behavior_t ;
typedef int* exception_behavior_array_t ;
struct TYPE_9__ {scalar_t__ port; int behavior; scalar_t__ flavor; int * label; } ;
struct TYPE_8__ {TYPE_2__* exc_actions; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_2__*,struct label*) ;
 struct label* FUNC_9 () ;
 struct label* FUNC_10 () ;
 int FUNC_11 (struct label*) ;
 scalar_t__ FUNC_12 (TYPE_2__*,struct label*) ;
 scalar_t__ FUNC_13 (int ,int) ;

kern_return_t
FUNC_14(
 host_priv_t VAR_8,
 exception_mask_t VAR_9,
 ipc_port_t VAR_10,
 exception_behavior_t VAR_11,
 thread_state_flavor_t VAR_12,
 exception_mask_array_t VAR_13,
 mach_msg_type_number_t * VAR_14,
 exception_port_array_t VAR_15,
 exception_behavior_array_t VAR_16,
 thread_state_flavor_array_t VAR_17 )
{
 unsigned int VAR_18,
   VAR_19,
   VAR_20;
 ipc_port_t VAR_21[VAR_1];






 if (VAR_8 == VAR_3)
  return VAR_5;

 if (VAR_9 & ~VAR_0) {
  return VAR_5;
 }

 if (FUNC_0(VAR_10)) {
  switch (VAR_11) {
  case 130:
  case 129:
  case 128:
   break;
  default:
   return VAR_5;
  }
 }

 if (VAR_12 != 0 && !FUNC_1(VAR_12))
  return (VAR_5);
 FUNC_4(VAR_8);

 FUNC_2(VAR_1 > VAR_2);
 for (VAR_20=0, VAR_18 = VAR_2; VAR_18 < VAR_1 && VAR_20 < *VAR_14; VAR_18++) {
  if ((VAR_9 & (1 << VAR_18))



   ) {
   for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {




    if (VAR_8->exc_actions[VAR_18].port == VAR_15[VAR_19] &&
      VAR_8->exc_actions[VAR_18].behavior == VAR_16[VAR_19]
      && VAR_8->exc_actions[VAR_18].flavor == VAR_17[VAR_19])
    {
     VAR_13[VAR_19] |= (1 << VAR_18);
     break;
    }
   }
   if (VAR_19 == VAR_20) {
    VAR_13[VAR_19] = (1 << VAR_18);
    VAR_15[VAR_19] =
    FUNC_6(VAR_8->exc_actions[VAR_18].port);
    VAR_16[VAR_19] = VAR_8->exc_actions[VAR_18].behavior;
    VAR_17[VAR_19] = VAR_8->exc_actions[VAR_18].flavor;
    VAR_20++;
   }
   VAR_21[VAR_18] = VAR_8->exc_actions[VAR_18].port;
   VAR_8->exc_actions[VAR_18].port =
    FUNC_6(VAR_10);
   VAR_8->exc_actions[VAR_18].behavior = VAR_11;
   VAR_8->exc_actions[VAR_18].flavor = VAR_12;
  } else {
   VAR_21[VAR_18] = VAR_4;
  }
 }
 FUNC_5(VAR_8);
 while (--VAR_18 >= VAR_2) {
  if (FUNC_0(VAR_21[VAR_18]))
   FUNC_7(VAR_21[VAR_18]);





 }

 if (FUNC_0(VAR_10))
  FUNC_7(VAR_10);
 *VAR_14 = VAR_20;

 return VAR_7;
}
