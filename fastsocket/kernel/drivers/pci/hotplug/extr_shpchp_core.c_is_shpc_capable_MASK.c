
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ vendor; scalar_t__ device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3)
{
 if (VAR_3->vendor == VAR_2 &&
     VAR_3->device == VAR_1)
  return 1;
 if (!FUNC_1(VAR_3, VAR_0))
  return 0;
 if (FUNC_0(VAR_3))
  return 0;
 return 1;
}
