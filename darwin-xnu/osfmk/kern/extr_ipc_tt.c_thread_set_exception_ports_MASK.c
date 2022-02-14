
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_2__* thread_t ;
typedef scalar_t__ thread_state_flavor_t ;
struct label {int dummy; } ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
typedef int exception_mask_t ;
typedef int exception_behavior_t ;
typedef int boolean_t ;
struct TYPE_10__ {scalar_t__* val; } ;
struct TYPE_13__ {TYPE_1__ sec_token; } ;
struct TYPE_12__ {int behavior; int privileged; scalar_t__ flavor; int port; } ;
struct TYPE_11__ {TYPE_6__* exc_actions; int active; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_8__* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 struct label* FUNC_6 () ;
 int FUNC_7 (struct label*) ;
 scalar_t__ FUNC_8 (TYPE_6__*,struct label*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

kern_return_t
FUNC_11(
 thread_t VAR_9,
 exception_mask_t VAR_10,
 ipc_port_t VAR_11,
 exception_behavior_t VAR_12,
 thread_state_flavor_t VAR_13)
{
 ipc_port_t VAR_14[VAR_1];
 boolean_t VAR_15 = FUNC_2()->sec_token.val[0] == 0;
 register int VAR_16;





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





 FUNC_9(VAR_9);

 if (!VAR_9->active) {
  FUNC_10(VAR_9);

  return (VAR_4);
 }

 if (VAR_9->exc_actions == ((void*)0)) {
  FUNC_5(VAR_9);
 }
 for (VAR_16 = VAR_2; VAR_16 < VAR_1; ++VAR_16) {
  if ((VAR_10 & (1 << VAR_16))



   ) {
   VAR_14[VAR_16] = VAR_9->exc_actions[VAR_16].port;
   VAR_9->exc_actions[VAR_16].port = FUNC_3(VAR_11);
   VAR_9->exc_actions[VAR_16].behavior = VAR_12;
   VAR_9->exc_actions[VAR_16].flavor = VAR_13;
   VAR_9->exc_actions[VAR_16].privileged = VAR_15;
  }
  else
   VAR_14[VAR_16] = VAR_3;
 }

 FUNC_10(VAR_9);





 for (VAR_16 = VAR_2; VAR_16 < VAR_1; ++VAR_16)
  if (FUNC_0(VAR_14[VAR_16]))
   FUNC_4(VAR_14[VAR_16]);

 if (FUNC_0(VAR_11))
  FUNC_4(VAR_11);

 return (VAR_6);
}
