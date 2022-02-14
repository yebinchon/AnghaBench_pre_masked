
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc911x_local {scalar_t__ phy_type; int lock; int mii; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct smc911x_local* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct smc911x_local *VAR_2 = FUNC_1(VAR_1);
 int VAR_3 = -VAR_0;
 unsigned long VAR_4;

 if (VAR_2->phy_type != 0) {
  FUNC_2(&VAR_2->lock, VAR_4);
  VAR_3 = FUNC_0(&VAR_2->mii);
  FUNC_3(&VAR_2->lock, VAR_4);
 }

 return VAR_3;
}
