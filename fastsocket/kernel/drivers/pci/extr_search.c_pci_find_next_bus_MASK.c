
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct list_head* next; } ;
struct pci_bus {TYPE_1__ node; } ;
struct list_head {struct list_head* next; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 struct pci_bus* FUNC_3 (struct list_head*) ;
 int VAR_0 ;
 struct list_head VAR_1 ;
 int FUNC_4 (int *) ;

struct pci_bus *
FUNC_5(const struct pci_bus *VAR_2)
{
 struct list_head *VAR_3;
 struct pci_bus *VAR_4 = ((void*)0);

 FUNC_0(FUNC_2());
 FUNC_1(&VAR_0);
 VAR_3 = VAR_2 ? VAR_2->node.next : VAR_1.next;
 if (VAR_3 != &VAR_1)
  VAR_4 = FUNC_3(VAR_3);
 FUNC_4(&VAR_0);
 return VAR_4;
}
