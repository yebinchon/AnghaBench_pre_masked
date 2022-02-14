
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {scalar_t__ io_base_virt; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(struct pci_controller *VAR_1,
         unsigned long VAR_2)
{
 return VAR_2 - ((unsigned long)(VAR_1->io_base_virt) - VAR_0);
}
