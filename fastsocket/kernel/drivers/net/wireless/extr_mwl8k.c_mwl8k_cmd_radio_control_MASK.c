
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl8k_priv {int radio_on; scalar_t__ radio_short_preamble; } ;
struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_radio_control {TYPE_1__ header; void* radio_on; void* control; void* action; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_cmd_radio_control*) ;
 struct mwl8k_cmd_radio_control* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211_hw *VAR_4, bool VAR_5, bool VAR_6)
{
 struct mwl8k_priv *VAR_7 = VAR_4->priv;
 struct mwl8k_cmd_radio_control *VAR_8;
 int VAR_9;

 if (VAR_5 == VAR_7->radio_on && !VAR_6)
  return 0;

 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->header.code = FUNC_0(VAR_2);
 VAR_8->header.length = FUNC_0(sizeof(*VAR_8));
 VAR_8->action = FUNC_0(VAR_3);
 VAR_8->control = FUNC_0(VAR_7->radio_short_preamble ? 3 : 1);
 VAR_8->radio_on = FUNC_0(VAR_5 ? 0x0001 : 0x0000);

 VAR_9 = FUNC_3(VAR_4, &VAR_8->header);
 FUNC_1(VAR_8);

 if (!VAR_9)
  VAR_7->radio_on = VAR_5;

 return VAR_9;
}
