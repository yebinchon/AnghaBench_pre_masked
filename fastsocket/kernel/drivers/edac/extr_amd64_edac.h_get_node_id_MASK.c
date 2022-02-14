
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pci_dev {int devfn; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline u8 FUNC_1(struct pci_dev *VAR_0)
{
 return FUNC_0(VAR_0->devfn) - 0x18;
}
