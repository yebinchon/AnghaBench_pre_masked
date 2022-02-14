
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int fdir_perfect_lock; } ;
struct ethtool_rxnfc {int fs; } ;
struct ethtool_rx_flow_spec {int location; } ;


 int FUNC_0 (struct ixgbe_adapter*,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ixgbe_adapter *VAR_0,
     struct ethtool_rxnfc *VAR_1)
{
 struct ethtool_rx_flow_spec *VAR_2 =
  (struct ethtool_rx_flow_spec *)&VAR_1->fs;
 int VAR_3;

 FUNC_1(&VAR_0->fdir_perfect_lock);
 VAR_3 = FUNC_0(VAR_0, ((void*)0), VAR_2->location);
 FUNC_2(&VAR_0->fdir_perfect_lock);

 return VAR_3;
}
