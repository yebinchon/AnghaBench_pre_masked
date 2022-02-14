
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct net_device {int dummy; } ;
struct fec_enet_private {int mii_phy_task_queued; int phy_task; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(uint VAR_1, struct net_device *VAR_2)
{
 struct fec_enet_private *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->mii_phy_task_queued)
  return;

 VAR_3->mii_phy_task_queued = 1;
 FUNC_0(&VAR_3->phy_task, VAR_0);
 FUNC_2(&VAR_3->phy_task);
}
