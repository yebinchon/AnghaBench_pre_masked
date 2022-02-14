
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ifreq {int dummy; } ;
struct au1000_private {int phy_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifreq*) ;
 struct au1000_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ifreq *VAR_2, int VAR_3)
{
 struct au1000_private *VAR_4 = FUNC_1(VAR_1);

 if (!FUNC_2(VAR_1)) return -VAR_0;

 if (!VAR_4->phy_dev) return -VAR_0;

 return FUNC_3(VAR_4->phy_dev, FUNC_0(VAR_2), VAR_3);
}
