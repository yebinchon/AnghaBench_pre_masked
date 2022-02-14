
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nlattr {int dummy; } ;
struct iwl_priv {int tst; scalar_t__ ucode_owner; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_5, struct nlattr **VAR_6)
{
 struct iwl_priv *VAR_7 = FUNC_1(VAR_5);
 u8 VAR_8;

 if (!VAR_6[VAR_4]) {
  FUNC_0(VAR_7, "Missing ucode owner\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_3(VAR_6[VAR_4]);
 if (VAR_8 == VAR_2) {
  VAR_7->ucode_owner = VAR_8;
  FUNC_2(&VAR_7->tst, 0);
 } else if (VAR_8 == VAR_3) {
  VAR_7->ucode_owner = VAR_8;
  FUNC_2(&VAR_7->tst, 1);
 } else {
  FUNC_0(VAR_7, "Invalid owner\n");
  return -VAR_0;
 }
 return 0;
}
