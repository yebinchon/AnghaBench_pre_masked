
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


typedef int ulong ;
typedef int u_char ;
struct sk_buff {int len; int * data; } ;
struct net_device {int trans_start; } ;
struct concap_proto {TYPE_2__* pops; } ;
typedef int netdev_tx_t ;
struct TYPE_16__ {int flags; scalar_t__ dialwait_timer; scalar_t__ dialstarted; scalar_t__ dialtimeout; scalar_t__ dialwait; int pre_channel; int dialstate; scalar_t__ p_encap; int msn; int pre_device; int l3_proto; int l2_proto; scalar_t__* phone; TYPE_1__* netdev; } ;
typedef TYPE_3__ isdn_net_local ;
struct TYPE_15__ {int (* encap_and_xmit ) (struct concap_proto*,struct sk_buff*) ;} ;
struct TYPE_14__ {struct concap_proto* cprot; } ;
struct TYPE_13__ {int lock; scalar_t__ net_verbose; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_11__* VAR_6 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int *,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,int,int ) ;
 int FUNC_4 (struct sk_buff*,struct net_device*) ;
 int FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct net_device*,struct sk_buff*,char*) ;
 int FUNC_11 (struct net_device*,struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,TYPE_3__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *,int ) ;
 int FUNC_19 (struct concap_proto*,struct sk_buff*) ;
 scalar_t__ FUNC_20 (int ,scalar_t__) ;

__attribute__((used)) static netdev_tx_t
FUNC_21(struct sk_buff *VAR_8, struct net_device *VAR_9)
{
 isdn_net_local *VAR_10 = (isdn_net_local *) FUNC_15(VAR_9);
 {



  FUNC_4(VAR_8, VAR_9);





  if (!(VAR_10->flags & VAR_0)) {
   int VAR_11;

   if (!(FUNC_0(*VAR_10) == VAR_1)) {
    FUNC_10(VAR_9, VAR_8, "dial rejected: interface not in dialmode `auto'");
    FUNC_1(VAR_8);
    return VAR_5;
   }
   if (VAR_10->phone[1]) {
    ulong VAR_12;

    if(VAR_10->dialwait_timer <= 0)
     if(VAR_10->dialstarted > 0 && VAR_10->dialtimeout > 0 && FUNC_20(VAR_7, VAR_10->dialstarted + VAR_10->dialtimeout + VAR_10->dialwait))
      VAR_10->dialwait_timer = VAR_10->dialstarted + VAR_10->dialtimeout + VAR_10->dialwait;

    if(VAR_10->dialwait_timer > 0) {
     if(FUNC_20(VAR_7, VAR_10->dialwait_timer)) {
      FUNC_10(VAR_9, VAR_8, "dial rejected: retry-time not reached");
      FUNC_1(VAR_8);
      return VAR_5;
     } else
      VAR_10->dialwait_timer = 0;
    }

    FUNC_17(&VAR_6->lock, VAR_12);
    if (((VAR_11 =
         FUNC_3(
        VAR_3,
       VAR_10->l2_proto,
       VAR_10->l3_proto,
       VAR_10->pre_device,
        VAR_10->pre_channel,
       VAR_10->msn)
       ) < 0) &&
     ((VAR_11 =
         FUNC_3(
        VAR_3,
       VAR_10->l2_proto,
       VAR_10->l3_proto,
       VAR_10->pre_device,
       VAR_10->pre_channel^1,
       VAR_10->msn)
       ) < 0)) {
     FUNC_18(&VAR_6->lock, VAR_12);
     FUNC_10(VAR_9, VAR_8,
          "No channel");
     FUNC_1(VAR_8);
     return VAR_5;
    }

    if (VAR_6->net_verbose)
     FUNC_8(VAR_8, VAR_10);
    VAR_10->dialstate = 1;

    FUNC_5(VAR_10, VAR_11);
    FUNC_18(&VAR_6->lock, VAR_12);
    FUNC_7();
    FUNC_6(VAR_10);
    return VAR_4;
   } else {
    FUNC_10(VAR_9, VAR_8,
           "No phone number");
    FUNC_1(VAR_8);
    return VAR_5;
   }
  } else {

   VAR_9->trans_start = VAR_7;
   if (!VAR_10->dialstate) {

    int VAR_13;
    VAR_13 = (FUNC_11(VAR_9, VAR_8));
    if(VAR_13) FUNC_16(VAR_9);
    return VAR_13;
   } else
    FUNC_16(VAR_9);
  }
 }
 return VAR_4;
}
