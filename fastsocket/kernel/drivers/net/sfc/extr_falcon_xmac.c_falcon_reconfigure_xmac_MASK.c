
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {int xmac_poll_required; } ;
struct efx_nic {struct falcon_nic_data* nic_data; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (struct efx_nic*,int) ;

int FUNC_5(struct efx_nic *VAR_0)
{
 struct falcon_nic_data *VAR_1 = VAR_0->nic_data;

 FUNC_2(VAR_0);
 FUNC_3(VAR_0);

 FUNC_1(VAR_0);

 VAR_1->xmac_poll_required = !FUNC_4(VAR_0, 5);
 FUNC_0(VAR_0);

 return 0;
}
