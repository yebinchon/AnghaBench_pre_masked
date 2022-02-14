
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int action; int is_SGI; int* expected_tpt; int lq_type; int current_rate; int is_ht40; int ant_type; struct iwl_rate_scale_data* win; } ;
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_scale_tbl_info*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_7 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_8 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_9 (int,int *,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static int FUNC_10(struct iwl_mvm *VAR_11,
     struct iwl_lq_sta *VAR_12,
     struct ieee80211_sta *VAR_13, int VAR_14)
{
 s8 VAR_15 = VAR_12->is_green;
 struct iwl_scale_tbl_info *VAR_16 = &(VAR_12->lq_info[VAR_12->active_tbl]);
 struct iwl_scale_tbl_info *VAR_17 =
    &(VAR_12->lq_info[(1 - VAR_12->active_tbl)]);
 struct iwl_rate_scale_data *VAR_18 = &(VAR_16->win[VAR_14]);
 struct ieee80211_sta_ht_cap *VAR_19 = &VAR_13->ht_cap;
 u32 VAR_20 = (sizeof(struct iwl_scale_tbl_info) -
    (sizeof(struct iwl_rate_scale_data) * VAR_8));
 u8 VAR_21;
 u8 VAR_22 = FUNC_1(VAR_11->fw);
 u8 VAR_23 = FUNC_3(VAR_22);
 int VAR_24;
 u8 VAR_25 = 0;

 VAR_21 = VAR_16->action;
 while (1) {
  VAR_12->action_counter++;
  switch (VAR_16->action) {
  case 136:
  case 135:
   FUNC_0(VAR_11, "LQ: MIMO3 toggle Antennas\n");

   if (VAR_23 <= 3)
    break;

   if (VAR_18->success_ratio >= VAR_9)
    break;

   FUNC_2(VAR_17, VAR_16, VAR_20);
   if (FUNC_9(VAR_22,
           &VAR_17->current_rate,
           VAR_17))
    goto out;
   break;
  case 130:
  case 129:
  case 128:
   FUNC_0(VAR_11, "LQ: MIMO3 switch to SISO\n");


   FUNC_2(VAR_17, VAR_16, VAR_20);

   if (VAR_16->action == 130)
    VAR_17->ant_type = VAR_0;
   else if (VAR_16->action == 129)
    VAR_17->ant_type = VAR_3;
   else
    VAR_17->ant_type = VAR_5;

   if (!FUNC_5(VAR_22,
          VAR_17->ant_type))
    break;

   VAR_24 = FUNC_8(VAR_11, VAR_12, VAR_13,
      VAR_17, VAR_14);
   if (!VAR_24)
    goto out;

   break;

  case 133:
  case 132:
  case 131:
   FUNC_0(VAR_11, "LQ: MIMO3 switch to MIMO2\n");

   FUNC_2(VAR_17, VAR_16, VAR_20);
   VAR_17->is_SGI = 0;
   if (VAR_16->action == 133)
    VAR_17->ant_type = VAR_1;
   else if (VAR_16->action == 132)
    VAR_17->ant_type = VAR_2;
   else
    VAR_17->ant_type = VAR_4;

   if (!FUNC_5(VAR_22,
          VAR_17->ant_type))
    break;

   VAR_24 = FUNC_7(VAR_11, VAR_12, VAR_13,
       VAR_17, VAR_14);
   if (!VAR_24)
    goto out;

   break;

  case 134:
   if (!VAR_16->is_ht40 && !(VAR_19->cap &
      VAR_6))
    break;
   if (VAR_16->is_ht40 && !(VAR_19->cap &
      VAR_7))
    break;

   FUNC_0(VAR_11, "LQ: MIMO3 toggle SGI/NGI\n");


   FUNC_2(VAR_17, VAR_16, VAR_20);
   VAR_17->is_SGI = !VAR_16->is_SGI;
   FUNC_6(VAR_12, VAR_17);






   if (VAR_16->is_SGI) {
    s32 VAR_26 = VAR_12->last_tpt / 100;
    if (VAR_26 >= VAR_17->expected_tpt[VAR_14])
     break;
   }
   VAR_17->current_rate =
    FUNC_4(VAR_11, VAR_17,
            VAR_14, VAR_15);
   VAR_25 = 1;
   goto out;
  }
  VAR_16->action++;
  if (VAR_16->action > 134)
   VAR_16->action = 136;

  if (VAR_16->action == VAR_21)
   break;
 }
 VAR_17->lq_type = VAR_10;
 return 0;
 out:
 VAR_12->search_better_tbl = 1;
 VAR_16->action++;
 if (VAR_16->action > 134)
  VAR_16->action = 136;
 if (VAR_25)
  VAR_17->action = VAR_16->action;

 return 0;
}
