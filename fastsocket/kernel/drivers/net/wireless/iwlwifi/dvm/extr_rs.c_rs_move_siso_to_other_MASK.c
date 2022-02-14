
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int action; int is_SGI; int* expected_tpt; int lq_type; int ant_type; int current_rate; int is_ht40; struct iwl_rate_scale_data* win; } ;
struct iwl_rate_scale_data {int success_ratio; } ;
struct TYPE_3__ {int tx_chains_num; } ;
struct iwl_priv {int bt_traffic_load; scalar_t__ bt_full_concurrent; TYPE_2__* nvm_data; TYPE_1__ hw_params; } ;
struct iwl_lq_sta {int is_green; size_t active_tbl; int last_tpt; int search_better_tbl; int action_counter; struct iwl_scale_tbl_info* lq_info; } ;
struct ieee80211_sta_ht_cap {int cap; } ;
struct ieee80211_sta {struct ieee80211_sta_ht_cap ht_cap; } ;
struct ieee80211_conf {int dummy; } ;
typedef int s32 ;
struct TYPE_4__ {int valid_tx_ant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;




 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,...) ;
 int VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;







 int VAR_11 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct iwl_priv*) ;
 int FUNC_4 (struct iwl_scale_tbl_info*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_5 (struct iwl_priv*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_8 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_9 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_10 (int,int *,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static int FUNC_11(struct iwl_priv *VAR_12,
     struct iwl_lq_sta *VAR_13,
     struct ieee80211_conf *VAR_14,
     struct ieee80211_sta *VAR_15, int VAR_16)
{
 u8 VAR_17 = VAR_13->is_green;
 struct iwl_scale_tbl_info *VAR_18 = &(VAR_13->lq_info[VAR_13->active_tbl]);
 struct iwl_scale_tbl_info *VAR_19 =
    &(VAR_13->lq_info[(1 - VAR_13->active_tbl)]);
 struct iwl_rate_scale_data *VAR_20 = &(VAR_18->win[VAR_16]);
 struct ieee80211_sta_ht_cap *VAR_21 = &VAR_15->ht_cap;
 u32 VAR_22 = (sizeof(struct iwl_scale_tbl_info) -
    (sizeof(struct iwl_rate_scale_data) * VAR_9));
 u8 VAR_23;
 u8 VAR_24 = VAR_12->nvm_data->valid_tx_ant;
 u8 VAR_25 = VAR_12->hw_params.tx_chains_num;
 u8 VAR_26 = 0;
 int VAR_27;

 switch (VAR_12->bt_traffic_load) {
 case 135:

  break;
 case 136:

  if (VAR_18->action == 133)
   VAR_18->action = 131;
  break;
 case 137:
 case 138:

  VAR_24 =
   FUNC_2(VAR_12->nvm_data->valid_tx_ant);
  if (VAR_18->action != 134)
   VAR_18->action = 134;
  break;
 default:
  FUNC_1(VAR_12, "Invalid BT load %d", VAR_12->bt_traffic_load);
  break;
 }

 if (FUNC_3(VAR_12) == VAR_6 &&
     VAR_18->action > 133) {

  VAR_18->action = 134;
 }


 if (VAR_12->bt_full_concurrent) {
  VAR_24 =
   FUNC_2(VAR_12->nvm_data->valid_tx_ant);
  if (VAR_18->action >= VAR_7)
   VAR_18->action = 134;
 }

 VAR_23 = VAR_18->action;
 for (;;) {
  VAR_13->action_counter++;
  switch (VAR_18->action) {
  case 134:
  case 133:
   FUNC_0(VAR_12, "LQ: SISO toggle Antenna\n");
   if ((VAR_18->action == 134 &&
      VAR_25 <= 1) ||
       (VAR_18->action == 133 &&
      VAR_25 <= 2))
    break;

   if (VAR_20->success_ratio >= VAR_10 &&
       !VAR_12->bt_full_concurrent &&
       VAR_12->bt_traffic_load ==
     135)
    break;

   FUNC_4(VAR_19, VAR_18, VAR_22);
   if (FUNC_10(VAR_24,
           &VAR_19->current_rate, VAR_19)) {
    VAR_26 = 1;
    goto out;
   }
   break;
  case 131:
  case 130:
  case 129:
   FUNC_0(VAR_12, "LQ: SISO switch to MIMO2\n");
   FUNC_4(VAR_19, VAR_18, VAR_22);
   VAR_19->is_SGI = 0;

   if (VAR_18->action == 131)
    VAR_19->ant_type = VAR_0;
   else if (VAR_18->action == 130)
    VAR_19->ant_type = VAR_2;
   else
    VAR_19->ant_type = VAR_3;

   if (!FUNC_6(VAR_24, VAR_19->ant_type))
    break;

   VAR_27 = FUNC_8(VAR_12, VAR_13, VAR_14, VAR_15,
       VAR_19, VAR_16);
   if (!VAR_27)
    goto out;
   break;
  case 132:
   if (!VAR_18->is_ht40 && !(VAR_21->cap &
      VAR_4))
    break;
   if (VAR_18->is_ht40 && !(VAR_21->cap &
      VAR_5))
    break;

   FUNC_0(VAR_12, "LQ: SISO toggle SGI/NGI\n");

   FUNC_4(VAR_19, VAR_18, VAR_22);
   if (VAR_17) {
    if (!VAR_18->is_SGI)
     break;
    else
     FUNC_1(VAR_12,
      "SGI was set in GF+SISO\n");
   }
   VAR_19->is_SGI = !VAR_18->is_SGI;
   FUNC_7(VAR_13, VAR_19);
   if (VAR_18->is_SGI) {
    s32 VAR_28 = VAR_13->last_tpt / 100;
    if (VAR_28 >= VAR_19->expected_tpt[VAR_16])
     break;
   }
   VAR_19->current_rate =
    FUNC_5(VAR_12, VAR_19,
            VAR_16, VAR_17);
   VAR_26 = 1;
   goto out;
  case 128:
   FUNC_0(VAR_12, "LQ: SISO switch to MIMO3\n");
   FUNC_4(VAR_19, VAR_18, VAR_22);
   VAR_19->is_SGI = 0;
   VAR_19->ant_type = VAR_1;

   if (!FUNC_6(VAR_24, VAR_19->ant_type))
    break;

   VAR_27 = FUNC_9(VAR_12, VAR_13, VAR_14, VAR_15,
       VAR_19, VAR_16);
   if (!VAR_27)
    goto out;
   break;
  }
  VAR_18->action++;
  if (VAR_18->action > VAR_8)
   VAR_18->action = 134;

  if (VAR_18->action == VAR_23)
   break;
 }
 VAR_19->lq_type = VAR_11;
 return 0;

 out:
 VAR_13->search_better_tbl = 1;
 VAR_18->action++;
 if (VAR_18->action > 128)
  VAR_18->action = 134;
 if (VAR_26)
  VAR_19->action = VAR_18->action;

 return 0;
}
