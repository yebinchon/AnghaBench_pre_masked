
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct param_range {void* count; int max; int min; } ;
struct TYPE_2__ {struct param_range cbs; struct param_range rfds; } ;
struct nic {int netdev; TYPE_1__ params; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nic*) ;
 int FUNC_1 (struct nic*) ;
 void* FUNC_2 (int ,int ) ;
 void* FUNC_3 (void*,int ) ;
 struct nic* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct nic*,int ,int ,char*,void*,void*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2,
 struct ethtool_ringparam *VAR_3)
{
 struct nic *VAR_4 = FUNC_4(VAR_2);
 struct param_range *VAR_5 = &VAR_4->params.rfds;
 struct param_range *VAR_6 = &VAR_4->params.cbs;

 if ((VAR_3->rx_mini_pending) || (VAR_3->rx_jumbo_pending))
  return -VAR_0;

 if (FUNC_6(VAR_2))
  FUNC_0(VAR_4);
 VAR_5->count = FUNC_2(VAR_3->rx_pending, VAR_5->min);
 VAR_5->count = FUNC_3(VAR_5->count, VAR_5->max);
 VAR_6->count = FUNC_2(VAR_3->tx_pending, VAR_6->min);
 VAR_6->count = FUNC_3(VAR_6->count, VAR_6->max);
 FUNC_5(VAR_4, VAR_1, VAR_4->netdev, "Ring Param settings: rx: %d, tx %d\n",
     VAR_5->count, VAR_6->count);
 if (FUNC_6(VAR_2))
  FUNC_1(VAR_4);

 return 0;
}
