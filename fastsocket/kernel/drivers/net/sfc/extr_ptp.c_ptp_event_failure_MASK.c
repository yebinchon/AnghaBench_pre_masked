
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_ptp_data {int reset_required; int work; int workwq; int evt_frag_idx; } ;
struct efx_nic {int net_dev; struct efx_ptp_data* ptp_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct efx_nic*,int ,int ,char*,int ,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct efx_nic *VAR_1, int VAR_2)
{
 struct efx_ptp_data *VAR_3 = VAR_1->ptp_data;

 FUNC_0(VAR_1, VAR_0, VAR_1->net_dev,
  "PTP unexpected event length: got %d expected %d\n",
  VAR_3->evt_frag_idx, VAR_2);
 VAR_3->reset_required = 1;
 FUNC_1(VAR_3->workwq, &VAR_3->work);
}
