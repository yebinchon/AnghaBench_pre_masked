
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned long data; int function; } ;
struct vxlan_dev {int port_min; int port_max; int * fdb_head; struct net_device* dev; int dst_port; TYPE_2__ age_timer; int sock_work; int igmp_leave; int igmp_join; int hash_lock; int next; } ;
struct net_device {int features; int vlan_features; int priv_flags; scalar_t__ tx_queue_len; int destructor; int * netdev_ops; scalar_t__ hard_header_len; } ;
struct TYPE_3__ {int ndo_fdb_dump; int ndo_fdb_del; int ndo_fdb_add; int ext_priv_flags; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct net_device*,int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_13 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int*,int*) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_1__* FUNC_9 (struct net_device*) ;
 struct vxlan_dev* FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_24)
{
 struct vxlan_dev *VAR_25 = FUNC_10(VAR_24);
 unsigned int VAR_26;
 int VAR_27, VAR_28;

 FUNC_4(VAR_24);
 FUNC_5(VAR_24);
 VAR_24->hard_header_len = VAR_0 + VAR_12;

 VAR_24->netdev_ops = &VAR_20;
 VAR_24->destructor = VAR_13;
 FUNC_3(VAR_24, &VAR_23);

 VAR_24->tx_queue_len = 0;
 VAR_24->features |= VAR_8;
 VAR_24->features |= VAR_9;
 VAR_24->features |= VAR_11 | VAR_5;
 VAR_24->features |= VAR_10;
 VAR_24->features |= VAR_4;

 VAR_24->vlan_features = VAR_24->features;
 VAR_24->features |= VAR_7 | VAR_6;
 VAR_24->priv_flags &= ~VAR_3;
 FUNC_9(VAR_24)->ext_priv_flags |= VAR_2;
 FUNC_9(VAR_24)->ndo_fdb_add = VAR_15;
 FUNC_9(VAR_24)->ndo_fdb_del = VAR_16;
 FUNC_9(VAR_24)->ndo_fdb_dump = VAR_17;

 FUNC_1(&VAR_25->next);
 FUNC_11(&VAR_25->hash_lock);
 FUNC_2(&VAR_25->igmp_join, VAR_18);
 FUNC_2(&VAR_25->igmp_leave, VAR_19);
 FUNC_2(&VAR_25->sock_work, VAR_22);

 FUNC_8(&VAR_25->age_timer);
 VAR_25->age_timer.function = VAR_14;
 VAR_25->age_timer.data = (unsigned long) VAR_25;

 FUNC_7(&VAR_27, &VAR_28);
 VAR_25->port_min = VAR_27;
 VAR_25->port_max = VAR_28;
 VAR_25->dst_port = FUNC_6(VAR_21);

 VAR_25->dev = VAR_24;

 for (VAR_26 = 0; VAR_26 < VAR_1; ++VAR_26)
  FUNC_0(&VAR_25->fdb_head[VAR_26]);
}
