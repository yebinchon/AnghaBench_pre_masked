
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8169_private {TYPE_1__* pci_dev; int features; } ;
struct net_device {int dummy; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8169_private*,int ) ;
 int FUNC_1 (int *,int ) ;
 struct rtl8169_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct rtl8169_private*) ;
 int FUNC_4 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 struct rtl8169_private *VAR_3 = FUNC_2(VAR_1);

 FUNC_3(VAR_3);

 if (VAR_2->wolopts)
  VAR_3->features |= VAR_0;
 else
  VAR_3->features &= ~VAR_0;
 FUNC_0(VAR_3, VAR_2->wolopts);

 FUNC_4(VAR_3);

 FUNC_1(&VAR_3->pci_dev->dev, VAR_2->wolopts);

 return 0;
}
