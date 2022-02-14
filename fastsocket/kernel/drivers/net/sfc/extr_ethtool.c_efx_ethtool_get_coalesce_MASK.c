
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_coalesce {unsigned int tx_coalesce_usecs; unsigned int tx_coalesce_usecs_irq; unsigned int rx_coalesce_usecs; unsigned int rx_coalesce_usecs_irq; int use_adaptive_rx_coalesce; } ;
struct efx_nic {int dummy; } ;


 int FUNC_0 (struct efx_nic*,unsigned int*,unsigned int*,int*) ;
 struct efx_nic* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
        struct ethtool_coalesce *VAR_1)
{
 struct efx_nic *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3, VAR_4;
 bool VAR_5;

 FUNC_0(VAR_2, &VAR_3, &VAR_4, &VAR_5);

 VAR_1->tx_coalesce_usecs = VAR_3;
 VAR_1->tx_coalesce_usecs_irq = VAR_3;
 VAR_1->rx_coalesce_usecs = VAR_4;
 VAR_1->rx_coalesce_usecs_irq = VAR_4;
 VAR_1->use_adaptive_rx_coalesce = VAR_5;

 return 0;
}
