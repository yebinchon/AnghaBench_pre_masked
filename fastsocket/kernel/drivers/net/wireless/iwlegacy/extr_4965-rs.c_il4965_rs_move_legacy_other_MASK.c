
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct il_scale_tbl_info {int action; int lq_type; int ant_type; int is_SGI; int current_rate; struct il_rate_scale_data* win; } ;
struct il_rate_scale_data {int success_ratio; } ;
struct TYPE_2__ {int valid_tx_ant; int tx_chains_num; } ;
struct il_priv {TYPE_1__ hw_params; } ;
struct il_lq_sta {size_t active_tbl; int search_better_tbl; scalar_t__ action_counter; struct il_scale_tbl_info* lq_info; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_conf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;






 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct il_lq_sta*,struct il_scale_tbl_info*) ;
 int FUNC_3 (struct il_priv*,struct il_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct il_scale_tbl_info*,int) ;
 int FUNC_4 (struct il_priv*,struct il_lq_sta*,struct ieee80211_conf*,struct ieee80211_sta*,struct il_scale_tbl_info*,int) ;
 int FUNC_5 (int,int *,struct il_scale_tbl_info*) ;
 int FUNC_6 (struct il_scale_tbl_info*,struct il_scale_tbl_info*,int) ;

__attribute__((used)) static int
FUNC_7(struct il_priv *VAR_6, struct il_lq_sta *VAR_7,
       struct ieee80211_conf *VAR_8,
       struct ieee80211_sta *VAR_9, int VAR_10)
{
 struct il_scale_tbl_info *VAR_11 = &(VAR_7->lq_info[VAR_7->active_tbl]);
 struct il_scale_tbl_info *VAR_12 =
     &(VAR_7->lq_info[(1 - VAR_7->active_tbl)]);
 struct il_rate_scale_data *VAR_13 = &(VAR_11->win[VAR_10]);
 u32 VAR_14 =
     (sizeof(struct il_scale_tbl_info) -
      (sizeof(struct il_rate_scale_data) * VAR_5));
 u8 VAR_15;
 u8 VAR_16 = VAR_6->hw_params.valid_tx_ant;
 u8 VAR_17 = VAR_6->hw_params.tx_chains_num;
 int VAR_18 = 0;
 u8 VAR_19 = 0;

 VAR_11->action = 128;

 VAR_15 = VAR_11->action;
 for (;;) {
  VAR_7->action_counter++;
  switch (VAR_11->action) {
  case 133:
  case 132:
   FUNC_0("LQ: Legacy toggle Antenna\n");

   if ((VAR_11->action == 133 &&
        VAR_17 <= 1) ||
       (VAR_11->action == 132 &&
        VAR_17 <= 2))
    break;


   if (VAR_13->success_ratio >= VAR_3)
    break;


   FUNC_6(VAR_12, VAR_11, VAR_14);

   if (FUNC_5
       (VAR_16, &VAR_12->current_rate,
        VAR_12)) {
    VAR_19 = 1;
    FUNC_2(VAR_7,
         VAR_12);
    goto out;
   }
   break;
  case 128:
   FUNC_0("LQ: Legacy switch to SISO\n");


   FUNC_6(VAR_12, VAR_11, VAR_14);
   VAR_12->is_SGI = 0;
   VAR_18 =
       FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9,
           VAR_12, VAR_10);
   if (!VAR_18) {
    VAR_7->action_counter = 0;
    goto out;
   }

   break;
  case 131:
  case 130:
  case 129:
   FUNC_0("LQ: Legacy switch to MIMO2\n");


   FUNC_6(VAR_12, VAR_11, VAR_14);
   VAR_12->is_SGI = 0;

   if (VAR_11->action == 131)
    VAR_12->ant_type = VAR_0;
   else if (VAR_11->action == 130)
    VAR_12->ant_type = VAR_1;
   else
    VAR_12->ant_type = VAR_2;

   if (!FUNC_1
       (VAR_16, VAR_12->ant_type))
    break;

   VAR_18 =
       FUNC_3(VAR_6, VAR_7, VAR_8, VAR_9,
            VAR_12, VAR_10);
   if (!VAR_18) {
    VAR_7->action_counter = 0;
    goto out;
   }
   break;
  }
  VAR_11->action++;
  if (VAR_11->action > 129)
   VAR_11->action = 133;

  if (VAR_11->action == VAR_15)
   break;

 }
 VAR_12->lq_type = VAR_4;
 return 0;

out:
 VAR_7->search_better_tbl = 1;
 VAR_11->action++;
 if (VAR_11->action > 129)
  VAR_11->action = 133;
 if (VAR_19)
  VAR_12->action = VAR_11->action;
 return 0;

}
