
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_fw {int phy_action; } ;
struct rtl8169_private {struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl8169_private*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_1 (struct rtl8169_private*,struct net_device*,int *) ;
 int FUNC_2 (struct rtl8169_private*,struct rtl_fw*) ;

__attribute__((used)) static int FUNC_3(struct rtl8169_private *VAR_2, struct rtl_fw *VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev;
 int VAR_5 = -VAR_0;

 if (!FUNC_2(VAR_2, VAR_3)) {
  FUNC_0(VAR_2, VAR_1, VAR_4, "invalid firwmare\n");
  goto out;
 }

 if (FUNC_1(VAR_2, VAR_4, &VAR_3->phy_action))
  VAR_5 = 0;
out:
 return VAR_5;
}
