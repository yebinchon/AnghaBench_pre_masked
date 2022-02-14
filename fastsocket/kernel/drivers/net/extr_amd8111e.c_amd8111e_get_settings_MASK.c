
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;
struct amd8111e_priv {int lock; int mii_if; } ;


 int FUNC_0 (int *,struct ethtool_cmd*) ;
 struct amd8111e_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 struct amd8111e_priv *VAR_2 = FUNC_1(VAR_0);
 FUNC_2(&VAR_2->lock);
 FUNC_0(&VAR_2->mii_if, VAR_1);
 FUNC_3(&VAR_2->lock);
 return 0;
}
