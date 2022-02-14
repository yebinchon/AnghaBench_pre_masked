
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int * vm_ops; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; int vm_pgoff; } ;
struct pci_dev {int dummy; } ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;
struct TYPE_2__ {int x86; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 TYPE_1__ VAR_4 ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_2 (int ) ;

int FUNC_3(struct pci_dev *VAR_8, struct vm_area_struct *VAR_9,
   enum pci_mmap_state VAR_10, int VAR_11)
{
 unsigned long VAR_12;




 if (VAR_10 == VAR_6)
  return -VAR_1;

 VAR_12 = FUNC_2(VAR_9->vm_page_prot);






 if (!VAR_5 && VAR_11)
  return -VAR_1;

 if (VAR_5 && VAR_11)
  VAR_12 |= VAR_3;
 else if (VAR_5 || VAR_4.x86 > 3)





  VAR_12 |= VAR_2;

 VAR_9->vm_page_prot = FUNC_0(VAR_12);

 if (FUNC_1(VAR_9, VAR_9->vm_start, VAR_9->vm_pgoff,
          VAR_9->vm_end - VAR_9->vm_start,
          VAR_9->vm_page_prot))
  return -VAR_0;

 VAR_9->vm_ops = &VAR_7;

 return 0;
}
