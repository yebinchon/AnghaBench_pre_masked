
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int sequence; } ;
struct iwl_rx_packet {TYPE_1__ hdr; scalar_t__ data; } ;
struct iwl_mvm_tx_resp {int initial_rate; int ra_tid; } ;
struct iwl_mvm_sta {TYPE_2__* tid_data; } ;
struct iwl_mvm {int * fw_id_to_mac_id; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct TYPE_4__ {int rate_n_flags; } ;


 int FUNC_0 (struct ieee80211_sta*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_rx_packet*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct ieee80211_sta* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct iwl_mvm *VAR_2,
      struct iwl_rx_packet *VAR_3)
{
 struct iwl_mvm_tx_resp *VAR_4 = (void *)VAR_3->data;
 int VAR_5 = FUNC_1(VAR_4->ra_tid);
 int VAR_6 = FUNC_2(VAR_4->ra_tid);
 u16 VAR_7 = FUNC_6(VAR_3->hdr.sequence);
 struct ieee80211_sta *VAR_8;

 if (FUNC_4(FUNC_3(VAR_7) < VAR_0))
  return;

 if (FUNC_4(VAR_6 == VAR_1))
  return;

 FUNC_5(VAR_2, VAR_3);

 FUNC_9();

 VAR_8 = FUNC_8(VAR_2->fw_id_to_mac_id[VAR_5]);

 if (!FUNC_4(FUNC_0(VAR_8))) {
  struct iwl_mvm_sta *VAR_9 = (void *)VAR_8->drv_priv;
  VAR_9->tid_data[VAR_6].rate_n_flags =
   FUNC_7(VAR_4->initial_rate);
 }

 FUNC_10();
}
