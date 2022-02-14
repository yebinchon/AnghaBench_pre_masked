
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int devfn; } ;
struct i7core_dev {int n_devs; struct pci_dev** pdev; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 struct i7core_dev* FUNC_2 (int ) ;

__attribute__((used)) static struct pci_dev *FUNC_3(u8 VAR_0, unsigned VAR_1,
       unsigned VAR_2)
{
 struct i7core_dev *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 if (!VAR_3)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_3->n_devs; VAR_4++) {
  if (!VAR_3->pdev[VAR_4])
   continue;

  if (FUNC_1(VAR_3->pdev[VAR_4]->devfn) == VAR_1 &&
      FUNC_0(VAR_3->pdev[VAR_4]->devfn) == VAR_2) {
   return VAR_3->pdev[VAR_4];
  }
 }

 return ((void*)0);
}
