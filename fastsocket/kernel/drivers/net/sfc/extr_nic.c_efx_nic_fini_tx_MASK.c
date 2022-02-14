
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_tx_queue {int txd; int queue; struct efx_nic* efx; } ;
struct efx_nic {TYPE_1__* type; } ;
typedef int efx_oword_t ;
struct TYPE_2__ {int txd_ptr_tbl_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct efx_nic*,int *) ;
 int FUNC_2 (struct efx_nic*,int *,int ,int ) ;

void FUNC_3(struct efx_tx_queue *VAR_0)
{
 struct efx_nic *VAR_1 = VAR_0->efx;
 efx_oword_t VAR_2;


 FUNC_0(VAR_2);
 FUNC_2(VAR_1, &VAR_2, VAR_1->type->txd_ptr_tbl_base,
    VAR_0->queue);


 FUNC_1(VAR_1, &VAR_0->txd);
}
