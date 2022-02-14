
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int features; int destructor; int * netdev_ops; int * header_ops; int * ethtool_ops; int priv_flags; int flags; int type; scalar_t__ tx_queue_len; int addr_len; int hard_header_len; } ;


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
 int VAR_16 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_17)
{
 VAR_17->mtu = (16 * 1024) + 20 + 20 + 12;
 VAR_17->hard_header_len = VAR_2;
 VAR_17->addr_len = VAR_1;
 VAR_17->tx_queue_len = 0;
 VAR_17->type = VAR_0;
 VAR_17->flags = VAR_3;
 VAR_17->priv_flags &= ~VAR_4;
 VAR_17->features = VAR_10 | VAR_5
  | VAR_11
  | VAR_9
  | VAR_6
  | VAR_7
  | VAR_8
  | VAR_12;
 VAR_17->ethtool_ops = &VAR_15;
 VAR_17->header_ops = &VAR_13;
 VAR_17->netdev_ops = &VAR_16;
 VAR_17->destructor = VAR_14;
}
