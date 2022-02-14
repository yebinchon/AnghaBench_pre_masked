
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct device_node {int full_name; } ;


 struct device_node* FUNC_0 (struct device_node*) ;
 int* FUNC_1 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_2 (int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static struct device_node *FUNC_5(struct pci_dev *VAR_0, int *VAR_1)
{
 struct device_node *VAR_2;
 const u32 *VAR_3;

 VAR_2 = FUNC_2(FUNC_3(VAR_0));
 while (VAR_2) {
  VAR_3 = FUNC_1(VAR_2, "ibm,pe-total-#msi", ((void*)0));
  if (VAR_3) {
   FUNC_4("rtas_msi: found prop on dn %s\n",
    VAR_2->full_name);
   *VAR_1 = *VAR_3;
   return VAR_2;
  }

  VAR_2 = FUNC_0(VAR_2);
 }

 return ((void*)0);
}
