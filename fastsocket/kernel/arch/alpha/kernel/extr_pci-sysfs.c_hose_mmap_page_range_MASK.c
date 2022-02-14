
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_pgoff; int vm_flags; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct pci_controller {unsigned long sparse_mem_base; unsigned long dense_mem_base; unsigned long sparse_io_base; unsigned long dense_io_base; } ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vm_area_struct*,scalar_t__,unsigned long,scalar_t__,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_1(struct pci_controller *VAR_4,
    struct vm_area_struct *VAR_5,
    enum pci_mmap_state VAR_6, int VAR_7)
{
 unsigned long VAR_8;

 if (VAR_6 == VAR_3)
  VAR_8 = VAR_7 ? VAR_4->sparse_mem_base : VAR_4->dense_mem_base;
 else
  VAR_8 = VAR_7 ? VAR_4->sparse_io_base : VAR_4->dense_io_base;

 VAR_5->vm_pgoff += VAR_8 >> VAR_0;
 VAR_5->vm_flags |= (VAR_1 | VAR_2);

 return FUNC_0(VAR_5, VAR_5->vm_start, VAR_5->vm_pgoff,
      VAR_5->vm_end - VAR_5->vm_start,
      VAR_5->vm_page_prot);
}
