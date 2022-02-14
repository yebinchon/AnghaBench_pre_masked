
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_ptp_data {int evt_frag_idx; int * evt_frags; } ;
struct efx_nic {int net_dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,int) ;
 int FUNC_2 (struct efx_nic*,int) ;

__attribute__((used)) static void FUNC_3(struct efx_nic *VAR_2, struct efx_ptp_data *VAR_3)
{
 int VAR_4 = FUNC_0(VAR_3->evt_frags[0], VAR_0);
 if (VAR_3->evt_frag_idx != 1) {
  FUNC_2(VAR_2, 1);
  return;
 }

 FUNC_1(VAR_2, VAR_1, VAR_2->net_dev, "PTP error %d\n", VAR_4);
}
