
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_ptp_data {scalar_t__ evt_frag_idx; int evt_code; int * evt_frags; int enabled; } ;
struct efx_nic {int net_dev; struct efx_ptp_data* ptp_data; } ;
typedef int efx_qword_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_3 (struct efx_nic*,struct efx_ptp_data*) ;
 int FUNC_4 (struct efx_nic*,struct efx_ptp_data*) ;
 int FUNC_5 (struct efx_nic*,struct efx_ptp_data*) ;

void FUNC_6(struct efx_nic *VAR_4, efx_qword_t *VAR_5)
{
 struct efx_ptp_data *VAR_6 = VAR_4->ptp_data;
 int VAR_7 = FUNC_0(*VAR_5, VAR_2);

 if (!VAR_6->enabled)
  return;

 if (VAR_6->evt_frag_idx == 0) {
  VAR_6->evt_code = VAR_7;
 } else if (VAR_6->evt_code != VAR_7) {
  FUNC_2(VAR_4, VAR_3, VAR_4->net_dev,
     "PTP out of sequence event %d\n", VAR_7);
  VAR_6->evt_frag_idx = 0;
 }

 VAR_6->evt_frags[VAR_6->evt_frag_idx++] = *VAR_5;
 if (!FUNC_1(*VAR_5, VAR_0)) {

  switch (VAR_7) {
  case 128:
   FUNC_5(VAR_4, VAR_6);
   break;
  case 130:
   FUNC_3(VAR_4, VAR_6);
   break;
  case 129:
   FUNC_4(VAR_4, VAR_6);
   break;
  default:
   FUNC_2(VAR_4, VAR_3, VAR_4->net_dev,
      "PTP unknown event %d\n", VAR_7);
   break;
  }
  VAR_6->evt_frag_idx = 0;
 } else if (VAR_1 == VAR_6->evt_frag_idx) {
  FUNC_2(VAR_4, VAR_3, VAR_4->net_dev,
     "PTP too many event fragments\n");
  VAR_6->evt_frag_idx = 0;
 }
}
