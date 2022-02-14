
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_tx_queue {int ptr_mask; int txd; struct efx_nic* efx; } ;
struct efx_nic {int dummy; } ;
typedef int efx_qword_t ;


 int FUNC_0 (struct efx_nic*,int *,unsigned int) ;

int FUNC_1(struct efx_tx_queue *VAR_0)
{
 struct efx_nic *VAR_1 = VAR_0->efx;
 unsigned VAR_2;

 VAR_2 = VAR_0->ptr_mask + 1;
 return FUNC_0(VAR_1, &VAR_0->txd,
     VAR_2 * sizeof(efx_qword_t));
}
