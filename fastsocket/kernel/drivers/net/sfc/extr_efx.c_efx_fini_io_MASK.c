
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int pci_dev; scalar_t__ membase_phys; int * membase; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct efx_nic *VAR_2)
{
 FUNC_1(VAR_2, VAR_1, VAR_2->net_dev, "shutting down I/O\n");

 if (VAR_2->membase) {
  FUNC_0(VAR_2->membase);
  VAR_2->membase = ((void*)0);
 }

 if (VAR_2->membase_phys) {
  FUNC_3(VAR_2->pci_dev, VAR_0);
  VAR_2->membase_phys = 0;
 }

 FUNC_2(VAR_2->pci_dev);
}
