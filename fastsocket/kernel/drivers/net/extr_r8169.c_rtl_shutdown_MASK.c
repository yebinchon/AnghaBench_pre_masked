
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int dummy; } ;
struct device {int dummy; } ;
struct pci_dev {struct device dev; } ;
struct net_device {int perm_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl8169_private*) ;
 struct rtl8169_private* FUNC_1 (struct net_device*) ;
 struct net_device* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct rtl8169_private*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct rtl8169_private*,int ) ;
 int FUNC_10 (struct rtl8169_private*) ;
 int FUNC_11 (struct rtl8169_private*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_4)
{
 struct net_device *VAR_5 = FUNC_2(VAR_4);
 struct rtl8169_private *VAR_6 = FUNC_1(VAR_5);
 struct device *VAR_7 = &VAR_4->dev;

 FUNC_5(VAR_7);

 FUNC_8(VAR_5);


 FUNC_9(VAR_6, VAR_5->perm_addr);

 FUNC_7(VAR_6);

 if (VAR_3 == VAR_1) {
  if (FUNC_0(VAR_6) & VAR_2) {
   FUNC_11(VAR_6);
   FUNC_10(VAR_6);
  }

  FUNC_4(VAR_4, 1);
  FUNC_3(VAR_4, VAR_0);
 }

 FUNC_6(VAR_7);
}
