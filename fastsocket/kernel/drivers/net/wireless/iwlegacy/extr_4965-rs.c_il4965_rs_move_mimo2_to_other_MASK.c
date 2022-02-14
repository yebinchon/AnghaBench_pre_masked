
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct il_scale_tbl_info {int action; int is_SGI; int* expected_tpt; int lq_type; int current_rate; int is_ht40; int ant_type; struct il_rate_scale_data* win; } ;
struct il_rate_scale_data {int success_ratio; } ;
struct TYPE_2__ {int valid_tx_ant; int tx_chains_num; } ;
struct il_priv {TYPE_1__ hw_params; } ;
struct il_lq_sta {size_t active_tbl; int last_tpt; int search_better_tbl; int action_counter; struct il_scale_tbl_info* lq_info; int is_green; } ;
struct ieee80211_sta_ht_cap {int cap; } ;
struct ieee80211_sta {struct ieee80211_sta_ht_cap ht_cap; } ;
struct ieee80211_conf {int dummy; } ;
typedef int s8 ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct il_priv*,struct il_scale_tbl_info*,int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct il_lq_sta*,struct il_scale_tbl_info*) ;
 int FUNC_4 (struct il_priv*,struct il_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct il_scale_tbl_info*,int) ;
 int FUNC_5 (int,int *,struct il_scale_tbl_info*) ;
 int FUNC_6 (struct il_scale_tbl_info*,struct il_scale_tbl_info*,int) ;

__attribute__((used)) static int
FUNC_7(struct il_priv *VAR_8, struct il_lq_sta *VAR_9,
         struct ieee80211_conf *VAR_10,
         struct ieee80211_sta *VAR_11, int VAR_12)
{
 s8 VAR_13 = VAR_9->is_green;
 struct il_scale_tbl_info *VAR_14 = &(VAR_9->lq_info[VAR_9->active_tbl]);
 struct il_scale_tbl_info *VAR_15 =
     &(VAR_9->lq_info[(1 - VAR_9->active_tbl)]);
 struct il_rate_scale_data *VAR_16 = &(VAR_14->win[VAR_12]);
 struct ieee80211_sta_ht_cap *VAR_17 = &VAR_11->ht_cap;
 u32 VAR_18 =
     (sizeof(struct il_scale_tbl_info) -
      (sizeof(struct il_rate_scale_data) * VAR_7));
 u8 VAR_19;
 u8 VAR_20 = VAR_8->hw_params.valid_tx_ant;
 u8 VAR_21 = VAR_8->hw_params.tx_chains_num;
 u8 VAR_22 = 0;
 int VAR_23;

 VAR_19 = VAR_14->action;
 for (;;) {
  VAR_9->action_counter++;
  switch (VAR_14->action) {
  case 133:
  case 132:
   FUNC_0("LQ: MIMO2 toggle Antennas\n");

   if (VAR_21 <= 2)
    break;

   if (VAR_16->success_ratio >= VAR_5)
    break;

   FUNC_6(VAR_15, VAR_14, VAR_18);
   if (FUNC_5
       (VAR_20, &VAR_15->current_rate,
        VAR_15)) {
    VAR_22 = 1;
    goto out;
   }
   break;
  case 130:
  case 129:
  case 128:
   FUNC_0("LQ: MIMO2 switch to SISO\n");


   FUNC_6(VAR_15, VAR_14, VAR_18);

   if (VAR_14->action == 130)
    VAR_15->ant_type = VAR_0;
   else if (VAR_14->action == 129)
    VAR_15->ant_type = VAR_1;
   else
    VAR_15->ant_type = VAR_2;

   if (!FUNC_2
       (VAR_20, VAR_15->ant_type))
    break;

   VAR_23 =
       FUNC_4(VAR_8, VAR_9, VAR_10, VAR_11,
           VAR_15, VAR_12);
   if (!VAR_23)
    goto out;

   break;

  case 131:
   if (!VAR_14->is_ht40 &&
       !(VAR_17->cap & VAR_3))
    break;
   if (VAR_14->is_ht40 &&
       !(VAR_17->cap & VAR_4))
    break;

   FUNC_0("LQ: MIMO2 toggle SGI/NGI\n");


   FUNC_6(VAR_15, VAR_14, VAR_18);
   VAR_15->is_SGI = !VAR_14->is_SGI;
   FUNC_3(VAR_9, VAR_15);






   if (VAR_14->is_SGI) {
    s32 VAR_24 = VAR_9->last_tpt / 100;
    if (VAR_24 >= VAR_15->expected_tpt[VAR_12])
     break;
   }
   VAR_15->current_rate =
       FUNC_1(VAR_8, VAR_15, VAR_12,
        VAR_13);
   VAR_22 = 1;
   goto out;

  }
  VAR_14->action++;
  if (VAR_14->action > 131)
   VAR_14->action = 133;

  if (VAR_14->action == VAR_19)
   break;
 }
 VAR_15->lq_type = VAR_6;
 return 0;
out:
 VAR_9->search_better_tbl = 1;
 VAR_14->action++;
 if (VAR_14->action > 131)
  VAR_14->action = 133;
 if (VAR_22)
  VAR_15->action = VAR_14->action;

 return 0;

}
