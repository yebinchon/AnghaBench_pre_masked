
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct veth_priv {scalar_t__ ip_summed; int stats; struct net_device* peer; } ;
struct veth_net_stats {int tx_bytes; int rx_bytes; int rx_dropped; int tx_dropped; int rx_packets; int tx_packets; } ;
struct sk_buff {scalar_t__ ip_summed; int len; } ;
struct net_device {int flags; } ;
typedef int netdev_tx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct veth_priv* FUNC_2 (struct net_device*) ;
 struct veth_net_stats* FUNC_3 (int ,int) ;
 int FUNC_4 () ;

__attribute__((used)) static netdev_tx_t FUNC_5(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct net_device *VAR_6 = ((void*)0);
 struct veth_priv *VAR_7, *VAR_8;
 struct veth_net_stats *VAR_9, *VAR_10;
 int VAR_11, VAR_12;

 VAR_7 = FUNC_2(VAR_5);
 VAR_6 = VAR_7->peer;
 VAR_8 = FUNC_2(VAR_6);

 VAR_12 = FUNC_4();
 VAR_9 = FUNC_3(VAR_7->stats, VAR_12);
 VAR_10 = FUNC_3(VAR_8->stats, VAR_12);

 if (!(VAR_6->flags & VAR_1))
  goto tx_drop;



 if (VAR_4->ip_summed == VAR_0)
  VAR_4->ip_summed = VAR_8->ip_summed;

 VAR_11 = VAR_4->len;
 if (FUNC_0(VAR_6, VAR_4) != VAR_3)
  goto rx_drop;

 VAR_9->tx_bytes += VAR_11;
 VAR_9->tx_packets++;

 VAR_10->rx_bytes += VAR_11;
 VAR_10->rx_packets++;

 return VAR_2;

tx_drop:
 FUNC_1(VAR_4);
 VAR_9->tx_dropped++;
 return VAR_2;

rx_drop:
 VAR_10->rx_dropped++;
 return VAR_2;
}
