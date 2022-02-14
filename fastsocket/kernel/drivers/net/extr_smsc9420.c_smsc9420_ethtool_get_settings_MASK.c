
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc9420_pdata {int phy_dev; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int maxtxpkt; int maxrxpkt; } ;


 int VAR_0 ;
 struct smsc9420_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
      struct ethtool_cmd *VAR_2)
{
 struct smsc9420_pdata *VAR_3 = FUNC_0(VAR_1);

 if (!VAR_3->phy_dev)
  return -VAR_0;

 VAR_2->maxtxpkt = 1;
 VAR_2->maxrxpkt = 1;
 return FUNC_1(VAR_3->phy_dev, VAR_2);
}
