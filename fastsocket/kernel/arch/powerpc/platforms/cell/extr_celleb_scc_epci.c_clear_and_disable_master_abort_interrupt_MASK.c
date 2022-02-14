
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int dummy; } ;
typedef scalar_t__ PCI_IO_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pci_controller*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;

__attribute__((used)) static inline void FUNC_3(
     struct pci_controller *VAR_2)
{
 PCI_IO_ADDR VAR_3;
 PCI_IO_ADDR VAR_4;
 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = VAR_3 + VAR_0;
 FUNC_2(VAR_4, FUNC_1(VAR_4) | (VAR_1 << 16));
}
