
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet32_private {int lock; int mii_if; scalar_t__ mii; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ethtool_cmd*) ;
 struct pcnet32_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ethtool_cmd *VAR_2)
{
 struct pcnet32_private *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4;
 int VAR_5 = -VAR_0;

 if (VAR_3->mii) {
  FUNC_2(&VAR_3->lock, VAR_4);
  VAR_5 = FUNC_0(&VAR_3->mii_if, VAR_2);
  FUNC_3(&VAR_3->lock, VAR_4);
 }
 return VAR_5;
}
