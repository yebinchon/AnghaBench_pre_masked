
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;

int FUNC_3(struct pci_dev *VAR_4)
{
 if (FUNC_1(VAR_4))
  return -VAR_0;

 if (!FUNC_0(VAR_4, VAR_3))
  return -VAR_0;

 return FUNC_2(VAR_4, VAR_2, VAR_1);
}
