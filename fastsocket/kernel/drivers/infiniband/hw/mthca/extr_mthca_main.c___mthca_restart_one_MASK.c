
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mthca_dev {int hca_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*) ;
 struct mthca_dev* FUNC_2 (struct pci_dev*) ;

int FUNC_3(struct pci_dev *VAR_1)
{
 struct mthca_dev *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (!VAR_2)
  return -VAR_0;
 VAR_3 = VAR_2->hca_type;
 FUNC_1(VAR_1);
 return FUNC_0(VAR_1, VAR_3);
}
