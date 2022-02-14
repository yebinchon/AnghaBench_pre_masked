
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct falcon_nic_data {int xmac_poll_required; } ;
struct TYPE_2__ {int up; } ;
struct efx_nic {TYPE_1__ link_state; struct falcon_nic_data* nic_data; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*,int) ;

void FUNC_3(struct efx_nic *VAR_0)
{
 struct falcon_nic_data *VAR_1 = VAR_0->nic_data;

 if (!FUNC_0(VAR_0) || !VAR_0->link_state.up ||
     !VAR_1->xmac_poll_required)
  return;

 VAR_1->xmac_poll_required = !FUNC_2(VAR_0, 1);
 FUNC_1(VAR_0);
}
