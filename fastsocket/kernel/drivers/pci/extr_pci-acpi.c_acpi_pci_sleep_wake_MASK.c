
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int bus; int dev; } ;


 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_0, bool VAR_1)
{
 if (FUNC_0(VAR_0))
  return FUNC_2(&VAR_0->dev, VAR_1);

 if (!FUNC_3(VAR_0))
  FUNC_1(VAR_0->bus, VAR_1);

 return 0;
}
