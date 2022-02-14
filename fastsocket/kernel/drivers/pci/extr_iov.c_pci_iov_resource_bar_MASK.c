
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* sriov; int is_physfn; } ;
typedef enum pci_bar_type { ____Placeholder_pci_bar_type } pci_bar_type ;
struct TYPE_2__ {int pos; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_1(struct pci_dev *VAR_4, int VAR_5,
    enum pci_bar_type *VAR_6)
{
 if (VAR_5 < VAR_0 || VAR_5 > VAR_1)
  return 0;

 FUNC_0(!VAR_4->is_physfn);

 *VAR_6 = VAR_3;

 return VAR_4->sriov->pos + VAR_2 +
  4 * (VAR_5 - VAR_0);
}
