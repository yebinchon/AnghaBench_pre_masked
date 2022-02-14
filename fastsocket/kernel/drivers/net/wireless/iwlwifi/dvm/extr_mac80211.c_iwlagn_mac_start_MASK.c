
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int is_open; int status; int mutex; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int FUNC_1 (struct iwl_priv*,char*) ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct iwl_priv*) ;
 int FUNC_5 (struct iwl_priv*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct ieee80211_hw *VAR_2)
{
 struct iwl_priv *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 FUNC_1(VAR_3, "enter\n");


 FUNC_6(&VAR_3->mutex);
 VAR_4 = FUNC_4(VAR_3);
 FUNC_7(&VAR_3->mutex);
 if (VAR_4)
  return VAR_4;

 FUNC_0(VAR_3, "Start UP work done.\n");


 if (FUNC_3(!FUNC_8(VAR_1, &VAR_3->status)))
  VAR_4 = -VAR_0;

 FUNC_5(VAR_3);

 VAR_3->is_open = 1;
 FUNC_1(VAR_3, "leave\n");
 return 0;
}
