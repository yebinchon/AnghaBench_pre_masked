
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_id_table {int n_devs; scalar_t__ descr; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 struct pci_id_table* VAR_1 ;
 int FUNC_0 (struct pci_dev**,int *,struct pci_id_table const*,int) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(u8 *VAR_2)
{
 int VAR_3, VAR_4;
 struct pci_dev *VAR_5 = ((void*)0);
 const struct pci_id_table *VAR_6 = VAR_1;

 while (VAR_6 && VAR_6->descr) {
  for (VAR_3 = 0; VAR_3 < VAR_6->n_devs; VAR_3++) {
   VAR_5 = ((void*)0);
   do {
    VAR_4 = FUNC_0(&VAR_5, VAR_2,
          VAR_6, VAR_3);
    if (VAR_4 < 0) {
     if (VAR_3 == 0) {
      VAR_3 = VAR_6->n_devs;
      break;
     }
     FUNC_1();
     return -VAR_0;
    }
   } while (VAR_5);
  }
  VAR_6++;
 }

 return 0;
}
