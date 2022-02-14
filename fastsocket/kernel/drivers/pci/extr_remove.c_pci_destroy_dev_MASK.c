
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * prev; int next; } ;
struct pci_dev {TYPE_1__ bus_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_1)
{


 FUNC_0(&VAR_0);
 FUNC_1(&VAR_1->bus_list);
 VAR_1->bus_list.next = *(VAR_1->bus_list.prev = ((void*)0));
 FUNC_4(&VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
}
