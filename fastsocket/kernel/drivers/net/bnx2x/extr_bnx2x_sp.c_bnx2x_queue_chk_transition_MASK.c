
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct bnx2x_queue_update_params {int update_flags; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ setup; struct bnx2x_queue_update_params update; } ;
struct bnx2x_queue_state_params {int cmd; TYPE_2__ params; int ramrod_flags; } ;
struct bnx2x_queue_sp_obj {int state; int num_tx_only; int pending; int next_state; int next_tx_only; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_queue_cmd { ____Placeholder_bnx2x_queue_cmd } bnx2x_queue_cmd ;
typedef enum bnx2x_q_state { ____Placeholder_bnx2x_q_state } bnx2x_q_state ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int VAR_13 ;





 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct bnx2x *VAR_19,
          struct bnx2x_queue_sp_obj *VAR_20,
          struct bnx2x_queue_state_params *VAR_21)
{
 enum bnx2x_q_state VAR_22 = VAR_20->state, VAR_23 = VAR_13;
 enum bnx2x_queue_cmd VAR_24 = VAR_21->cmd;
 struct bnx2x_queue_update_params *VAR_25 =
   &VAR_21->params.update;
 u8 VAR_26 = VAR_20->num_tx_only;




 if (FUNC_2(VAR_18, &VAR_21->ramrod_flags)) {
  VAR_20->pending = 0;
  VAR_20->next_state = VAR_13;
 }




 if (VAR_20->pending) {
  FUNC_0("Blocking transition since pending was %lx\n",
     VAR_20->pending);
  return -VAR_16;
 }

 switch (VAR_22) {
 case 130:
  if (VAR_24 == VAR_6)
   VAR_23 = 133;

  break;
 case 133:
  if (VAR_24 == VAR_7) {
   if (FUNC_2(VAR_12,
         &VAR_21->params.setup.flags))
    VAR_23 = 135;
   else
    VAR_23 = 134;
  }

  break;
 case 135:
  if (VAR_24 == VAR_3)
   VAR_23 = 134;

  else if ((VAR_24 == VAR_4) ||
    (VAR_24 == VAR_11))
   VAR_23 = 135;

  else if (VAR_24 == VAR_8) {
   VAR_23 = 131;
   VAR_26 = 1;
  }

  else if (VAR_24 == VAR_5)
   VAR_23 = 129;

  else if (VAR_24 == VAR_10) {



   if (FUNC_2(VAR_15,
         &VAR_25->update_flags) &&
       !FUNC_2(VAR_14,
          &VAR_25->update_flags))
    VAR_23 = 134;
   else
    VAR_23 = 135;
  }

  break;
 case 131:
  if (VAR_24 == VAR_9)
   VAR_23 = 132;

  else if (VAR_24 == VAR_8) {
   VAR_23 = 131;
   VAR_26 = VAR_20->num_tx_only + 1;
  }

  else if ((VAR_24 == VAR_4) ||
    (VAR_24 == VAR_11))
   VAR_23 = 131;

  else if (VAR_24 == VAR_10) {



   if (FUNC_2(VAR_15,
         &VAR_25->update_flags) &&
       !FUNC_2(VAR_14,
          &VAR_25->update_flags))
    VAR_23 = 134;
   else
    VAR_23 = 131;
  }

  break;
 case 132:
  if (VAR_24 == VAR_2) {
   VAR_26 = VAR_20->num_tx_only - 1;
   if (VAR_26 == 0)
    VAR_23 = 135;
   else
    VAR_23 = 131;
  }

  break;
 case 134:
  if (VAR_24 == VAR_1)
   VAR_23 = 135;

  else if ((VAR_24 == VAR_4) ||
    (VAR_24 == VAR_11))
   VAR_23 = 134;

  else if (VAR_24 == VAR_5)
   VAR_23 = 129;

  else if (VAR_24 == VAR_10) {



   if (FUNC_2(VAR_15,
         &VAR_25->update_flags) &&
       FUNC_2(VAR_14,
         &VAR_25->update_flags)){
    if (VAR_20->num_tx_only == 0)
     VAR_23 = 135;
    else
     VAR_23 = 131;
   } else
    VAR_23 = 134;
  }

  break;
 case 129:
  if (VAR_24 == VAR_9)
   VAR_23 = 128;

  break;
 case 128:
  if (VAR_24 == VAR_2)
   VAR_23 = 130;

  break;
 default:
  FUNC_0("Illegal state: %d\n", VAR_22);
 }


 if (VAR_23 != VAR_13) {
  FUNC_1(VAR_0, "Good state transition: %d(%d)->%d\n",
     VAR_22, VAR_24, VAR_23);
  VAR_20->next_state = VAR_23;
  VAR_20->next_tx_only = VAR_26;
  return 0;
 }

 FUNC_1(VAR_0, "Bad state transition request: %d %d\n", VAR_22, VAR_24);

 return -VAR_17;
}
