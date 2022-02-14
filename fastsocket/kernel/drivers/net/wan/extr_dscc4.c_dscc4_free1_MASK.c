
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct dscc4_pci_priv {int dev; struct dscc4_pci_priv* root; } ;
struct dscc4_dev_priv {int dev; struct dscc4_dev_priv* root; } ;


 int VAR_0 ;
 int FUNC_0 (struct dscc4_pci_priv*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dscc4_pci_priv*) ;
 struct dscc4_pci_priv* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_1)
{
 struct dscc4_pci_priv *VAR_2;
 struct dscc4_dev_priv *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_3(VAR_1);
 VAR_3 = VAR_2->root;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_5(FUNC_0(VAR_3 + VAR_4));

 FUNC_4(VAR_1, ((void*)0));

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_3[VAR_4].dev);
 FUNC_2(VAR_3);
 FUNC_2(VAR_2);
}
