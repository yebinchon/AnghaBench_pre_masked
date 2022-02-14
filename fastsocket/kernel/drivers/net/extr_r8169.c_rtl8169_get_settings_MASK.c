
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int (* get_settings ) (struct net_device*,struct ethtool_cmd*) ;} ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;


 struct rtl8169_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rtl8169_private*) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct net_device*,struct ethtool_cmd*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct ethtool_cmd *VAR_1)
{
 struct rtl8169_private *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 FUNC_1(VAR_2);
 VAR_3 = VAR_2->get_settings(VAR_0, VAR_1);
 FUNC_2(VAR_2);

 return VAR_3;
}
