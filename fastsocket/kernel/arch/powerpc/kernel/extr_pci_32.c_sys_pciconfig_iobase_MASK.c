
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {scalar_t__ io_base_phys; scalar_t__ pci_mem_offset; scalar_t__ first_busno; } ;


 long VAR_0 ;
 long VAR_1 ;





 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct pci_controller* FUNC_0 (unsigned long) ;

long FUNC_1(long VAR_4, unsigned long VAR_5, unsigned long VAR_6)
{
 struct pci_controller* VAR_7;
 long VAR_8 = -VAR_1;

 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7)
  return -VAR_0;

 switch (VAR_4) {
 case 132:
  return (long)VAR_7->first_busno;
 case 128:
  return (long)VAR_7->pci_mem_offset;
 case 131:
  return (long)VAR_7->io_base_phys;
 case 130:
  return (long)VAR_2;
 case 129:
  return (long)VAR_3;
 }

 return VAR_8;
}
