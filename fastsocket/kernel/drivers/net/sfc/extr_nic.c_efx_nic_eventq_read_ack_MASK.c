
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efx_nic {TYPE_1__* type; } ;
struct efx_channel {int eventq_read_ptr; int eventq_mask; int channel; struct efx_nic* efx; } ;
typedef int efx_dword_t ;
struct TYPE_2__ {scalar_t__ evq_rptr_tbl_base; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct efx_nic*,int *,scalar_t__) ;

void FUNC_2(struct efx_channel *VAR_2)
{
 efx_dword_t VAR_3;
 struct efx_nic *VAR_4 = VAR_2->efx;

 FUNC_0(VAR_3, VAR_0,
        VAR_2->eventq_read_ptr & VAR_2->eventq_mask);




 FUNC_1(VAR_4, &VAR_3,
     VAR_4->type->evq_rptr_tbl_base +
     VAR_1 * VAR_2->channel);
}
