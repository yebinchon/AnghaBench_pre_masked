
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_0)
{


 unsigned long VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(9);
 VAR_2 = FUNC_2(0, &VAR_1);
 if (!VAR_2)
  FUNC_1(&VAR_0->dev, "DCA is disabled in BIOS\n");

 return VAR_2;
}
