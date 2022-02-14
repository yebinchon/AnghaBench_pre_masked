
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dn {unsigned int devfn; } ;
struct pci_bus {int dummy; } ;
struct device_node {struct device_node* sibling; struct device_node* child; } ;


 int VAR_0 ;
 struct pci_dn* FUNC_0 (struct device_node*) ;
 scalar_t__ FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct pci_bus*) ;
 int FUNC_3 (struct pci_dn*,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_bus *VAR_1,
     unsigned int VAR_2,
     int VAR_3, int VAR_4, u32 VAR_5)
{
 struct device_node *VAR_6, *VAR_7;

 VAR_6 = FUNC_2(VAR_1);


 for (VAR_7 = VAR_6->child; VAR_7; VAR_7 = VAR_7->sibling) {
  struct pci_dn *VAR_8 = FUNC_0(VAR_7);
  if (VAR_8 && VAR_8->devfn == VAR_2
      && FUNC_1(VAR_7))
   return FUNC_3(VAR_8, VAR_3, VAR_4, VAR_5);
 }
 return VAR_0;
}
