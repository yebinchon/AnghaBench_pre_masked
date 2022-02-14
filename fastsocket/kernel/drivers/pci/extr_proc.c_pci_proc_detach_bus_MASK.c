
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int name; } ;
struct pci_bus {struct proc_dir_entry* procdir; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct pci_bus* VAR_1)
{
 struct proc_dir_entry *VAR_2 = VAR_1->procdir;
 if (VAR_2)
  FUNC_0(VAR_2->name, VAR_0);
 return 0;
}
