
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct efx_nic {int net_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int FUNC_6 (struct efx_nic*,int) ;
 int FUNC_7 (struct efx_nic*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_10 (struct pci_dev*) ;
 struct efx_nic* FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int *) ;
 int FUNC_13 () ;
 int FUNC_14 () ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_1)
{
 struct efx_nic *VAR_2;

 VAR_2 = FUNC_11(VAR_1);
 if (!VAR_2)
  return;


 FUNC_13();
 FUNC_0(VAR_2->net_dev);
 FUNC_6(VAR_2, 0);
 FUNC_14();

 FUNC_5(VAR_2);
 FUNC_7(VAR_2);

 FUNC_3(VAR_2);

 FUNC_4(VAR_2);

 FUNC_1(VAR_2);
 FUNC_9(VAR_2, VAR_0, VAR_2->net_dev, "shutdown successful\n");

 FUNC_2(VAR_2);
 FUNC_12(VAR_1, ((void*)0));
 FUNC_8(VAR_2->net_dev);

 FUNC_10(VAR_1);
}
