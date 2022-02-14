
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_priv {int wmm_enabled; } ;
struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_set_wmm_mode {TYPE_1__ header; void* action; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_cmd_set_wmm_mode*) ;
 struct mwl8k_cmd_set_wmm_mode* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_3, bool VAR_4)
{
 struct mwl8k_priv *VAR_5 = VAR_3->priv;
 struct mwl8k_cmd_set_wmm_mode *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->header.code = FUNC_0(VAR_2);
 VAR_6->header.length = FUNC_0(sizeof(*VAR_6));
 VAR_6->action = FUNC_0(!!VAR_4);

 VAR_7 = FUNC_3(VAR_3, &VAR_6->header);
 FUNC_1(VAR_6);

 if (!VAR_7)
  VAR_5->wmm_enabled = VAR_4;

 return VAR_7;
}
