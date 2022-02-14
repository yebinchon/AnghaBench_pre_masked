
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct myri10ge_priv {TYPE_4__* ss; } ;
struct ethtool_ringparam {scalar_t__ tx_max_pending; scalar_t__ tx_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_max_pending; scalar_t__ rx_pending; scalar_t__ rx_mini_max_pending; scalar_t__ rx_mini_pending; } ;
struct TYPE_7__ {scalar_t__ mask; } ;
struct TYPE_6__ {scalar_t__ mask; } ;
struct TYPE_5__ {scalar_t__ mask; } ;
struct TYPE_8__ {TYPE_3__ tx; TYPE_2__ rx_big; TYPE_1__ rx_small; } ;


 struct myri10ge_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void
FUNC_1(struct net_device *VAR_0,
         struct ethtool_ringparam *VAR_1)
{
 struct myri10ge_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->rx_mini_max_pending = VAR_2->ss[0].rx_small.mask + 1;
 VAR_1->rx_max_pending = VAR_2->ss[0].rx_big.mask + 1;
 VAR_1->rx_jumbo_max_pending = 0;
 VAR_1->tx_max_pending = VAR_2->ss[0].tx.mask + 1;
 VAR_1->rx_mini_pending = VAR_1->rx_mini_max_pending;
 VAR_1->rx_pending = VAR_1->rx_max_pending;
 VAR_1->rx_jumbo_pending = VAR_1->rx_jumbo_max_pending;
 VAR_1->tx_pending = VAR_1->tx_max_pending;
}
