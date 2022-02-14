
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ device; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int ) ;

__attribute__((used)) static int
FUNC_3(struct pci_dev *VAR_1)
{
 if (VAR_1->device == VAR_0 &&
     !FUNC_2(VAR_1, FUNC_0(64)))
  if (!FUNC_1(VAR_1, FUNC_0(64)))
   return 1;

 if (VAR_1->device == VAR_0 &&
     !FUNC_2(VAR_1, FUNC_0(40)))
  if (!FUNC_1(VAR_1, FUNC_0(40)))
   return 1;

 if (!FUNC_2(VAR_1, FUNC_0(32)))
  if (!FUNC_1(VAR_1, FUNC_0(32)))
   return 0;

 return -1;
}
