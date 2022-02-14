
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int action; int is_SGI; int* expected_tpt; int lq_type; int ant_type; int current_rate; int is_ht40; struct iwl_rate_scale_data* win; } ;
struct iwl_rate_scale_data {int success_ratio; } ;
struct iwl_mvm {int fw; } ;
struct iwl_lq_sta {size_t active_tbl; int last_tpt; int search_better_tbl; int action_counter; struct iwl_scale_tbl_info* lq_info; int is_green; } ;
struct ieee80211_sta_ht_cap {int cap; } ;
struct ieee80211_sta {struct ieee80211_sta_ht_cap ht_cap; } ;
typedef int s8 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;







 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_scale_tbl_info*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_7 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_8 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_9 (int,int *,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static int FUNC_10(struct iwl_mvm *VAR_9,
     struct iwl_lq_sta *VAR_10,
     struct ieee80211_sta *VAR_11, int VAR_12)
{
 s8 VAR_13 = VAR_10->is_green;
 struct iwl_scale_tbl_info *VAR_14 = &(VAR_10->lq_info[VAR_10->active_tbl]);
 struct iwl_scale_tbl_info *VAR_15 =
    &(VAR_10->lq_info[(1 - VAR_10->active_tbl)]);
 struct iwl_rate_scale_data *VAR_16 = &(VAR_14->win[VAR_12]);
 struct ieee80211_sta_ht_cap *VAR_17 = &VAR_11->ht_cap;
 u32 VAR_18 = (sizeof(struct iwl_scale_tbl_info) -
    (sizeof(struct iwl_rate_scale_data) * VAR_6));
 u8 VAR_19;
 u8 VAR_20 = FUNC_1(VAR_9->fw);
 u8 VAR_21 = FUNC_3(VAR_20);
 u8 VAR_22 = 0;
 int VAR_23;

 VAR_19 = VAR_14->action;
 while (1) {
  VAR_10->action_counter++;
  switch (VAR_14->action) {
  case 134:
  case 133:
   FUNC_0(VAR_9, "LQ: MIMO2 toggle Antennas\n");

   if (VAR_21 <= 2)
    break;

   if (VAR_16->success_ratio >= VAR_7)
    break;

   FUNC_2(VAR_15, VAR_14, VAR_18);
   if (FUNC_9(VAR_20,
           &VAR_15->current_rate,
           VAR_15)) {
    VAR_22 = 1;
    goto out;
   }
   break;
  case 130:
  case 129:
  case 128:
   FUNC_0(VAR_9, "LQ: MIMO2 switch to SISO\n");


   FUNC_2(VAR_15, VAR_14, VAR_18);

   if (VAR_14->action == 130)
    VAR_15->ant_type = VAR_0;
   else if (VAR_14->action == 129)
    VAR_15->ant_type = VAR_2;
   else
    VAR_15->ant_type = VAR_3;

   if (!FUNC_5(VAR_20,
          VAR_15->ant_type))
    break;

   VAR_23 = FUNC_8(VAR_9, VAR_10, VAR_11,
       VAR_15, VAR_12);
   if (!VAR_23)
    goto out;

   break;

  case 132:
   if (!VAR_14->is_ht40 && !(VAR_17->cap &
      VAR_4))
    break;
   if (VAR_14->is_ht40 && !(VAR_17->cap &
      VAR_5))
    break;

   FUNC_0(VAR_9, "LQ: MIMO2 toggle SGI/NGI\n");


   FUNC_2(VAR_15, VAR_14, VAR_18);
   VAR_15->is_SGI = !VAR_14->is_SGI;
   FUNC_6(VAR_10, VAR_15);






   if (VAR_14->is_SGI) {
    s32 VAR_24 = VAR_10->last_tpt / 100;
    if (VAR_24 >= VAR_15->expected_tpt[VAR_12])
     break;
   }
   VAR_15->current_rate =
    FUNC_4(VAR_9, VAR_15,
            VAR_12, VAR_13);
   VAR_22 = 1;
   goto out;

  case 131:
   FUNC_0(VAR_9, "LQ: MIMO2 switch to MIMO3\n");
   FUNC_2(VAR_15, VAR_14, VAR_18);
   VAR_15->is_SGI = 0;
   VAR_15->ant_type = VAR_1;

   if (!FUNC_5(VAR_20,
          VAR_15->ant_type))
    break;

   VAR_23 = FUNC_7(VAR_9, VAR_10, VAR_11,
       VAR_15, VAR_12);
   if (!VAR_23)
    goto out;

   break;
  }
  VAR_14->action++;
  if (VAR_14->action > 131)
   VAR_14->action = 134;

  if (VAR_14->action == VAR_19)
   break;
 }
 VAR_15->lq_type = VAR_8;
 return 0;
 out:
 VAR_10->search_better_tbl = 1;
 VAR_14->action++;
 if (VAR_14->action > 131)
  VAR_14->action = 134;
 if (VAR_22)
  VAR_15->action = VAR_14->action;

 return 0;
}
