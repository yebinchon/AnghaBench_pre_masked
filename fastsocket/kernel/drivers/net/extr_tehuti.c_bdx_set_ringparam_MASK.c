
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;
struct bdx_priv {int rxf_size; int txd_size; int rxd_size; int txf_size; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 struct bdx_priv* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_0, struct ethtool_ringparam *VAR_1)
{
 struct bdx_priv *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = 0;
 int VAR_4 = 0;

 for (; VAR_3 < 4; VAR_3++) {
  if (FUNC_2(VAR_3) >= VAR_1->rx_pending)
   break;
 }
 if (VAR_3 == 4)
  VAR_3 = 3;

 for (; VAR_4 < 4; VAR_4++) {
  if (FUNC_3(VAR_4) >= VAR_1->tx_pending)
   break;
 }
 if (VAR_4 == 4)
  VAR_4 = 3;


 if ((VAR_3 == VAR_2->rxf_size)
     && (VAR_4 == VAR_2->txd_size))
  return 0;

 VAR_2->rxf_size = VAR_3;
 if (VAR_3 > 1)
  VAR_2->rxd_size = VAR_3 - 1;
 else
  VAR_2->rxd_size = VAR_3;

 VAR_2->txf_size = VAR_2->txd_size = VAR_4;

 if (FUNC_5(VAR_0)) {
  FUNC_0(VAR_0);
  FUNC_1(VAR_0);
 }
 return 0;
}
