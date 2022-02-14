
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phy_id; } ;
struct smc_local {scalar_t__ phy_type; int phy_configure; TYPE_1__ mii; } ;
struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct smc_local* FUNC_1 (struct net_device*) ;
 unsigned int FUNC_2 (struct net_device*,int,int ) ;
 int FUNC_3 (struct net_device*,int,int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct smc_local *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4;
 int VAR_5 = VAR_3->mii.phy_id;

 if (VAR_3->phy_type == 0)
  return;




 FUNC_0(&VAR_3->phy_configure);

 VAR_4 = FUNC_2(VAR_2, VAR_5, VAR_1);
 FUNC_3(VAR_2, VAR_5, VAR_1, VAR_4 | VAR_0);
}
