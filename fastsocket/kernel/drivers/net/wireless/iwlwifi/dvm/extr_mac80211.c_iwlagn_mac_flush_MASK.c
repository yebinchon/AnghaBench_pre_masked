
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_priv {int mutex; int trans; int status; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 int FUNC_2 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct iwl_priv*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_1, u32 VAR_2, bool VAR_3)
{
 struct iwl_priv *VAR_4 = FUNC_3(VAR_1);

 FUNC_7(&VAR_4->mutex);
 FUNC_0(VAR_4, "enter\n");

 if (FUNC_9(VAR_0, &VAR_4->status)) {
  FUNC_1(VAR_4, "Aborting flush due to device shutdown\n");
  goto done;
 }
 if (FUNC_4(VAR_4)) {
  FUNC_1(VAR_4, "Aborting flush due to RF Kill\n");
  goto done;
 }





 if (VAR_3) {
  FUNC_0(VAR_4, "send flush command\n");
  if (FUNC_6(VAR_4, 0)) {
   FUNC_2(VAR_4, "flush request fail\n");
   goto done;
  }
 }
 FUNC_0(VAR_4, "wait transmit/flush all frames\n");
 FUNC_5(VAR_4->trans);
done:
 FUNC_8(&VAR_4->mutex);
 FUNC_0(VAR_4, "leave\n");
}
