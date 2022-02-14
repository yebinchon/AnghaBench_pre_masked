
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sbridge_dev {int n_devs; struct pci_dev** pdev; } ;
struct pci_dev {int devfn; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,unsigned int,unsigned int,struct pci_dev*) ;
 struct sbridge_dev* FUNC_3 (int ) ;

__attribute__((used)) static struct pci_dev *FUNC_4(u8 VAR_0, unsigned VAR_1,
       unsigned VAR_2)
{
 struct sbridge_dev *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 if (!VAR_3)
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_3->n_devs; VAR_4++) {
  if (!VAR_3->pdev[VAR_4])
   continue;

  if (FUNC_1(VAR_3->pdev[VAR_4]->devfn) == VAR_1 &&
      FUNC_0(VAR_3->pdev[VAR_4]->devfn) == VAR_2) {
   FUNC_2("Associated %02x.%02x.%d with %p\n",
    VAR_0, VAR_1, VAR_2, VAR_3->pdev[VAR_4]);
   return VAR_3->pdev[VAR_4];
  }
 }

 return ((void*)0);
}
