
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int (* phy_reset_enable ) (struct rtl8169_private*) ;} ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct rtl8169_private*,int *,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1,
         struct rtl8169_private *VAR_2)
{
 VAR_2->phy_reset_enable(VAR_2);
 FUNC_0(VAR_2, &VAR_0, 1, 100);
}
