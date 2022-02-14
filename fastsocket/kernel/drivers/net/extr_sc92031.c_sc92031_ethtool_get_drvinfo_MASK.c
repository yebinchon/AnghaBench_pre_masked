
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc92031_priv {struct pci_dev* pdev; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_drvinfo {int bus_info; int driver; } ;


 int VAR_0 ;
 struct sc92031_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
  struct ethtool_drvinfo *VAR_2)
{
 struct sc92031_priv *VAR_3 = FUNC_0(VAR_1);
 struct pci_dev *VAR_4 = VAR_3->pdev;

 FUNC_2(VAR_2->driver, VAR_0);
 FUNC_2(VAR_2->bus_info, FUNC_1(VAR_4));
}
