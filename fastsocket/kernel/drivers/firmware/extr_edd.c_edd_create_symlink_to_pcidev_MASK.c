
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct pci_dev {TYPE_1__ dev; } ;
struct edd_device {int kobj; } ;


 struct pci_dev* FUNC_0 (struct edd_device*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *,int *,char*) ;

__attribute__((used)) static int
FUNC_3(struct edd_device *VAR_0)
{

 struct pci_dev *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;
 if (!VAR_1)
  return 1;
 VAR_2 = FUNC_2(&VAR_0->kobj,&VAR_1->dev.kobj,"pci_dev");
 FUNC_1(VAR_1);
 return VAR_2;
}
