
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int flags; int dev_addr; int broadcast; int * netdev_ops; int * header_ops; int type; scalar_t__ addr_len; scalar_t__ hard_header_len; int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_9)
{

 VAR_9->mtu = VAR_2;
 VAR_9->hard_header_len = 0;
 VAR_9->addr_len = 0;
 VAR_9->type = VAR_0;
 VAR_9->tx_queue_len = 10;
 VAR_9->header_ops = &VAR_7;
 VAR_9->netdev_ops = &VAR_8;


 FUNC_0(VAR_9->broadcast, &VAR_5, VAR_1);
 FUNC_0(VAR_9->dev_addr, &VAR_6, VAR_1);

 VAR_9->flags = VAR_3 | VAR_4;
}
