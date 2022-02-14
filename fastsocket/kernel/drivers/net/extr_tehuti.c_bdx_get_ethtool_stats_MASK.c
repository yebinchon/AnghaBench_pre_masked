
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct bdx_priv {int hw_stats; scalar_t__ stats_flag; } ;


 int FUNC_0 (struct bdx_priv*) ;
 int FUNC_1 (int *,int *,int) ;
 struct bdx_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0,
      struct ethtool_stats *VAR_1, u64 *VAR_2)
{
 struct bdx_priv *VAR_3 = FUNC_2(VAR_0);

 if (VAR_3->stats_flag) {


  FUNC_0(VAR_3);


  FUNC_1(VAR_2, &VAR_3->hw_stats, sizeof(VAR_3->hw_stats));
 }
}
