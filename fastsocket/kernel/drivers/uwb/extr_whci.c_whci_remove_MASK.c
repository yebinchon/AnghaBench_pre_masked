
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct whci_card {int n_caps; int uwbbase; } ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct whci_card*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct whci_card* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct whci_card*,int) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_0)
{
 struct whci_card *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 FUNC_7(VAR_0, ((void*)0));


 for (VAR_2 = VAR_1->n_caps; VAR_2 >= 0 ; VAR_2--)
  FUNC_9(VAR_1, VAR_2);
 FUNC_5(VAR_0, VAR_1->uwbbase);
 FUNC_8(FUNC_6(VAR_0, 0), FUNC_0(VAR_1->n_caps));
 FUNC_1(VAR_1);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
}
