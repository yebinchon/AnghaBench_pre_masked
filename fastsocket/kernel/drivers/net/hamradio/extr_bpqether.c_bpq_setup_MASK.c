
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; int mtu; scalar_t__ hard_header_len; int type; int * header_ops; scalar_t__ flags; int dev_addr; int broadcast; int destructor; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_10)
{
 VAR_10->netdev_ops = &VAR_8;
 VAR_10->destructor = VAR_9;

 FUNC_0(VAR_10->broadcast, &VAR_5, VAR_1);
 FUNC_0(VAR_10->dev_addr, &VAR_6, VAR_1);

 VAR_10->flags = 0;





 VAR_10->type = VAR_0;
 VAR_10->hard_header_len = VAR_4 + VAR_2;
 VAR_10->mtu = VAR_3;
 VAR_10->addr_len = VAR_1;

}
