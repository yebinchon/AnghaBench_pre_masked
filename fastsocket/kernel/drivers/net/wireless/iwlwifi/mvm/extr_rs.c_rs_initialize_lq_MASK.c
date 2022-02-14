
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct iwl_scale_tbl_info {int ant_type; int current_rate; } ;
struct iwl_mvm {int fw; } ;
struct iwl_lq_sta {int last_txrate_idx; size_t active_tbl; int lq; struct iwl_scale_tbl_info* lq_info; int search_better_tbl; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_2__ {int plcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (struct iwl_mvm*,int *,int ,int) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int,size_t) ;
 int FUNC_4 (int *,struct iwl_lq_sta*,int) ;
 int FUNC_5 (int,int,struct iwl_scale_tbl_info*,int*) ;
 int FUNC_6 (size_t,int) ;
 int FUNC_7 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;
 int FUNC_8 (size_t,int*,struct iwl_scale_tbl_info*) ;
 size_t FUNC_9 (struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_10(struct iwl_mvm *VAR_7,
        struct ieee80211_sta *VAR_8,
        struct iwl_lq_sta *VAR_9,
        enum ieee80211_band VAR_10)
{
 struct iwl_scale_tbl_info *VAR_11;
 int VAR_12;
 int VAR_13;
 u32 VAR_14;
 u8 VAR_15 = FUNC_9(VAR_8);
 u8 VAR_16 = 0;
 u8 VAR_17;

 if (!VAR_8 || !VAR_9)
  return;

 VAR_13 = VAR_9->last_txrate_idx;

 VAR_17 = FUNC_1(VAR_7->fw);

 if (!VAR_9->search_better_tbl)
  VAR_16 = VAR_9->active_tbl;
 else
  VAR_16 = 1 - VAR_9->active_tbl;

 VAR_11 = &(VAR_9->lq_info[VAR_16]);

 if ((VAR_13 < 0) || (VAR_13 >= VAR_3))
  VAR_13 = 0;

 VAR_14 = VAR_6[VAR_13].plcp;
 VAR_11->ant_type = FUNC_0(VAR_17);
 VAR_14 |= VAR_11->ant_type << VAR_4;

 if (VAR_13 >= VAR_1 && VAR_13 <= VAR_2)
  VAR_14 |= VAR_5;

 FUNC_5(VAR_14, VAR_10, VAR_11, &VAR_12);
 if (!FUNC_6(VAR_17, VAR_11->ant_type))
  FUNC_8(VAR_17, &VAR_14, VAR_11);

 VAR_14 = FUNC_3(VAR_7, VAR_11, VAR_12, VAR_15);
 VAR_11->current_rate = VAR_14;
 FUNC_7(VAR_9, VAR_11);
 FUNC_4(((void*)0), VAR_9, VAR_14);

 FUNC_2(VAR_7, &VAR_9->lq, VAR_0, 1);
}
