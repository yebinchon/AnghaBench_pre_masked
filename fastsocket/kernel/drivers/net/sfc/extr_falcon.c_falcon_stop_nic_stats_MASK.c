
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {scalar_t__* stats_dma_done; scalar_t__ stats_pending; int stats_timer; int stats_disable_count; } ;
struct efx_nic {int stats_lock; struct falcon_nic_data* nic_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct efx_nic *VAR_1)
{
 struct falcon_nic_data *VAR_2 = VAR_1->nic_data;
 int VAR_3;

 FUNC_2();

 FUNC_4(&VAR_1->stats_lock);
 ++VAR_2->stats_disable_count;
 FUNC_5(&VAR_1->stats_lock);

 FUNC_0(&VAR_2->stats_timer);



 for (VAR_3 = 0; VAR_3 < 4 && VAR_2->stats_pending; VAR_3++) {
  if (*VAR_2->stats_dma_done == VAR_0)
   break;
  FUNC_3(1);
 }

 FUNC_4(&VAR_1->stats_lock);
 FUNC_1(VAR_1);
 FUNC_5(&VAR_1->stats_lock);
}
