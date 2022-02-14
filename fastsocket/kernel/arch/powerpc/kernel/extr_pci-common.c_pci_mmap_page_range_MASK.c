
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct resource {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef int resource_size_t ;
typedef enum pci_mmap_state { ____Placeholder_pci_mmap_state } pci_mmap_state ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource* FUNC_0 (struct pci_dev*,int*,int) ;
 int FUNC_1 (struct pci_dev*,struct resource*,int ,int,int) ;
 int FUNC_2 (struct vm_area_struct*,scalar_t__,int,scalar_t__,int ) ;

int FUNC_3(struct pci_dev *VAR_2, struct vm_area_struct *VAR_3,
   enum pci_mmap_state VAR_4, int VAR_5)
{
 resource_size_t VAR_6 =
  ((resource_size_t)VAR_3->vm_pgoff) << VAR_1;
 struct resource *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_2, &VAR_6, VAR_4);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_3->vm_pgoff = VAR_6 >> VAR_1;
 VAR_3->vm_page_prot = FUNC_1(VAR_2, VAR_7,
        VAR_3->vm_page_prot,
        VAR_4, VAR_5);

 VAR_8 = FUNC_2(VAR_3, VAR_3->vm_start, VAR_3->vm_pgoff,
          VAR_3->vm_end - VAR_3->vm_start, VAR_3->vm_page_prot);

 return VAR_8;
}
