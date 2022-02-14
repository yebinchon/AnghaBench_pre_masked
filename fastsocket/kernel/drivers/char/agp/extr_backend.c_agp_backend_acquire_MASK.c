
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct agp_bridge_data {int agp_in_use; } ;


 struct agp_bridge_data* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

struct agp_bridge_data *FUNC_3(struct pci_dev *VAR_0)
{
 struct agp_bridge_data *VAR_1;

 VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return ((void*)0);

 if (FUNC_2(&VAR_1->agp_in_use))
  return ((void*)0);
 FUNC_1(&VAR_1->agp_in_use);
 return VAR_1;
}
