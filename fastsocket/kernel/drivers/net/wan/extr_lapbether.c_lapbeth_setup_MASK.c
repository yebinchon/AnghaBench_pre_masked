
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hard_header_len; int mtu; scalar_t__ addr_len; int type; int destructor; int * netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_3)
{
 VAR_3->netdev_ops = &VAR_2;
 VAR_3->destructor = VAR_1;
 VAR_3->type = VAR_0;
 VAR_3->hard_header_len = 3;
 VAR_3->mtu = 1000;
 VAR_3->addr_len = 0;
}
