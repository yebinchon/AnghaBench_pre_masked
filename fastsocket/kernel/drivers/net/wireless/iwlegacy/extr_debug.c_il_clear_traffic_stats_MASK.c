
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct traffic_stats {int dummy; } ;
struct il_priv {int rx_stats; int tx_stats; } ;


 int FUNC_0 (int *,int ,int) ;

void
FUNC_1(struct il_priv *VAR_0)
{
 FUNC_0(&VAR_0->tx_stats, 0, sizeof(struct traffic_stats));
 FUNC_0(&VAR_0->rx_stats, 0, sizeof(struct traffic_stats));
}
