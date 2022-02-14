
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ,int ,char*,int ) ;

int FUNC_4(void)
{
 if (FUNC_0(VAR_1)) {
  if (FUNC_3(VAR_2, VAR_6,
    VAR_0,
    "MSI[0:63]", VAR_6))
   FUNC_2("request_irq(OCTEON_IRQ_PCI_MSI0) failed");
 } else if (FUNC_1()) {
  if (FUNC_3(VAR_2, VAR_6,
    VAR_0,
    "MSI[0:15]", VAR_6))
   FUNC_2("request_irq(OCTEON_IRQ_PCI_MSI0) failed");

  if (FUNC_3(VAR_3, VAR_6,
    VAR_0,
    "MSI[16:31]", VAR_6))
   FUNC_2("request_irq(OCTEON_IRQ_PCI_MSI1) failed");

  if (FUNC_3(VAR_4, VAR_6,
    VAR_0,
    "MSI[32:47]", VAR_6))
   FUNC_2("request_irq(OCTEON_IRQ_PCI_MSI2) failed");

  if (FUNC_3(VAR_5, VAR_6,
    VAR_0,
    "MSI[48:63]", VAR_6))
   FUNC_2("request_irq(OCTEON_IRQ_PCI_MSI3) failed");

 }
 return 0;
}
