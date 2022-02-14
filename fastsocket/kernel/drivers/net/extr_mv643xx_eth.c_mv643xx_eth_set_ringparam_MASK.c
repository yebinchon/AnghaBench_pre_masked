
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct mv643xx_eth_private {int rx_ring_size; int tx_ring_size; } ;
struct ethtool_ringparam {int rx_pending; int tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,char*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct mv643xx_eth_private* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_3, struct ethtool_ringparam *VAR_4)
{
 struct mv643xx_eth_private *VAR_5 = FUNC_3(VAR_3);

 if (VAR_4->rx_mini_pending || VAR_4->rx_jumbo_pending)
  return -VAR_0;

 VAR_5->rx_ring_size = VAR_4->rx_pending < 4096 ? VAR_4->rx_pending : 4096;
 VAR_5->tx_ring_size = VAR_4->tx_pending < 4096 ? VAR_4->tx_pending : 4096;

 if (FUNC_4(VAR_3)) {
  FUNC_2(VAR_3);
  if (FUNC_1(VAR_3)) {
   FUNC_0(VAR_2, &VAR_3->dev,
       "fatal error on re-opening device after "
       "ring param change\n");
   return -VAR_1;
  }
 }

 return 0;
}
