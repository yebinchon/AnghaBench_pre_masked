
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int * netdev_ops; int tx_queue_len; int type; scalar_t__ addr_len; int hard_header_len; int destructor; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_8)
{
 VAR_8->mtu = VAR_4;
 VAR_8->destructor = VAR_6;
 VAR_8->hard_header_len = VAR_3;
 VAR_8->addr_len = 0;
 VAR_8->type = VAR_0;
 VAR_8->tx_queue_len = VAR_5;
 VAR_8->flags = VAR_2 | VAR_1;
 VAR_8->netdev_ops = &VAR_7;
}
