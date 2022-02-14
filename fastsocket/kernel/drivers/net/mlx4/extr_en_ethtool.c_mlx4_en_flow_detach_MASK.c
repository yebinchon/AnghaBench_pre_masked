
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_1__* mdev; struct ethtool_flow_id* ethtool_rules; } ;
struct TYPE_4__ {size_t location; } ;
struct ethtool_rxnfc {TYPE_2__ fs; } ;
struct ethtool_rx_flow_spec {int dummy; } ;
struct ethtool_flow_id {int list; int flow_spec; scalar_t__ id; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct mlx4_en_priv*,char*,size_t,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,scalar_t__) ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
          struct ethtool_rxnfc *VAR_4)
{
 int VAR_5 = 0;
 struct ethtool_flow_id *VAR_6;
 struct mlx4_en_priv *VAR_7 = FUNC_4(VAR_3);

 if (VAR_4->fs.location >= VAR_2)
  return -VAR_0;

 VAR_6 = &VAR_7->ethtool_rules[VAR_4->fs.location];
 if (!VAR_6->id) {
  VAR_5 = -VAR_1;
  goto out;
 }

 VAR_5 = FUNC_3(VAR_7->mdev->dev, VAR_6->id);
 if (VAR_5) {
  FUNC_0(VAR_7, "Fail to detach network rule at location %d. registration id = 0x%llx\n",
         VAR_4->fs.location, VAR_6->id);
  goto out;
 }
 VAR_6->id = 0;
 FUNC_2(&VAR_6->flow_spec, 0, sizeof(struct ethtool_rx_flow_spec));
 FUNC_1(&VAR_6->list);
out:
 return VAR_5;

}
