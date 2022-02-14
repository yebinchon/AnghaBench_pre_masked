
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_adapter {int netdev; int mii; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int supported; int advertising; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ethtool_cmd*,int) ;
 int FUNC_1 (int *,struct ethtool_cmd*) ;
 struct pch_gbe_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4,
     struct ethtool_cmd *VAR_5)
{
 struct pch_gbe_adapter *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_6->mii, VAR_5);
 VAR_5->supported &= ~(VAR_3 | VAR_2);
 VAR_5->advertising &= ~(VAR_1 | VAR_0);

 if (!FUNC_3(VAR_6->netdev))
  FUNC_0(VAR_5, -1);
 return VAR_7;
}
