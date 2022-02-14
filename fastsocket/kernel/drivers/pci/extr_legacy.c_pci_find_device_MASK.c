
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (unsigned int,unsigned int,int ,int ,struct pci_dev*) ;

struct pci_dev *FUNC_3(unsigned int VAR_1, unsigned int VAR_2,
    struct pci_dev *VAR_3)
{
 struct pci_dev *VAR_4;

 FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_0, VAR_0, VAR_3);
 FUNC_1(VAR_4);
 return VAR_4;
}
