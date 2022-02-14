
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int scan_last_antenna_idx; int fw; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
typedef int __le32 ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwl_mvm*,int ,int ) ;

__attribute__((used)) static inline __le32
FUNC_4(struct iwl_mvm *VAR_5, enum ieee80211_band VAR_6,
     bool VAR_7)
{
 u32 VAR_8;

 VAR_5->scan_last_antenna_idx =
  FUNC_3(VAR_5, FUNC_2(VAR_5->fw),
         VAR_5->scan_last_antenna_idx);
 VAR_8 = FUNC_0(VAR_5->scan_last_antenna_idx) << VAR_3;

 if (VAR_6 == VAR_0 && !VAR_7)
  return FUNC_1(VAR_1 | VAR_4 |
       VAR_8);
 else
  return FUNC_1(VAR_2 | VAR_8);
}
