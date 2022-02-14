
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; int rx_pending; } ;
struct bcm_enet_priv {int tx_ring_size; int rx_ring_size; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 struct bcm_enet_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0,
      struct ethtool_ringparam *VAR_1)
{
 struct bcm_enet_priv *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_4(VAR_0);

 VAR_3 = 0;
 if (FUNC_5(VAR_0)) {
  FUNC_2(VAR_0);
  VAR_3 = 1;
 }

 VAR_2->rx_ring_size = VAR_1->rx_pending;
 VAR_2->tx_ring_size = VAR_1->tx_pending;

 if (VAR_3) {
  int VAR_4;

  VAR_4 = FUNC_0(VAR_0);
  if (VAR_4)
   FUNC_3(VAR_0);
  else
   FUNC_1(VAR_0);
 }
 return 0;
}
