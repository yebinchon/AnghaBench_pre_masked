
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ thread_state_flavor_t ;
struct label {int dummy; } ;
typedef int kern_return_t ;
typedef int ipc_port_t ;
typedef TYPE_1__* host_priv_t ;
typedef int exception_mask_t ;
typedef int exception_behavior_t ;
struct TYPE_10__ {int behavior; scalar_t__ flavor; int port; int * label; } ;
struct TYPE_9__ {TYPE_3__* exc_actions; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_3__*,struct label*) ;
 struct label* FUNC_9 () ;
 struct label* FUNC_10 () ;
 int FUNC_11 (struct label*) ;
 scalar_t__ FUNC_12 (TYPE_3__*,struct label*) ;
 scalar_t__ FUNC_13 (int ,int) ;
 TYPE_1__ VAR_9 ;

kern_return_t
FUNC_14(
 host_priv_t VAR_10,
 exception_mask_t VAR_11,
 ipc_port_t VAR_12,
 exception_behavior_t VAR_13,
 thread_state_flavor_t VAR_14)
{
 int VAR_15;
 ipc_port_t VAR_16[VAR_1];






 if (VAR_10 == VAR_3) {
  return VAR_5;
 }

 if (VAR_11 & ~VAR_0) {
  return VAR_5;
 }

 if (FUNC_0(VAR_12)) {
  switch (VAR_13 & ~VAR_8) {
  case 130:
  case 129:
  case 128:
   break;
  default:
   return VAR_5;
  }
 }






 if (VAR_14 != 0 && !FUNC_1(VAR_14))
  return (VAR_5);
 FUNC_2(VAR_10 == &VAR_9);

 FUNC_4(VAR_10);

 for (VAR_15 = VAR_2; VAR_15 < VAR_1; VAR_15++) {
  if ((VAR_11 & (1 << VAR_15))



   ) {
   VAR_16[VAR_15] = VAR_10->exc_actions[VAR_15].port;

   VAR_10->exc_actions[VAR_15].port =
    FUNC_6(VAR_12);
   VAR_10->exc_actions[VAR_15].behavior = VAR_13;
   VAR_10->exc_actions[VAR_15].flavor = VAR_14;
  } else {
   VAR_16[VAR_15] = VAR_4;
  }
 }




 FUNC_5(VAR_10);





 for (VAR_15 = VAR_2; VAR_15 < VAR_1; VAR_15++) {
  if (FUNC_0(VAR_16[VAR_15]))
   FUNC_7(VAR_16[VAR_15]);






 }
 if (FUNC_0(VAR_12))
  FUNC_7(VAR_12);

        return VAR_7;
}
