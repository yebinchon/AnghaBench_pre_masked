
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int flags; scalar_t__ tx_queue_len; int addr_len; int hard_header_len; int type; scalar_t__ watchdog_timeo; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_5)
{
 VAR_5->netdev_ops = &VAR_4;

 VAR_5->watchdog_timeo = 0;
 VAR_5->type = VAR_0;
 VAR_5->mtu = 1500;
 VAR_5->hard_header_len = VAR_2;
 VAR_5->addr_len = VAR_1;
 VAR_5->tx_queue_len = 0;
 VAR_5->flags |= VAR_3;
}
