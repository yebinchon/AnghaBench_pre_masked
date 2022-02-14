
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ msix_enabled; scalar_t__ msi_enabled; } ;
typedef enum pci_lost_interrupt_reason { ____Placeholder_pci_lost_interrupt_reason } pci_lost_interrupt_reason ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pci_dev*,char*) ;

enum pci_lost_interrupt_reason FUNC_1(struct pci_dev *VAR_6)
{
 if (VAR_6->msi_enabled || VAR_6->msix_enabled) {
  enum pci_lost_interrupt_reason VAR_7;

  if (VAR_6->msix_enabled) {
   FUNC_0(VAR_6, "MSIX routing failure");
   VAR_7 = VAR_2;
  } else {
   FUNC_0(VAR_6, "MSI routing failure");
   VAR_7 = VAR_1;
  }
  return VAR_7;
 }







 FUNC_0(VAR_6, "unknown cause (not MSI or ACPI)");
 return VAR_3;
}
