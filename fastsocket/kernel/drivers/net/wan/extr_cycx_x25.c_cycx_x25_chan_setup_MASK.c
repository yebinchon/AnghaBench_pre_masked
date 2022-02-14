
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ addr_len; scalar_t__ hard_header_len; int type; int mtu; int * header_ops; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_4)
{

 VAR_4->netdev_ops = &VAR_3;
 VAR_4->header_ops = &VAR_2;


 VAR_4->mtu = VAR_1;
 VAR_4->type = VAR_0;
 VAR_4->hard_header_len = 0;
 VAR_4->addr_len = 0;
}
