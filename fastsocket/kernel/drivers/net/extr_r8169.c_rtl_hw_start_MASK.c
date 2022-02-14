
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int (* hw_start ) (struct net_device*) ;} ;
struct net_device {int dummy; } ;


 struct rtl8169_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rtl8169_private*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct rtl8169_private *VAR_1 = FUNC_0(VAR_0);

 VAR_1->hw_start(VAR_0);

 FUNC_1(VAR_1);
}
