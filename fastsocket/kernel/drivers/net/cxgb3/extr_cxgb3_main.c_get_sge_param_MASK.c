
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qset_params {int * txq_size; int jumbo_size; int rspq_size; int fl_size; } ;
struct port_info {size_t first_qset; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_jumbo_pending; int rx_mini_pending; int rx_pending; int tx_max_pending; int rx_jumbo_max_pending; int rx_max_pending; } ;
struct TYPE_3__ {struct qset_params* qset; } ;
struct TYPE_4__ {TYPE_1__ sge; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3, struct ethtool_ringparam *VAR_4)
{
 struct port_info *VAR_5 = FUNC_0(VAR_3);
 struct adapter *VAR_6 = VAR_5->adapter;
 const struct qset_params *VAR_7 = &VAR_6->params.sge.qset[VAR_5->first_qset];

 VAR_4->rx_max_pending = VAR_0;
 VAR_4->rx_jumbo_max_pending = VAR_1;
 VAR_4->tx_max_pending = VAR_2;

 VAR_4->rx_pending = VAR_7->fl_size;
 VAR_4->rx_mini_pending = VAR_7->rspq_size;
 VAR_4->rx_jumbo_pending = VAR_7->jumbo_size;
 VAR_4->tx_pending = VAR_7->txq_size[0];
}
