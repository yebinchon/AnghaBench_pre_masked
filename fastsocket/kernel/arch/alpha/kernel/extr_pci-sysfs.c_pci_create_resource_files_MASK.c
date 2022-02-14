
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;

int FUNC_3(struct pci_dev *VAR_1)
{
 int VAR_2;
 int VAR_3;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {


  if (!FUNC_2(VAR_1, VAR_2))
   continue;

  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3) {
   FUNC_1(VAR_1);
   return VAR_3;
  }
 }
 return 0;
}
