
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct pci_dev {int dev; } ;
struct pasemi_mac {int mac_addr; struct pci_dev* pdev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int const*,int) ;
 int const* FUNC_3 (struct device_node*,char*,int*) ;
 struct device_node* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int const*,char*,int const*,int const*,int const*,int const*,int const*,int const*) ;

__attribute__((used)) static int FUNC_6(struct pasemi_mac *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct device_node *VAR_4 = FUNC_4(VAR_3);
 int VAR_5;
 const u8 *VAR_6;
 u8 VAR_7[6];

 if (!VAR_4) {
  FUNC_0(&VAR_3->dev,
     "No device node for mac, not configuring\n");
  return -VAR_1;
 }

 VAR_6 = FUNC_3(VAR_4, "local-mac-address", &VAR_5);

 if (VAR_6 && VAR_5 == 6) {
  FUNC_2(VAR_2->mac_addr, VAR_6, 6);
  return 0;
 }





 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_3(VAR_4, "mac-address", ((void*)0));

 if (VAR_6 == ((void*)0)) {
  FUNC_1(&VAR_3->dev,
    "no mac address in device tree, not configuring\n");
  return -VAR_1;
 }

 if (FUNC_5(VAR_6, "%hhx:%hhx:%hhx:%hhx:%hhx:%hhx", &VAR_7[0],
     &VAR_7[1], &VAR_7[2], &VAR_7[3], &VAR_7[4], &VAR_7[5]) != 6) {
  FUNC_1(&VAR_3->dev,
    "can't parse mac address, not configuring\n");
  return -VAR_0;
 }

 FUNC_2(VAR_2->mac_addr, VAR_7, 6);

 return 0;
}
