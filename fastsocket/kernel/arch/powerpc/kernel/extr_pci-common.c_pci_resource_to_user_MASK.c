
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; scalar_t__ end; scalar_t__ start; } ;
struct pci_dev {int bus; } ;
struct pci_controller {scalar_t__ pci_mem_offset; scalar_t__ io_base_virt; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct pci_controller* FUNC_0 (int ) ;

void FUNC_1(const struct pci_dev *VAR_3, int VAR_4,
     const struct resource *VAR_5,
     resource_size_t *VAR_6, resource_size_t *VAR_7)
{
 struct pci_controller *VAR_8 = FUNC_0(VAR_3->bus);
 resource_size_t VAR_9 = 0;

 if (VAR_8 == ((void*)0))
  return;

 if (VAR_5->flags & VAR_0)
  VAR_9 = (unsigned long)VAR_8->io_base_virt - VAR_2;
 *VAR_6 = VAR_5->start - VAR_9;
 *VAR_7 = VAR_5->end - VAR_9;
}
