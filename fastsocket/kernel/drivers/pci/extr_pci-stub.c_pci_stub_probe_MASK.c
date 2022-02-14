
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*) ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_1, const struct pci_device_id *VAR_2)
{
 FUNC_0(VAR_0, &VAR_1->dev, "claimed by stub\n");
 return 0;
}
