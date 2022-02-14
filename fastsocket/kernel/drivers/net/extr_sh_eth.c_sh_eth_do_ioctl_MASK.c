
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_eth_private {struct phy_device* phydev; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifreq*) ;
 struct sh_eth_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phy_device*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct ifreq *VAR_3,
    int VAR_4)
{
 struct sh_eth_private *VAR_5 = FUNC_1(VAR_2);
 struct phy_device *VAR_6 = VAR_5->phydev;

 if (!FUNC_2(VAR_2))
  return -VAR_0;

 if (!VAR_6)
  return -VAR_1;

 return FUNC_3(VAR_6, FUNC_0(VAR_3), VAR_4);
}
