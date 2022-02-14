
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {int stats_pending; scalar_t__* stats_dma_done; } ;
struct efx_nic {int net_dev; struct falcon_nic_data* nic_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct efx_nic*) ;
 int VAR_1 ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_2)
{
 struct falcon_nic_data *VAR_3 = VAR_2->nic_data;

 if (!VAR_3->stats_pending)
  return;

 VAR_3->stats_pending = 0;
 if (*VAR_3->stats_dma_done == VAR_0) {
  FUNC_2();
  FUNC_0(VAR_2);
 } else {
  FUNC_1(VAR_2, VAR_1, VAR_2->net_dev,
     "timed out waiting for statistics\n");
 }
}
