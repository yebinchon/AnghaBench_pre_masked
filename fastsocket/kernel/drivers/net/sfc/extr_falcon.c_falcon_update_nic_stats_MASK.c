
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {int stats_pending; scalar_t__* stats_dma_done; scalar_t__ stats_disable_count; } ;
struct efx_nic {int n_rx_nodesc_drop_cnt; struct falcon_nic_data* nic_data; } ;
typedef int efx_oword_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct efx_nic*,int *,int ) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct efx_nic *VAR_3)
{
 struct falcon_nic_data *VAR_4 = VAR_3->nic_data;
 efx_oword_t VAR_5;

 if (VAR_4->stats_disable_count)
  return;

 FUNC_1(VAR_3, &VAR_5, VAR_2);
 VAR_3->n_rx_nodesc_drop_cnt +=
  FUNC_0(VAR_5, VAR_1);

 if (VAR_4->stats_pending &&
     *VAR_4->stats_dma_done == VAR_0) {
  VAR_4->stats_pending = 0;
  FUNC_3();
  FUNC_2(VAR_3);
 }
}
