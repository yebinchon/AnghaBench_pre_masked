
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {scalar_t__ stats_disable_count; } ;
struct efx_nic {int stats_lock; struct falcon_nic_data* nic_data; } ;


 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0)
{
 struct efx_nic *VAR_1 = (struct efx_nic *)VAR_0;
 struct falcon_nic_data *VAR_2 = VAR_1->nic_data;

 FUNC_2(&VAR_1->stats_lock);

 FUNC_0(VAR_1);
 if (VAR_2->stats_disable_count == 0)
  FUNC_1(VAR_1);

 FUNC_3(&VAR_1->stats_lock);
}
