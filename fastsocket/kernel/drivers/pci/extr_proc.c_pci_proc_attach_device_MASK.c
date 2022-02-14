
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc_dir_entry {int size; } ;
struct pci_dev {struct proc_dir_entry* procent; int cfg_size; int devfn; struct pci_bus* bus; } ;
struct pci_bus {int number; scalar_t__ procdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct pci_bus*) ;
 scalar_t__ FUNC_3 (struct pci_bus*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct proc_dir_entry* FUNC_4 (char*,int,scalar_t__,int *,struct pci_dev*) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*,int,...) ;

int FUNC_7(struct pci_dev *VAR_8)
{
 struct pci_bus *VAR_9 = VAR_8->bus;
 struct proc_dir_entry *VAR_10;
 char VAR_11[16];

 if (!VAR_7)
  return -VAR_0;

 if (!VAR_9->procdir) {
  if (FUNC_3(VAR_9)) {
   FUNC_6(VAR_11, "%04x:%02x", FUNC_2(VAR_9),
     VAR_9->number);
  } else {
   FUNC_6(VAR_11, "%02x", VAR_9->number);
  }
  VAR_9->procdir = FUNC_5(VAR_11, VAR_5);
  if (!VAR_9->procdir)
   return -VAR_1;
 }

 FUNC_6(VAR_11, "%02x.%x", FUNC_1(VAR_8->devfn), FUNC_0(VAR_8->devfn));
 VAR_10 = FUNC_4(VAR_11, VAR_2 | VAR_3 | VAR_4, VAR_9->procdir,
        &VAR_6, VAR_8);
 if (!VAR_10)
  return -VAR_1;
 VAR_10->size = VAR_8->cfg_size;
 VAR_8->procent = VAR_10;

 return 0;
}
