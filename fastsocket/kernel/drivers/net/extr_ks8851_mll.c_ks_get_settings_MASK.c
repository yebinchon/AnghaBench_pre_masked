
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ks_net {int mii; } ;
struct ethtool_cmd {int dummy; } ;


 int FUNC_0 (int *,struct ethtool_cmd*) ;
 struct ks_net* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 struct ks_net *VAR_2 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_2->mii, VAR_1);
}
