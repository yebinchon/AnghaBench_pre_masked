
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct korina_private {int mii_if; int lock; } ;
struct ethtool_cmd {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct ethtool_cmd*) ;
 struct korina_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 struct korina_private *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 FUNC_3(&VAR_2->lock);
 VAR_3 = FUNC_1(&VAR_2->mii_if, VAR_1);
 FUNC_4(&VAR_2->lock);
 FUNC_0(&VAR_2->mii_if);

 return VAR_3;
}
