
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct iwl_tx_cmd {int rate_n_flags; int tx_flags; scalar_t__ initial_rate_index; int data_retry_limit; int rts_retry_limit; } ;
struct iwl_mvm {int mgmt_last_antenna_idx; int fw; TYPE_3__* nvm_data; } ;
struct TYPE_5__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {size_t band; TYPE_2__ control; } ;
struct ieee80211_sta {int dummy; } ;
typedef int __le16 ;
struct TYPE_6__ {int * bands; } ;
struct TYPE_4__ {int flags; int idx; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct iwl_mvm*,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_12(struct iwl_mvm *VAR_15,
        struct iwl_tx_cmd *VAR_16,
        struct ieee80211_tx_info *VAR_17,
        struct ieee80211_sta *VAR_18,
        __le16 VAR_19)
{
 u32 VAR_20;
 int VAR_21;
 u8 VAR_22;


 VAR_16->rts_retry_limit = VAR_9;


 if (FUNC_6(VAR_19)) {
  VAR_16->data_retry_limit = VAR_7;
  VAR_16->rts_retry_limit =
   FUNC_10(VAR_16->data_retry_limit, VAR_16->rts_retry_limit);
 } else if (FUNC_4(VAR_19)) {
  VAR_16->data_retry_limit = VAR_2;
 } else {
  VAR_16->data_retry_limit = VAR_3;
 }






 if (FUNC_5(VAR_19) && VAR_18) {
  VAR_16->initial_rate_index = 0;
  VAR_16->tx_flags |= FUNC_3(VAR_14);
  return;
 } else if (FUNC_4(VAR_19)) {
  VAR_16->tx_flags |=
   FUNC_3(VAR_12 | VAR_13);
 }


 FUNC_2(VAR_17->control.rates[0].flags & VAR_1,
    "Got an HT rate for a non data frame 0x%x\n",
    VAR_17->control.rates[0].flags);

 VAR_21 = VAR_17->control.rates[0].idx;

 if (VAR_21 < 0 || VAR_21 > VAR_8)
  VAR_21 = FUNC_11(
    &VAR_15->nvm_data->bands[VAR_17->band], VAR_18);


 if (VAR_17->band == VAR_0)
  VAR_21 += VAR_5;


 FUNC_1(VAR_4 != 0);


 VAR_22 = FUNC_8(VAR_21);

 VAR_15->mgmt_last_antenna_idx =
  FUNC_9(VAR_15, FUNC_7(VAR_15->fw),
         VAR_15->mgmt_last_antenna_idx);
 VAR_20 = FUNC_0(VAR_15->mgmt_last_antenna_idx) << VAR_10;


 if ((VAR_21 >= VAR_4) && (VAR_21 <= VAR_6))
  VAR_20 |= VAR_11;


 VAR_16->rate_n_flags = FUNC_3((u32)VAR_22 | VAR_20);
}
