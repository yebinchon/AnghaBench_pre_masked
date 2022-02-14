
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device_node {int full_name; } ;


 struct device_node* FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static struct device_node *FUNC_4(struct pci_dev *VAR_0, int *VAR_1)
{
 struct device_node *VAR_2;



 VAR_2 = FUNC_2(VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_2);
 if (!VAR_2)
  return ((void*)0);


 VAR_2 = FUNC_1(VAR_2);
 if (!VAR_2)
  return ((void*)0);


 *VAR_1 = 8;
 FUNC_3("rtas_msi: using PE dn %s\n", VAR_2->full_name);

 return VAR_2;
}
