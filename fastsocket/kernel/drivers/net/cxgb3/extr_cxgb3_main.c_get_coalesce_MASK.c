
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qset_params {int coalesce_usecs; } ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_coalesce {int rx_coalesce_usecs; } ;
struct TYPE_3__ {struct qset_params* qset; } ;
struct TYPE_4__ {TYPE_1__ sge; } ;
struct adapter {TYPE_2__ params; } ;


 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, struct ethtool_coalesce *VAR_1)
{
 struct port_info *VAR_2 = FUNC_0(VAR_0);
 struct adapter *VAR_3 = VAR_2->adapter;
 struct qset_params *VAR_4 = VAR_3->params.sge.qset;

 VAR_1->rx_coalesce_usecs = VAR_4->coalesce_usecs;
 return 0;
}
