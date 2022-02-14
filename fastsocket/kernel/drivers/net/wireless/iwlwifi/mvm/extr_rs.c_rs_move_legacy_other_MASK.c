
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int action; int lq_type; int ant_type; int is_SGI; int current_rate; struct iwl_rate_scale_data* win; } ;
struct iwl_rate_scale_data {int success_ratio; } ;
struct iwl_mvm {int fw; } ;
struct iwl_lq_sta {size_t active_tbl; int search_better_tbl; scalar_t__ action_counter; struct iwl_scale_tbl_info* lq_info; } ;
struct ieee80211_sta {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_scale_tbl_info*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_6 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_7 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_8 (struct iwl_mvm*,struct iwl_lq_sta*,struct ieee80211_sta*,struct iwl_scale_tbl_info*,int) ;
 int FUNC_9 (int,int *,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static int FUNC_10(struct iwl_mvm *VAR_7,
    struct iwl_lq_sta *VAR_8,
    struct ieee80211_sta *VAR_9,
    int VAR_10)
{
 struct iwl_scale_tbl_info *VAR_11 = &(VAR_8->lq_info[VAR_8->active_tbl]);
 struct iwl_scale_tbl_info *VAR_12 =
    &(VAR_8->lq_info[(1 - VAR_8->active_tbl)]);
 struct iwl_rate_scale_data *VAR_13 = &(VAR_11->win[VAR_10]);
 u32 VAR_14 = (sizeof(struct iwl_scale_tbl_info) -
    (sizeof(struct iwl_rate_scale_data) * VAR_4));
 u8 VAR_15;
 u8 VAR_16 = FUNC_1(VAR_7->fw);
 u8 VAR_17 = FUNC_3(VAR_16);
 int VAR_18;
 u8 VAR_19 = 0;

 VAR_15 = VAR_11->action;
 while (1) {
  VAR_8->action_counter++;
  switch (VAR_11->action) {
  case 134:
  case 133:
   FUNC_0(VAR_7, "LQ: Legacy toggle Antenna\n");

   if ((VAR_11->action == 134 &&
        VAR_17 <= 1) ||
       (VAR_11->action == 133 &&
        VAR_17 <= 2))
    break;


   if (VAR_13->success_ratio >= VAR_5)
    break;


   FUNC_2(VAR_12, VAR_11, VAR_14);

   if (FUNC_9(VAR_16,
           &VAR_12->current_rate,
           VAR_12)) {
    VAR_19 = 1;
    FUNC_5(VAR_8, VAR_12);
    goto out;
   }
   break;
  case 128:
   FUNC_0(VAR_7, "LQ: Legacy switch to SISO\n");


   FUNC_2(VAR_12, VAR_11, VAR_14);
   VAR_12->is_SGI = 0;
   VAR_18 = FUNC_8(VAR_7, VAR_8, VAR_9,
       VAR_12, VAR_10);
   if (!VAR_18) {
    VAR_8->action_counter = 0;
    goto out;
   }

   break;
  case 132:
  case 131:
  case 130:
   FUNC_0(VAR_7, "LQ: Legacy switch to MIMO2\n");


   FUNC_2(VAR_12, VAR_11, VAR_14);
   VAR_12->is_SGI = 0;

   if (VAR_11->action == 132)
    VAR_12->ant_type = VAR_0;
   else if (VAR_11->action == 131)
    VAR_12->ant_type = VAR_2;
   else
    VAR_12->ant_type = VAR_3;

   if (!FUNC_4(VAR_16,
          VAR_12->ant_type))
    break;

   VAR_18 = FUNC_6(VAR_7, VAR_8, VAR_9,
       VAR_12, VAR_10);
   if (!VAR_18) {
    VAR_8->action_counter = 0;
    goto out;
   }
   break;

  case 129:
   FUNC_0(VAR_7, "LQ: Legacy switch to MIMO3\n");


   FUNC_2(VAR_12, VAR_11, VAR_14);
   VAR_12->is_SGI = 0;

   VAR_12->ant_type = VAR_1;

   if (!FUNC_4(VAR_16,
          VAR_12->ant_type))
    break;

   VAR_18 = FUNC_7(VAR_7, VAR_8, VAR_9,
       VAR_12, VAR_10);
   if (!VAR_18) {
    VAR_8->action_counter = 0;
    goto out;
   }
   break;
  }
  VAR_11->action++;
  if (VAR_11->action > 129)
   VAR_11->action = 134;

  if (VAR_11->action == VAR_15)
   break;
 }
 VAR_12->lq_type = VAR_6;
 return 0;

out:
 VAR_8->search_better_tbl = 1;
 VAR_11->action++;
 if (VAR_11->action > 129)
  VAR_11->action = 134;
 if (VAR_19)
  VAR_12->action = VAR_11->action;
 return 0;
}
