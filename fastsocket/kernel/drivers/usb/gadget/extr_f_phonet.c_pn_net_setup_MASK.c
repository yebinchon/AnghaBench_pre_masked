
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int hard_header_len; int addr_len; int tx_queue_len; int * header_ops; int destructor; int * netdev_ops; int * dev_addr; int mtu; int type; scalar_t__ features; } ;


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
 VAR_8->features = 0;
 VAR_8->type = VAR_0;
 VAR_8->flags = VAR_2 | VAR_1;
 VAR_8->mtu = VAR_3;
 VAR_8->hard_header_len = 1;
 VAR_8->dev_addr[0] = VAR_4;
 VAR_8->addr_len = 1;
 VAR_8->tx_queue_len = 1;

 VAR_8->netdev_ops = &VAR_7;
 VAR_8->destructor = VAR_5;
 VAR_8->header_ops = &VAR_6;
}
