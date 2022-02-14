
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int multifunction; int is_added; } ;
struct pci_bus {scalar_t__ self; } ;


 struct pci_dev* FUNC_0 (struct pci_bus*,int) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct pci_bus *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3 = 0;
 struct pci_dev *VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 if (VAR_4 && !VAR_4->is_added)
  VAR_3++;

 if (VAR_4 && VAR_4->multifunction) {
  for (VAR_2 = 1; VAR_2 < 8; VAR_2++) {
   VAR_4 = FUNC_0(VAR_0, VAR_1 + VAR_2);
   if (VAR_4) {
    if (!VAR_4->is_added)
     VAR_3++;
    VAR_4->multifunction = 1;
   }
  }
 }


 if (VAR_0->self && VAR_3)
  FUNC_1(VAR_0->self);

 return VAR_3;
}
