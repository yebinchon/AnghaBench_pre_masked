
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; scalar_t__ flags; int dev_addr; int broadcast; int type; int addr_len; int * header_ops; int hard_header_len; int mtu; int destructor; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_9)
{

 VAR_9->netdev_ops = &VAR_8;
 VAR_9->destructor = VAR_6;
 VAR_9->mtu = VAR_3;
 VAR_9->hard_header_len = VAR_2;
 VAR_9->header_ops = &VAR_7;

 VAR_9->addr_len = VAR_1;
 VAR_9->type = VAR_0;
 VAR_9->tx_queue_len = 10;


 FUNC_0(VAR_9->broadcast, &VAR_4, VAR_1);
 FUNC_0(VAR_9->dev_addr, &VAR_5, VAR_1);

 VAR_9->flags = 0;
}
