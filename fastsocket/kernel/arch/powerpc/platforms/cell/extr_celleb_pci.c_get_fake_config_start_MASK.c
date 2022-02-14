
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {struct celleb_pci_private* private_data; } ;
struct celleb_pci_private {unsigned char*** fake_config; } ;



__attribute__((used)) static unsigned char *FUNC_0(struct pci_controller *VAR_0,
         int VAR_1, int VAR_2)
{
 struct celleb_pci_private *VAR_3 = VAR_0->private_data;

 if (VAR_3 == ((void*)0))
  return ((void*)0);

 return VAR_3->fake_config[VAR_1][VAR_2];
}
