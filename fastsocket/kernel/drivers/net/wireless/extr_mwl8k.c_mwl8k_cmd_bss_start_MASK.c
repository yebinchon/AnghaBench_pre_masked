
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_vif {int macid; } ;
struct mwl8k_priv {int running_bsses; } ;
struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_bss_start {TYPE_1__ header; int enable; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mwl8k_vif* FUNC_0 (struct ieee80211_vif*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mwl8k_cmd_bss_start*) ;
 struct mwl8k_cmd_bss_start* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ieee80211_hw*,struct ieee80211_vif*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_3,
          struct ieee80211_vif *VAR_4, int VAR_5)
{
 struct mwl8k_cmd_bss_start *VAR_6;
 struct mwl8k_vif *VAR_7 = FUNC_0(VAR_4);
 struct mwl8k_priv *VAR_8 = VAR_3->priv;
 int VAR_9;

 if (VAR_5 && (VAR_8->running_bsses & (1 << VAR_7->macid)))
  return 0;

 if (!VAR_5 && !(VAR_8->running_bsses & (1 << VAR_7->macid)))
  return 0;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->header.code = FUNC_1(VAR_2);
 VAR_6->header.length = FUNC_1(sizeof(*VAR_6));
 VAR_6->enable = FUNC_2(VAR_5);

 VAR_9 = FUNC_5(VAR_3, VAR_4, &VAR_6->header);
 FUNC_3(VAR_6);

 if (!VAR_9) {
  if (VAR_5)
   VAR_8->running_bsses |= (1 << VAR_7->macid);
  else
   VAR_8->running_bsses &= ~(1 << VAR_7->macid);
 }
 return VAR_9;
}
