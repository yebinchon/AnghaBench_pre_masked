
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcnet32_private {scalar_t__ pci_dev; } ;
struct net_device {int base_addr; } ;
struct ethtool_drvinfo {int bus_info; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcnet32_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2,
    struct ethtool_drvinfo *VAR_3)
{
 struct pcnet32_private *VAR_4 = FUNC_0(VAR_2);

 FUNC_3(VAR_3->driver, VAR_0);
 FUNC_3(VAR_3->version, VAR_1);
 if (VAR_4->pci_dev)
  FUNC_3(VAR_3->bus_info, FUNC_1(VAR_4->pci_dev));
 else
  FUNC_2(VAR_3->bus_info, "VLB 0x%lx", VAR_2->base_addr);
}
