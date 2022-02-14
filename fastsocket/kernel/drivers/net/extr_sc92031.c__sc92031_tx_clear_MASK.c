
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc92031_priv {scalar_t__ tx_head; scalar_t__ tx_tail; } ;
struct TYPE_2__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;


 struct sc92031_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct sc92031_priv *VAR_1 = FUNC_0(VAR_0);

 while (VAR_1->tx_head - VAR_1->tx_tail > 0) {
  VAR_1->tx_tail++;
  VAR_0->stats.tx_dropped++;
 }
 VAR_1->tx_head = VAR_1->tx_tail = 0;
}
