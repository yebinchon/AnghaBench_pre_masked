
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;
struct ax_device {int mii_lock; int mii; } ;


 int FUNC_0 (int *,struct ethtool_cmd*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct ax_device* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 struct ax_device *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->mii_lock, VAR_3);
 VAR_4 = FUNC_0(&VAR_2->mii, VAR_1);
 FUNC_2(&VAR_2->mii_lock, VAR_3);

 return VAR_4;
}
