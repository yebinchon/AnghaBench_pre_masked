
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {unsigned long sparse_mem_base; unsigned long sparse_io_base; } ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct pci_controller *VAR_1,
        enum pci_mmap_state VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = (VAR_2 == VAR_0) ? VAR_1->sparse_mem_base :
          VAR_1->sparse_io_base;

 return VAR_3 != 0;
}
