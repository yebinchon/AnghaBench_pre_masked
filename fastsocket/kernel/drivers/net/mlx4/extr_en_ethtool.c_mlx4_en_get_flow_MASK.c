
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx4_en_priv {struct ethtool_flow_id* ethtool_rules; } ;
struct ethtool_rxnfc {int fs; } ;
struct ethtool_rx_flow_spec {int dummy; } ;
struct ethtool_flow_id {int flow_spec; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, struct ethtool_rxnfc *VAR_4,
       int VAR_5)
{
 int VAR_6 = 0;
 struct ethtool_flow_id *VAR_7;
 struct mlx4_en_priv *VAR_8 = FUNC_1(VAR_3);

 if (VAR_5 < 0 || VAR_5 >= VAR_2)
  return -VAR_0;

 VAR_7 = &VAR_8->ethtool_rules[VAR_5];
 if (VAR_7->id)
  FUNC_0(&VAR_4->fs, &VAR_7->flow_spec,
         sizeof(struct ethtool_rx_flow_spec));
 else
  VAR_6 = -VAR_1;

 return VAR_6;
}
