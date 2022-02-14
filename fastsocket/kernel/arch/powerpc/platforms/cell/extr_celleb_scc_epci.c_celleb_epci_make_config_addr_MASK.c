
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {struct pci_bus* bus; } ;
struct pci_bus {int number; } ;
typedef scalar_t__ PCI_IO_ADDR ;


 scalar_t__ FUNC_0 (struct pci_controller*) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static PCI_IO_ADDR FUNC_2(struct pci_bus *VAR_0,
  struct pci_controller *VAR_1, unsigned int VAR_2, int VAR_3)
{
 PCI_IO_ADDR VAR_4;

 if (VAR_0 != VAR_1->bus)
  VAR_4 = FUNC_0(VAR_1) +
         (((VAR_0->number & 0xff) << 16)
   | ((VAR_2 & 0xff) << 8)
   | (VAR_3 & 0xff)
   | 0x01000000);
 else
  VAR_4 = FUNC_0(VAR_1) +
         (((VAR_2 & 0xff) << 8) | (VAR_3 & 0xff));

 FUNC_1("EPCI: config_addr = 0x%p\n", VAR_4);

 return VAR_4;
}
