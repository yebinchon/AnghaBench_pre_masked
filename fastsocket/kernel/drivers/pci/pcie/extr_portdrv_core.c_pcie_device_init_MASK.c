
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * parent; int release; int * bus; } ;
struct pcie_device {int irq; int service; struct device device; struct pci_dev* port; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct pcie_device*) ;
 struct pcie_device* FUNC_5 (int,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;
 struct pcie_device *VAR_8;
 struct device *VAR_9;

 VAR_8 = FUNC_5(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;
 VAR_8->port = VAR_4;
 VAR_8->irq = VAR_6;
 VAR_8->service = VAR_5;


 VAR_9 = &VAR_8->device;
 VAR_9->bus = &VAR_2;
 VAR_9->release = VAR_3;
 FUNC_0(VAR_9, "%s:pcie%02x",
       FUNC_6(VAR_4),
       FUNC_2(FUNC_7(VAR_4), VAR_5));
 VAR_9->parent = &VAR_4->dev;

 VAR_7 = FUNC_1(VAR_9);
 if (VAR_7)
  FUNC_4(VAR_8);
 else
  FUNC_3(VAR_9);
 return VAR_7;
}
