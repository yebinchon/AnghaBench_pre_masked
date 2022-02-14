
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int action; int is_SGI; int* expected_tpt; int lq_type; int ant_type; int current_rate; int is_ht40; struct iwl_rate_scale_data* win; } ;
struct iwl_rate_scale_data {int success_ratio; } ;
struct iwl_mvm {int fw; } ;
struct iwl_lq_sta {int is_green; size_t active_tbl; int last_tpt; int search_better_tbl; int action_counter; struct iwl_scale_tbl_info* lq_info; } ;
struct ieee80211_sta_ht_cap {int cap; } ;
struct ieee80211_sta {struct ieee80211_sta_ht_cap ht_cap; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 int const VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_scale_tbl_info*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_8 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_9 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_10 (int,int *,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static int FUNC_11(struct iwl_mvm *VAR_10,
     struct iwl_lq_sta *VAR_11,
     struct ieee80211_sta *VAR_12, int VAR_13)
{
 u8 VAR_14 = VAR_11->is_green;
 struct iwl_scale_tbl_info *VAR_15 = &(VAR_11->lq_info[VAR_11->active_tbl]);
 struct iwl_scale_tbl_info *VAR_16 =
    &(VAR_11->lq_info[(1 - VAR_11->active_tbl)]);
 struct iwl_rate_scale_data *VAR_17 = &(VAR_15->win[VAR_13]);
 struct ieee80211_sta_ht_cap *VAR_18 = &VAR_12->ht_cap;
 u32 VAR_19 = (sizeof(struct iwl_scale_tbl_info) -
    (sizeof(struct iwl_rate_scale_data) * VAR_7));
 u8 VAR_20;
 u8 VAR_21 = FUNC_2(VAR_10->fw);
 u8 VAR_22 = FUNC_4(VAR_21);
 u8 VAR_23 = 0;
 int VAR_24;

 VAR_20 = VAR_15->action;
 while (1) {
  VAR_11->action_counter++;
  switch (VAR_15->action) {
  case 134:
  case 133:
   FUNC_0(VAR_10, "LQ: SISO toggle Antenna\n");
   if ((VAR_15->action == 134 &&
        VAR_22 <= 1) ||
       (VAR_15->action == 133 &&
        VAR_22 <= 2))
    break;

   if (VAR_17->success_ratio >= VAR_8)
    break;

   FUNC_3(VAR_16, VAR_15, VAR_19);
   if (FUNC_10(VAR_21,
           &VAR_16->current_rate,
           VAR_16)) {
    VAR_23 = 1;
    goto out;
   }
   break;
  case 131:
  case 130:
  case 129:
   FUNC_0(VAR_10, "LQ: SISO switch to MIMO2\n");
   FUNC_3(VAR_16, VAR_15, VAR_19);
   VAR_16->is_SGI = 0;

   if (VAR_15->action == 131)
    VAR_16->ant_type = VAR_0;
   else if (VAR_15->action == 130)
    VAR_16->ant_type = VAR_2;
   else
    VAR_16->ant_type = VAR_3;

   if (!FUNC_6(VAR_21,
          VAR_16->ant_type))
    break;

   VAR_24 = FUNC_8(VAR_10, VAR_11, VAR_12,
       VAR_16, VAR_13);
   if (!VAR_24)
    goto out;
   break;
  case 132:
   if (!VAR_15->is_ht40 && !(VAR_18->cap &
      VAR_4))
    break;
   if (VAR_15->is_ht40 && !(VAR_18->cap &
      VAR_5))
    break;

   FUNC_0(VAR_10, "LQ: SISO toggle SGI/NGI\n");

   FUNC_3(VAR_16, VAR_15, VAR_19);
   if (VAR_14) {
    if (!VAR_15->is_SGI)
     break;
    else
     FUNC_1(VAR_10,
      "SGI was set in GF+SISO\n");
   }
   VAR_16->is_SGI = !VAR_15->is_SGI;
   FUNC_7(VAR_11, VAR_16);
   if (VAR_15->is_SGI) {
    s32 VAR_25 = VAR_11->last_tpt / 100;
    if (VAR_25 >= VAR_16->expected_tpt[VAR_13])
     break;
   }
   VAR_16->current_rate =
    FUNC_5(VAR_10, VAR_16,
            VAR_13, VAR_14);
   VAR_23 = 1;
   goto out;
  case 128:
   FUNC_0(VAR_10, "LQ: SISO switch to MIMO3\n");
   FUNC_3(VAR_16, VAR_15, VAR_19);
   VAR_16->is_SGI = 0;
   VAR_16->ant_type = VAR_1;

   if (!FUNC_6(VAR_21,
          VAR_16->ant_type))
    break;

   VAR_24 = FUNC_9(VAR_10, VAR_11, VAR_12,
       VAR_16, VAR_13);
   if (!VAR_24)
    goto out;
   break;
  }
  VAR_15->action++;
  if (VAR_15->action > VAR_6)
   VAR_15->action = 134;

  if (VAR_15->action == VAR_20)
   break;
 }
 VAR_16->lq_type = VAR_9;
 return 0;

 out:
 VAR_11->search_better_tbl = 1;
 VAR_15->action++;
 if (VAR_15->action > 128)
  VAR_15->action = 134;
 if (VAR_23)
  VAR_16->action = VAR_15->action;

 return 0;
}
