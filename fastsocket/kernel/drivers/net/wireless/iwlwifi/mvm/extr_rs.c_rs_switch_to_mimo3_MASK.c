
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iwl_scale_tbl_info {int is_ht40; int current_rate; int max_search; scalar_t__ action; int lq_type; } ;
struct iwl_mvm {int fw; } ;
struct iwl_lq_sta {int is_green; int active_mimo3_rate; } ;
struct TYPE_2__ {int ht_supported; } ;
struct ieee80211_sta {scalar_t__ smps_mode; TYPE_1__ ht_cap; } ;
typedef int s8 ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct ieee80211_sta*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_5 (struct iwl_mvm*,struct iwl_lq_sta*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_6 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static int FUNC_7(struct iwl_mvm *VAR_4,
        struct iwl_lq_sta *VAR_5,
        struct ieee80211_sta *VAR_6,
        struct iwl_scale_tbl_info *VAR_7, int VAR_8)
{
 u16 VAR_9;
 s32 VAR_10;
 s8 VAR_11 = VAR_5->is_green;

 if (!VAR_6->ht_cap.ht_supported)
  return -1;

 if (VAR_6->smps_mode == VAR_0)
  return -1;


 if (FUNC_3(FUNC_1(VAR_4->fw)) < 3)
  return -1;

 FUNC_0(VAR_4, "LQ: try to switch to MIMO3\n");

 VAR_7->lq_type = VAR_3;
 VAR_7->action = 0;
 VAR_7->max_search = VAR_1;
 VAR_9 = VAR_5->active_mimo3_rate;

 if (FUNC_2(VAR_6))
  VAR_7->is_ht40 = 1;
 else
  VAR_7->is_ht40 = 0;

 FUNC_6(VAR_5, VAR_7);

 VAR_10 = FUNC_5(VAR_4, VAR_5, VAR_7, VAR_9, VAR_8);

 FUNC_0(VAR_4, "LQ: MIMO3 best rate %d mask %X\n",
         VAR_10, VAR_9);
 if ((VAR_10 == VAR_2) || !((1 << VAR_10) & VAR_9)) {
  FUNC_0(VAR_4, "Can't switch with index %d rate mask %x\n",
          VAR_10, VAR_9);
  return -1;
 }
 VAR_7->current_rate = FUNC_4(VAR_4, VAR_7, VAR_10, VAR_11);

 FUNC_0(VAR_4, "LQ: Switch to new mcs %X index is green %X\n",
         VAR_7->current_rate, VAR_11);
 return 0;
}
