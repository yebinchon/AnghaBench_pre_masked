
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {scalar_t__ vendor; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline u8 FUNC_0(struct pci_dev *VAR_1)
{
 return (VAR_1->vendor == VAR_0) ? 0x10 : 0;
}
