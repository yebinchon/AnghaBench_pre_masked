
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int iif; scalar_t__ len; int tc_verd; } ;
struct net_device_stats {int rx_dropped; int rx_bytes; int rx_packets; } ;
struct net_device {scalar_t__ tx_queue_len; int trans_start; struct net_device_stats stats; } ;
struct ifb_private {int tasklet_pending; int ifb_tasklet; int rq; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_3 ;
 struct ifb_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sk_buff*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static netdev_tx_t FUNC_7(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct ifb_private *VAR_6 = FUNC_2(VAR_5);
 struct net_device_stats *VAR_7 = &VAR_5->stats;
 u32 VAR_8 = FUNC_0(VAR_4->tc_verd);

 VAR_7->rx_packets++;
 VAR_7->rx_bytes+=VAR_4->len;

 if (!(VAR_8 & (VAR_1|VAR_0)) || !VAR_4->iif) {
  FUNC_1(VAR_4);
  VAR_7->rx_dropped++;
  return VAR_2;
 }

 if (FUNC_4(&VAR_6->rq) >= VAR_5->tx_queue_len) {
  FUNC_3(VAR_5);
 }

 VAR_5->trans_start = VAR_3;
 FUNC_5(&VAR_6->rq, VAR_4);
 if (!VAR_6->tasklet_pending) {
  VAR_6->tasklet_pending = 1;
  FUNC_6(&VAR_6->ifb_tasklet);
 }

 return VAR_2;
}
