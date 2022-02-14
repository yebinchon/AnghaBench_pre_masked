
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;
struct efx_nic {int net_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct efx_nic*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct efx_nic*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 struct efx_nic* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*,scalar_t__) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4,
         struct ethtool_ringparam *VAR_5)
{
 struct efx_nic *VAR_6 = FUNC_3(VAR_4);
 u32 VAR_7;

 if (VAR_5->rx_mini_pending || VAR_5->rx_jumbo_pending ||
     VAR_5->rx_pending > VAR_0 ||
     VAR_5->tx_pending > VAR_0)
  return -VAR_2;

 if (VAR_5->rx_pending < VAR_1) {
  FUNC_4(VAR_6, VAR_3, VAR_6->net_dev,
     "RX queues cannot be smaller than %u\n",
     VAR_1);
  return -VAR_2;
 }

 VAR_7 = FUNC_2(VAR_5->tx_pending, FUNC_0(VAR_6));
 if (VAR_7 != VAR_5->tx_pending)
  FUNC_5(VAR_6, VAR_3, VAR_6->net_dev,
      "increasing TX queue size to minimum of %u\n",
      VAR_7);

 return FUNC_1(VAR_6, VAR_5->rx_pending, VAR_7);
}
