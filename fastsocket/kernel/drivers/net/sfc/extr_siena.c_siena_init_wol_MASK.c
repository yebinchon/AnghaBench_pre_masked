
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct siena_nic_data {int wol_filter_id; } ;
struct efx_nic {int pci_dev; struct siena_nic_data* nic_data; } ;


 int FUNC_0 (struct efx_nic*,int*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_0)
{
 struct siena_nic_data *VAR_1 = VAR_0->nic_data;
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1->wol_filter_id);

 if (VAR_2 != 0) {


  FUNC_1(VAR_0);
  VAR_1->wol_filter_id = -1;
 } else if (VAR_1->wol_filter_id != -1) {
  FUNC_2(VAR_0->pci_dev, 1);
 }
}
