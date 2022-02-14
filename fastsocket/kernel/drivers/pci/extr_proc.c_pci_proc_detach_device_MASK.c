
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_dir_entry {int name; } ;
struct pci_dev {struct proc_dir_entry* procent; TYPE_1__* bus; } ;
struct TYPE_2__ {int procdir; } ;


 int FUNC_0 (int ,int ) ;

int FUNC_1(struct pci_dev *VAR_0)
{
 struct proc_dir_entry *VAR_1;

 if ((VAR_1 = VAR_0->procent)) {
  FUNC_0(VAR_1->name, VAR_0->bus->procdir);
  VAR_0->procent = ((void*)0);
 }
 return 0;
}
