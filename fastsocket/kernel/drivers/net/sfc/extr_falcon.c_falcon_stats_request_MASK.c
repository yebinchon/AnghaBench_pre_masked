
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct falcon_nic_data {int stats_pending; int stats_disable_count; int stats_timer; int * stats_dma_done; } ;
struct TYPE_2__ {int dma_addr; } ;
struct efx_nic {TYPE_1__ stats_buffer; struct falcon_nic_data* nic_data; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int ,int ,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct efx_nic*,int *,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct efx_nic *VAR_6)
{
 struct falcon_nic_data *VAR_7 = VAR_6->nic_data;
 efx_oword_t VAR_8;

 FUNC_1(VAR_7->stats_pending);
 FUNC_1(VAR_7->stats_disable_count);

 if (VAR_7->stats_dma_done == ((void*)0))
  return;

 *VAR_7->stats_dma_done = VAR_0;
 VAR_7->stats_pending = 1;
 FUNC_5();


 FUNC_0(VAR_8,
        VAR_2, 1,
        VAR_1,
        VAR_6->stats_buffer.dma_addr);
 FUNC_2(VAR_6, &VAR_8, VAR_3);

 FUNC_3(&VAR_7->stats_timer, FUNC_4(VAR_5 + VAR_4 / 2));
}
