
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; } ;
struct pci_controller {int index; } ;
struct TYPE_2__ {int comm; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int,char*,int ,char*,unsigned long,unsigned long,int ,unsigned long) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct pci_controller *VAR_2,
         struct vm_area_struct *VAR_3,
         unsigned long VAR_4, int VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;

 VAR_6 = (VAR_3->vm_end - VAR_3->vm_start) >> VAR_0;
 VAR_7 = VAR_3->vm_pgoff;
 VAR_8 = ((VAR_4 - 1) >> VAR_0) + 1;

 if (VAR_7 < VAR_8 && VAR_8 - VAR_7 >= VAR_6)
  return 1;
 FUNC_0(1, "process \"%s\" tried to map%s 0x%08lx-0x%08lx on hose %d "
  "(size 0x%08lx)\n",
  VAR_1->comm, VAR_5 ? " sparse" : "", VAR_7, VAR_7 + VAR_6,
  VAR_2->index, VAR_8);
 return 0;
}
