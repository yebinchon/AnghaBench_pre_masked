
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; int features; int priv_flags; scalar_t__ tx_queue_len; int destructor; int * ethtool_ops; int * netdev_ops; } ;
struct TYPE_4__ {scalar_t__ arp_interval; int mode; } ;
struct bonding {TYPE_2__ params; int vlan_list; struct net_device* dev; int curr_slave_lock; int lock; } ;
struct TYPE_3__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
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
 int FUNC_1 (struct bonding*,int ) ;
 TYPE_2__ VAR_16 ;
 int FUNC_2 (struct net_device*) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 struct bonding* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_17)
{
 struct bonding *VAR_18 = FUNC_4(VAR_17);


 FUNC_5(&VAR_18->lock);
 FUNC_5(&VAR_18->curr_slave_lock);

 VAR_18->params = VAR_16;


 VAR_18->dev = VAR_17;
 FUNC_0(&VAR_18->vlan_list);


 FUNC_2(VAR_17);
 VAR_17->netdev_ops = &VAR_15;
 VAR_17->ethtool_ops = &VAR_14;
 FUNC_1(VAR_18, VAR_18->params.mode);

 VAR_17->destructor = VAR_13;


 VAR_17->tx_queue_len = 0;
 VAR_17->flags |= VAR_1|VAR_3;
 VAR_17->priv_flags |= VAR_0;
 VAR_17->priv_flags &= ~VAR_5;
 FUNC_3(VAR_17)->ext_priv_flags &= ~VAR_4;

 if (VAR_18->params.arp_interval)
  VAR_17->priv_flags |= VAR_2;






 VAR_17->features |= VAR_12;



 VAR_17->features |= VAR_10;




 VAR_17->features |= VAR_11;







 VAR_17->features |= (VAR_9 |
          VAR_8 |
          VAR_7);




 VAR_17->features |= VAR_6;
}
