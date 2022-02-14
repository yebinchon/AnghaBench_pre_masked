
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int * ethtool_ops; int * header_ops; int destructor; int * netdev_ops; int priv_flags; } ;
struct TYPE_2__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_6)
{
 FUNC_0(VAR_6);

 VAR_6->priv_flags &= ~VAR_1;
 FUNC_1(VAR_6)->ext_priv_flags &= ~VAR_0;
 VAR_6->netdev_ops = &VAR_5;
 VAR_6->destructor = VAR_2;
 VAR_6->header_ops = &VAR_4,
 VAR_6->ethtool_ops = &VAR_3;
}
