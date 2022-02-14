
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int tx_queue_len; int features; int broadcast; int priv_flags; int type; int addr_len; int hard_header_len; int watchdog_timeo; int * header_ops; int * netdev_ops; } ;
struct ipoib_dev_priv {int neigh_reap_task; int ah_reap_task; int restart_task; int flush_heavy; int flush_normal; int flush_light; int carrier_on_task; int mcast_task; int pkey_poll_task; int multicast_list; int dead_ahs; int child_intfs; int path_list; int vlan_mutex; int lock; struct net_device* dev; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct net_device*) ;
 int VAR_22 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int *) ;
 struct ipoib_dev_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int *,int ,int) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct net_device *VAR_23)
{
 struct ipoib_dev_priv *VAR_24 = FUNC_6(VAR_23);

 VAR_23->netdev_ops = &VAR_16;
 VAR_23->header_ops = &VAR_9;

 FUNC_3(VAR_23);

 FUNC_7(VAR_23, &VAR_24->napi, VAR_18, 100);

 VAR_23->watchdog_timeo = VAR_1;

 VAR_23->flags |= VAR_2 | VAR_3;

 VAR_23->hard_header_len = VAR_6;
 VAR_23->addr_len = VAR_5;
 VAR_23->type = VAR_0;
 VAR_23->tx_queue_len = VAR_21 * 2;
 VAR_23->features = (VAR_8 |
        VAR_7);
 VAR_23->priv_flags &= ~VAR_4;

 FUNC_4(VAR_23->broadcast, VAR_22, VAR_5);

 VAR_24->dev = VAR_23;

 FUNC_8(&VAR_24->lock);

 FUNC_5(&VAR_24->vlan_mutex);

 FUNC_1(&VAR_24->path_list);
 FUNC_1(&VAR_24->child_intfs);
 FUNC_1(&VAR_24->dead_ahs);
 FUNC_1(&VAR_24->multicast_list);

 FUNC_0(&VAR_24->pkey_poll_task, VAR_17);
 FUNC_0(&VAR_24->mcast_task, VAR_14);
 FUNC_2(&VAR_24->carrier_on_task, VAR_13);
 FUNC_2(&VAR_24->flush_light, VAR_11);
 FUNC_2(&VAR_24->flush_normal, VAR_12);
 FUNC_2(&VAR_24->flush_heavy, VAR_10);
 FUNC_2(&VAR_24->restart_task, VAR_15);
 FUNC_0(&VAR_24->ah_reap_task, VAR_19);
 FUNC_0(&VAR_24->neigh_reap_task, VAR_20);
}
