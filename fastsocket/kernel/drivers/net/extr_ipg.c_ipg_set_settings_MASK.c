
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipg_nic_private {int mii_mutex; int mii_if; } ;
struct ethtool_cmd {int dummy; } ;


 int FUNC_0 (int *,struct ethtool_cmd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ipg_nic_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 struct ipg_nic_private *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->mii_mutex);
 VAR_3 = FUNC_0(&VAR_2->mii_if, VAR_1);
 FUNC_2(&VAR_2->mii_mutex);

 return VAR_3;
}
