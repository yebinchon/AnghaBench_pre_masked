
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwl8k_vif {TYPE_1__* wep_key_conf; } ;
struct mwl8k_cmd_set_key {int header; int action; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_key_conf {scalar_t__ cipher; size_t keyidx; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mwl8k_vif* FUNC_0 (struct ieee80211_vif*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mwl8k_cmd_set_key*) ;
 struct mwl8k_cmd_set_key* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mwl8k_cmd_set_key*,int *,struct ieee80211_key_conf*) ;
 int FUNC_5 (struct ieee80211_hw*,struct ieee80211_vif*,int *) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_5,
      struct ieee80211_vif *VAR_6,
      u8 *VAR_7,
      struct ieee80211_key_conf *VAR_8)
{
 struct mwl8k_cmd_set_key *VAR_9;
 int VAR_10;
 struct mwl8k_vif *VAR_11 = FUNC_0(VAR_6);

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_10 = FUNC_4(VAR_9, VAR_7, VAR_8);
 if (VAR_10 < 0)
  goto done;

 if (VAR_8->cipher == VAR_4 ||
   VAR_8->cipher == VAR_3)
  VAR_11->wep_key_conf[VAR_8->keyidx].enabled = 0;

 VAR_9->action = FUNC_1(VAR_2);

 VAR_10 = FUNC_5(VAR_5, VAR_6, &VAR_9->header);
done:
 FUNC_2(VAR_9);

 return VAR_10;
}
