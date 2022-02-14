
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int action; int lq_type; int ant_type; int is_SGI; int current_rate; struct iwl_rate_scale_data* win; } ;
struct iwl_rate_scale_data {int success_ratio; } ;
struct TYPE_3__ {int tx_chains_num; } ;
struct iwl_priv {int bt_traffic_load; scalar_t__ bt_full_concurrent; TYPE_2__* nvm_data; TYPE_1__ hw_params; } ;
struct iwl_lq_sta {size_t active_tbl; int search_better_tbl; scalar_t__ action_counter; struct iwl_scale_tbl_info* lq_info; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_conf {int dummy; } ;
struct TYPE_4__ {int valid_tx_ant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*,int) ;







 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwl_priv*) ;
 scalar_t__ FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (struct iwl_scale_tbl_info*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_8 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_9 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_10 (struct iwl_priv*,struct iwl_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_11 (int,int *,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static int FUNC_12(struct iwl_priv *VAR_8,
    struct iwl_lq_sta *VAR_9,
    struct ieee80211_conf *VAR_10,
    struct ieee80211_sta *VAR_11,
    int VAR_12)
{
 struct iwl_scale_tbl_info *VAR_13 = &(VAR_9->lq_info[VAR_9->active_tbl]);
 struct iwl_scale_tbl_info *VAR_14 =
    &(VAR_9->lq_info[(1 - VAR_9->active_tbl)]);
 struct iwl_rate_scale_data *VAR_15 = &(VAR_13->win[VAR_12]);
 u32 VAR_16 = (sizeof(struct iwl_scale_tbl_info) -
    (sizeof(struct iwl_rate_scale_data) * VAR_5));
 u8 VAR_17;
 u8 VAR_18 = VAR_8->nvm_data->valid_tx_ant;
 u8 VAR_19 = VAR_8->hw_params.tx_chains_num;
 int VAR_20 = 0;
 u8 VAR_21 = 0;

 switch (VAR_8->bt_traffic_load) {
 case 135:

  break;
 case 136:

  if (VAR_13->action == 133)
   VAR_13->action = 128;
  break;
 case 137:
 case 138:

  VAR_18 =
   FUNC_2(VAR_8->nvm_data->valid_tx_ant);
  if (VAR_13->action >= 133 &&
      VAR_13->action != 128)
   VAR_13->action = 128;
  break;
 default:
  FUNC_1(VAR_8, "Invalid BT load %d", VAR_8->bt_traffic_load);
  break;
 }

 if (!FUNC_3(VAR_8))

  VAR_13->action = 134;
 else if (FUNC_4(VAR_8) == VAR_4 &&
     VAR_13->action > 128)
  VAR_13->action = 128;


 if (VAR_8->bt_full_concurrent) {
  if (!FUNC_3(VAR_8))
   VAR_13->action = 134;
  else if (VAR_13->action >= 133)
   VAR_13->action = 128;
  VAR_18 =
   FUNC_2(VAR_8->nvm_data->valid_tx_ant);
 }

 VAR_17 = VAR_13->action;
 for (; ;) {
  VAR_9->action_counter++;
  switch (VAR_13->action) {
  case 134:
  case 133:
   FUNC_0(VAR_8, "LQ: Legacy toggle Antenna\n");

   if ((VAR_13->action == 134 &&
       VAR_19 <= 1) ||
       (VAR_13->action == 133 &&
       VAR_19 <= 2))
    break;


   if (VAR_15->success_ratio >= VAR_6 &&
       !VAR_8->bt_full_concurrent &&
       VAR_8->bt_traffic_load ==
     135)
    break;


   FUNC_5(VAR_14, VAR_13, VAR_16);

   if (FUNC_11(VAR_18,
    &VAR_14->current_rate, VAR_14)) {
    VAR_21 = 1;
    FUNC_7(VAR_9, VAR_14);
    goto out;
   }
   break;
  case 128:
   FUNC_0(VAR_8, "LQ: Legacy switch to SISO\n");


   FUNC_5(VAR_14, VAR_13, VAR_16);
   VAR_14->is_SGI = 0;
   VAR_20 = FUNC_10(VAR_8, VAR_9, VAR_10, VAR_11,
       VAR_14, VAR_12);
   if (!VAR_20) {
    VAR_9->action_counter = 0;
    goto out;
   }

   break;
  case 132:
  case 131:
  case 130:
   FUNC_0(VAR_8, "LQ: Legacy switch to MIMO2\n");


   FUNC_5(VAR_14, VAR_13, VAR_16);
   VAR_14->is_SGI = 0;

   if (VAR_13->action == 132)
    VAR_14->ant_type = VAR_0;
   else if (VAR_13->action == 131)
    VAR_14->ant_type = VAR_2;
   else
    VAR_14->ant_type = VAR_3;

   if (!FUNC_6(VAR_18, VAR_14->ant_type))
    break;

   VAR_20 = FUNC_8(VAR_8, VAR_9, VAR_10, VAR_11,
       VAR_14, VAR_12);
   if (!VAR_20) {
    VAR_9->action_counter = 0;
    goto out;
   }
   break;

  case 129:
   FUNC_0(VAR_8, "LQ: Legacy switch to MIMO3\n");


   FUNC_5(VAR_14, VAR_13, VAR_16);
   VAR_14->is_SGI = 0;

   VAR_14->ant_type = VAR_1;

   if (!FUNC_6(VAR_18, VAR_14->ant_type))
    break;

   VAR_20 = FUNC_9(VAR_8, VAR_9, VAR_10, VAR_11,
       VAR_14, VAR_12);
   if (!VAR_20) {
    VAR_9->action_counter = 0;
    goto out;
   }
   break;
  }
  VAR_13->action++;
  if (VAR_13->action > 129)
   VAR_13->action = 134;

  if (VAR_13->action == VAR_17)
   break;

 }
 VAR_14->lq_type = VAR_7;
 return 0;

out:
 VAR_9->search_better_tbl = 1;
 VAR_13->action++;
 if (VAR_13->action > 129)
  VAR_13->action = 134;
 if (VAR_21)
  VAR_14->action = VAR_13->action;
 return 0;

}
