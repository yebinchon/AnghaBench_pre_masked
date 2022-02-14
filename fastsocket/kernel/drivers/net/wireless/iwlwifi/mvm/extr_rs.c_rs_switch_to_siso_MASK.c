
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwl_scale_tbl_info {int is_ht40; int current_rate; scalar_t__ is_SGI; int max_search; scalar_t__ action; int lq_type; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int is_green; int active_siso_rate; } ;
struct TYPE_2__ {int ht_supported; } ;
struct ieee80211_sta {TYPE_1__ ht_cap; } ;
typedef int s32 ;


 int FUNC_0 (struct iwl_mvm*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_lq_sta*,struct iwl_scale_tbl_info*,int,int) ;
 int FUNC_4 (struct iwl_lq_sta*,struct iwl_scale_tbl_info*) ;

__attribute__((used)) static int FUNC_5(struct iwl_mvm *VAR_3,
        struct iwl_lq_sta *VAR_4,
        struct ieee80211_sta *VAR_5,
        struct iwl_scale_tbl_info *VAR_6, int VAR_7)
{
 u16 VAR_8;
 u8 VAR_9 = VAR_4->is_green;
 s32 VAR_10;

 if (!VAR_5->ht_cap.ht_supported)
  return -1;

 FUNC_0(VAR_3, "LQ: try to switch to SISO\n");

 VAR_6->lq_type = VAR_2;
 VAR_6->action = 0;
 VAR_6->max_search = VAR_0;
 VAR_8 = VAR_4->active_siso_rate;

 if (FUNC_1(VAR_5))
  VAR_6->is_ht40 = 1;
 else
  VAR_6->is_ht40 = 0;

 if (VAR_9)
  VAR_6->is_SGI = 0;

 FUNC_4(VAR_4, VAR_6);
 VAR_10 = FUNC_3(VAR_3, VAR_4, VAR_6, VAR_8, VAR_7);

 FUNC_0(VAR_3, "LQ: get best rate %d mask %X\n", VAR_10, VAR_8);
 if ((VAR_10 == VAR_1) || !((1 << VAR_10) & VAR_8)) {
  FUNC_0(VAR_3,
          "can not switch with index %d rate mask %x\n",
          VAR_10, VAR_8);
  return -1;
 }
 VAR_6->current_rate = FUNC_2(VAR_3, VAR_6, VAR_10, VAR_9);
 FUNC_0(VAR_3, "LQ: Switch to new mcs %X index is green %X\n",
         VAR_6->current_rate, VAR_9);
 return 0;
}
