
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int mmio_addr; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int len; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int ) ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct rtl8169_private*) ;
 int FUNC_3 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, struct ethtool_regs *VAR_2,
        void *VAR_3)
{
 struct rtl8169_private *VAR_4 = FUNC_1(VAR_1);

 if (VAR_2->len > VAR_0)
  VAR_2->len = VAR_0;

 FUNC_2(VAR_4);
 FUNC_0(VAR_3, VAR_4->mmio_addr, VAR_2->len);
 FUNC_3(VAR_4);
}
