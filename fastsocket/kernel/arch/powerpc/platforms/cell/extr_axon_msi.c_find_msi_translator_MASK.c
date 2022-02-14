
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct irq_host {struct axon_msic* host_data; } ;
struct device_node {int full_name; } ;
struct axon_msic {int dummy; } ;
typedef int phandle ;


 int FUNC_0 (int *,char*,...) ;
 struct irq_host* FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int const) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int * FUNC_4 (struct device_node*,char*,int *) ;
 struct device_node* FUNC_5 (int ) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static struct axon_msic *FUNC_8(struct pci_dev *VAR_0)
{
 struct irq_host *VAR_1;
 struct device_node *VAR_2, *VAR_3;
 const phandle *VAR_4;
 struct axon_msic *VAR_5 = ((void*)0);

 VAR_2 = FUNC_5(FUNC_7(VAR_0));
 if (!VAR_2) {
  FUNC_0(&VAR_0->dev, "axon_msi: no pci_dn found\n");
  return ((void*)0);
 }

 for (; VAR_2; VAR_2 = FUNC_3(VAR_2)) {
  VAR_4 = FUNC_4(VAR_2, "msi-translator", ((void*)0));
  if (VAR_4)
   break;
 }

 if (!VAR_4) {
  FUNC_0(&VAR_0->dev,
   "axon_msi: no msi-translator property found\n");
  goto out_error;
 }

 VAR_3 = VAR_2;
 VAR_2 = FUNC_2(*VAR_4);
 FUNC_6(VAR_3);
 if (!VAR_2) {
  FUNC_0(&VAR_0->dev,
   "axon_msi: msi-translator doesn't point to a node\n");
  goto out_error;
 }

 VAR_1 = FUNC_1(VAR_2);
 if (!VAR_1) {
  FUNC_0(&VAR_0->dev, "axon_msi: no irq_host found for node %s\n",
   VAR_2->full_name);
  goto out_error;
 }

 VAR_5 = VAR_1->host_data;

out_error:
 FUNC_6(VAR_2);

 return VAR_5;
}
