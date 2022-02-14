
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; int supported; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*) ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct rtl8169_private *VAR_3 = FUNC_1(VAR_1);

 FUNC_2(VAR_3);

 VAR_2->supported = VAR_0;
 VAR_2->wolopts = FUNC_0(VAR_3);

 FUNC_3(VAR_3);
}
