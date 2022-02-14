
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devres {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 struct pci_devres* FUNC_0 (int ,int,int ) ;
 struct pci_devres* FUNC_1 (int *,int ,int *,int *) ;
 struct pci_devres* FUNC_2 (int *,struct pci_devres*,int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct pci_devres * FUNC_3(struct pci_dev *VAR_2)
{
 struct pci_devres *VAR_3, *VAR_4;

 VAR_3 = FUNC_1(&VAR_2->dev, VAR_1, ((void*)0), ((void*)0));
 if (VAR_3)
  return VAR_3;

 VAR_4 = FUNC_0(VAR_1, sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);
 return FUNC_2(&VAR_2->dev, VAR_4, ((void*)0), ((void*)0));
}
