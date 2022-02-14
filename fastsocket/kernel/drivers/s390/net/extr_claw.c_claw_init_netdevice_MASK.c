
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int flags; int * netdev_ops; int type; scalar_t__ addr_len; scalar_t__ hard_header_len; int mtu; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int,int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_2(struct net_device * VAR_6)
{
 FUNC_0(2, VAR_5, "init_dev");
 FUNC_1(2, VAR_5, "%s", VAR_6->name);
 VAR_6->mtu = VAR_1;
 VAR_6->hard_header_len = 0;
 VAR_6->addr_len = 0;
 VAR_6->type = VAR_0;
 VAR_6->tx_queue_len = 1300;
 VAR_6->flags = VAR_3 | VAR_2;
 VAR_6->netdev_ops = &VAR_4;
 FUNC_0(2, VAR_5, "initok");
 return;
}
