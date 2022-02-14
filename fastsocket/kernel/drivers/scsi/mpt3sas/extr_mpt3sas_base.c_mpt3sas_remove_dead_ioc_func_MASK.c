
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct MPT3SAS_ADAPTER {struct pci_dev* pdev; } ;


 int FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0)
{
 struct MPT3SAS_ADAPTER *VAR_1 = (struct MPT3SAS_ADAPTER *)VAR_0;
 struct pci_dev *VAR_2;

 if (VAR_1 == ((void*)0))
  return -1;

 VAR_2 = VAR_1->pdev;
 if (VAR_2 == ((void*)0))
  return -1;
 FUNC_0(VAR_2);
 return 0;
}
