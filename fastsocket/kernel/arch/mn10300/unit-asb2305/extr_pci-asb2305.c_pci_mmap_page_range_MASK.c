
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; int vm_pgoff; } ;
struct pci_dev {int dummy; } ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,scalar_t__,int ,scalar_t__,int ) ;
 unsigned long FUNC_2 (int ) ;

int FUNC_3(struct pci_dev *VAR_4, struct vm_area_struct *VAR_5,
   enum pci_mmap_state VAR_6, int VAR_7)
{
 unsigned long VAR_8;




 VAR_5->vm_flags |= VAR_2 | VAR_1;

 VAR_8 = FUNC_2(VAR_5->vm_page_prot);
 VAR_8 &= ~VAR_3;
 VAR_5->vm_page_prot = FUNC_0(VAR_8);


 if (FUNC_1(VAR_5, VAR_5->vm_start, VAR_5->vm_pgoff,
          VAR_5->vm_end - VAR_5->vm_start,
          VAR_5->vm_page_prot))
  return -VAR_0;

 return 0;
}
