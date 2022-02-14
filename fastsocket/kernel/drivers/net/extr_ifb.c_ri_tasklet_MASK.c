
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {TYPE_1__* dev; int iif; scalar_t__ len; scalar_t__ tc_verd; } ;
struct netdev_queue {int dummy; } ;
struct net_device_stats {int tx_dropped; int tx_bytes; int tx_packets; } ;
struct net_device {int ifindex; struct net_device_stats stats; } ;
struct ifb_private {int tasklet_pending; int ifb_tasklet; int st_rxq_rsch; int rq; int st_rxq_check; int st_rx_frm_ing; int st_rx_frm_egr; int tq; int st_rxq_notenter; int st_rx2tx_tran; int st_rxq_enter; int st_txq_refl_try; int st_task_enter; } ;
struct TYPE_3__ {int hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct netdev_queue*) ;
 int FUNC_4 (struct netdev_queue*) ;
 TYPE_1__* FUNC_5 (int *,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct sk_buff*) ;
 int VAR_2 ;
 struct netdev_queue* FUNC_9 (struct net_device*,int ) ;
 struct ifb_private* FUNC_10 (struct net_device*) ;
 scalar_t__ FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct net_device*) ;
 struct sk_buff* FUNC_14 (int *) ;
 struct sk_buff* FUNC_15 (int *) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (int *,struct sk_buff*) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void FUNC_19(unsigned long VAR_3)
{

 struct net_device *VAR_4 = (struct net_device *)VAR_3;
 struct ifb_private *VAR_5 = FUNC_10(VAR_4);
 struct net_device_stats *VAR_6 = &VAR_4->stats;
 struct netdev_queue *VAR_7;
 struct sk_buff *VAR_8;

 VAR_7 = FUNC_9(VAR_4, 0);
 VAR_5->st_task_enter++;
 if ((VAR_8 = FUNC_15(&VAR_5->tq)) == ((void*)0)) {
  VAR_5->st_txq_refl_try++;
  if (FUNC_3(VAR_7)) {
   VAR_5->st_rxq_enter++;
   while ((VAR_8 = FUNC_14(&VAR_5->rq)) != ((void*)0)) {
    FUNC_17(&VAR_5->tq, VAR_8);
    VAR_5->st_rx2tx_tran++;
   }
   FUNC_4(VAR_7);
  } else {

   VAR_5->st_rxq_notenter++;
   goto resched;
  }
 }

 while ((VAR_8 = FUNC_14(&VAR_5->tq)) != ((void*)0)) {
  u32 VAR_9 = FUNC_1(VAR_8->tc_verd);

  VAR_8->tc_verd = 0;
  VAR_8->tc_verd = FUNC_2(VAR_8->tc_verd);
  VAR_6->tx_packets++;
  VAR_6->tx_bytes +=VAR_8->len;

  VAR_8->dev = FUNC_5(&VAR_2, VAR_8->iif);
  if (!VAR_8->dev) {
   FUNC_6(VAR_8);
   VAR_6->tx_dropped++;
   break;
  }
  FUNC_7(VAR_8->dev);
  VAR_8->iif = VAR_4->ifindex;

  if (VAR_9 & VAR_0) {
   VAR_5->st_rx_frm_egr++;
   FUNC_8(VAR_8);
  } else if (VAR_9 & VAR_1) {
   VAR_5->st_rx_frm_ing++;
   FUNC_16(VAR_8, VAR_8->dev->hard_header_len);
   FUNC_12(VAR_8);
  } else
   FUNC_0();
 }

 if (FUNC_3(VAR_7)) {
  VAR_5->st_rxq_check++;
  if ((VAR_8 = FUNC_15(&VAR_5->rq)) == ((void*)0)) {
   VAR_5->tasklet_pending = 0;
   if (FUNC_11(VAR_4))
    FUNC_13(VAR_4);
  } else {
   VAR_5->st_rxq_rsch++;
   FUNC_4(VAR_7);
   goto resched;
  }
  FUNC_4(VAR_7);
 } else {
resched:
  VAR_5->tasklet_pending = 1;
  FUNC_18(&VAR_5->ifb_tasklet);
 }

}
