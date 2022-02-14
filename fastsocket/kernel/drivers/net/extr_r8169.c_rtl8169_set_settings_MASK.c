
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int timer; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int advertising; int duplex; int autoneg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ethtool_cmd*) ;
 struct rtl8169_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ,int ,int ,int ) ;
 int FUNC_4 (struct rtl8169_private*) ;
 int FUNC_5 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 struct rtl8169_private *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 FUNC_0(&VAR_2->timer);

 FUNC_4(VAR_2);
 VAR_3 = FUNC_3(VAR_0, VAR_1->autoneg, FUNC_1(VAR_1),
    VAR_1->duplex, VAR_1->advertising);
 FUNC_5(VAR_2);

 return VAR_3;
}
