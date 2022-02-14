
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dn {struct device_node* node; } ;
struct pci_dev {int dummy; } ;
struct device_node {int full_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_dn* FUNC_0 (struct pci_dev*) ;
 int* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3, int VAR_4, char *VAR_5)
{
 struct device_node *VAR_6;
 struct pci_dn *VAR_7;
 const u32 *VAR_8;

 VAR_7 = FUNC_0(VAR_3);
 if (!VAR_7)
  return -VAR_0;

 VAR_6 = VAR_7->node;

 VAR_8 = FUNC_1(VAR_6, VAR_5, ((void*)0));
 if (!VAR_8) {
  FUNC_2("rtas_msi: No %s on %s\n", VAR_5, VAR_6->full_name);
  return -VAR_1;
 }

 if (*VAR_8 < VAR_4) {
  FUNC_2("rtas_msi: %s requests < %d MSIs\n", VAR_5, VAR_4);

  if (*VAR_8 == 0)
   return -VAR_2;

  return *VAR_8;
 }

 return 0;
}
