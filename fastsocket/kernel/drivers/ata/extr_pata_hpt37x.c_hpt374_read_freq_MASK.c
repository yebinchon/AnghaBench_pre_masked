
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {scalar_t__ devfn; int bus; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,scalar_t__) ;
 unsigned long FUNC_4 (struct pci_dev*,int) ;

__attribute__((used)) static u32 FUNC_5(struct pci_dev *VAR_0)
{
 u32 VAR_1;
 unsigned long VAR_2 = FUNC_4(VAR_0, 4);
 if (FUNC_0(VAR_0->devfn) & 1) {
  struct pci_dev *VAR_3;

  VAR_3 = FUNC_3(VAR_0->bus, VAR_0->devfn - 1);

  if (VAR_3 == ((void*)0))
   return 0;
  VAR_2 = FUNC_4(VAR_3, 4);
  VAR_1 = FUNC_1(VAR_2 + 0x90);
  FUNC_2(VAR_3);
 } else
  VAR_1 = FUNC_1(VAR_2 + 0x90);
 return VAR_1;
}
