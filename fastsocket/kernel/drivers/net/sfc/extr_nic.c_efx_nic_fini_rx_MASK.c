
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_rx_queue {int rxd; struct efx_nic* efx; } ;
struct efx_nic {TYPE_1__* type; } ;
typedef int efx_oword_t ;
struct TYPE_2__ {int rxd_ptr_tbl_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct efx_nic*,int *) ;
 int FUNC_2 (struct efx_rx_queue*) ;
 int FUNC_3 (struct efx_nic*,int *,int ,int ) ;

void FUNC_4(struct efx_rx_queue *VAR_0)
{
 efx_oword_t VAR_1;
 struct efx_nic *VAR_2 = VAR_0->efx;


 FUNC_0(VAR_1);
 FUNC_3(VAR_2, &VAR_1, VAR_2->type->rxd_ptr_tbl_base,
    FUNC_2(VAR_0));


 FUNC_1(VAR_2, &VAR_0->rxd);
}
