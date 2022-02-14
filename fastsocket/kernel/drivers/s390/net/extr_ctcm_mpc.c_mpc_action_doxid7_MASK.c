
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xid2 {int xid2_option; } ;
struct net_device {struct ctcm_priv* ml_priv; } ;
struct mpc_group {scalar_t__ outstanding_xid7_p2; scalar_t__ roll; int fsm; } ;
struct ctcm_priv {struct channel** channel; struct mpc_group* mpcg; } ;
struct channel {TYPE_2__* xid_skb; TYPE_1__* ccw; int fsm; int xid_skb_data; struct xid2* xid; } ;
typedef int fsm_instance ;
struct TYPE_5__ {scalar_t__ len; int data; } ;
struct TYPE_4__ {void* cmd_code; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,int ,struct channel*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_6(fsm_instance *VAR_14, int VAR_15, void *VAR_16)
{
 struct net_device *VAR_17 = VAR_16;
 struct ctcm_priv *VAR_18 = VAR_17->ml_priv;
 struct mpc_group *VAR_19 = ((void*)0);
 int VAR_20;
 int VAR_21 = 0;

 if (VAR_18)
  VAR_19 = VAR_18->mpcg;
 if (VAR_19 == ((void*)0))
  return;

 for (VAR_20 = VAR_7; VAR_20 <= VAR_9; VAR_20++) {
  struct channel *VAR_22 = VAR_18->channel[VAR_20];
  struct xid2 *VAR_23 = VAR_22->xid;
  VAR_22->xid_skb->data = VAR_22->xid_skb_data;
  FUNC_5(VAR_22->xid_skb);
  VAR_22->xid_skb->len = 0;
  VAR_23->xid2_option = VAR_10;
  VAR_21 = 0;


  if (VAR_19->outstanding_xid7_p2 > 0) {
   if (VAR_19->roll == VAR_11) {
    if (FUNC_1(VAR_22->fsm) == VAR_2) {
     FUNC_2(VAR_22->fsm, VAR_3);
     VAR_22->ccw[8].cmd_code = VAR_0;
     FUNC_3(FUNC_4(VAR_22->xid_skb,
       VAR_8),
            &VAR_12, VAR_8);
     VAR_21 = 1;
    }
   } else if (FUNC_1(VAR_22->fsm) < VAR_3) {
     FUNC_2(VAR_22->fsm, VAR_3);
     VAR_22->ccw[8].cmd_code = VAR_1;
     FUNC_3(FUNC_4(VAR_22->xid_skb,
             VAR_8),
            &VAR_13, VAR_8);
     VAR_21 = 1;
   }
  } else {

   if (VAR_19->roll == VAR_11) {
    if (FUNC_1(VAR_22->fsm) < VAR_5) {
     FUNC_2(VAR_22->fsm, VAR_5);
     FUNC_3(FUNC_4(VAR_22->xid_skb,
             VAR_8),
            &VAR_13, VAR_8);
     VAR_22->ccw[8].cmd_code = VAR_1;
     VAR_21 = 1;
    }
   } else if (FUNC_1(VAR_22->fsm) == VAR_4) {
    FUNC_2(VAR_22->fsm, VAR_5);
    VAR_22->ccw[8].cmd_code = VAR_0;
    FUNC_3(FUNC_4(VAR_22->xid_skb, VAR_8),
      &VAR_12, VAR_8);
    VAR_21 = 1;
   }
  }

  if (VAR_21)
   FUNC_0(VAR_19->fsm, VAR_6, VAR_22);
 }

 return;
}
