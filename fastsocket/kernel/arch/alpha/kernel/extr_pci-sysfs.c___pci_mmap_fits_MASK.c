
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_end; int vm_start; unsigned long vm_pgoff; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int comm; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int ,char*,unsigned long,unsigned long,int ,int,unsigned long) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_2, int VAR_3,
      struct vm_area_struct *VAR_4, int VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
 int VAR_9 = VAR_5 ? 5 : 0;

 VAR_6 = (VAR_4->vm_end - VAR_4->vm_start) >> VAR_0;
 VAR_7 = VAR_4->vm_pgoff;
 VAR_8 = ((FUNC_2(VAR_2, VAR_3) - 1) >> (VAR_0 - VAR_9)) + 1;

 if (VAR_7 < VAR_8 && VAR_8 - VAR_7 >= VAR_6)
  return 1;
 FUNC_0(1, "process \"%s\" tried to map%s 0x%08lx-0x%08lx on %s BAR %d "
  "(size 0x%08lx)\n",
  VAR_1->comm, VAR_5 ? " sparse" : "", VAR_7, VAR_7 + VAR_6,
  FUNC_1(VAR_2), VAR_3, VAR_8);
 return 0;
}
