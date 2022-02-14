
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct falcon_nic_data {scalar_t__ xmac_poll_required; } ;
struct TYPE_2__ {int up; } ;
struct efx_nic {TYPE_1__ link_state; struct falcon_nic_data* nic_data; } ;
typedef int efx_oword_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct efx_nic*) ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*,int *,int ) ;

__attribute__((used)) static void FUNC_4(struct efx_nic *VAR_2)
{
 struct falcon_nic_data *VAR_3 = VAR_2->nic_data;
 efx_oword_t VAR_4;

 if ((FUNC_2(VAR_2) != VAR_0) || FUNC_1(VAR_2))
  return;


 if (!FUNC_0(VAR_2) || !VAR_2->link_state.up)
  return;



 if (VAR_3->xmac_poll_required)
  return;

 FUNC_3(VAR_2, &VAR_4, VAR_1);
}
