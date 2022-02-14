
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mwl8k_vif {scalar_t__ macid; } ;
struct mwl8k_priv {scalar_t__ ap_fw; int ap_macids_supported; int sta_macids_supported; } ;
struct TYPE_4__ {void* length; void* code; } ;
struct TYPE_3__ {int mac_addr; void* mac_type; } ;
struct mwl8k_cmd_update_mac_addr {TYPE_2__ header; int mac_addr; TYPE_1__ mbss; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct mwl8k_vif* FUNC_0 (struct ieee80211_vif*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct mwl8k_cmd_update_mac_addr*) ;
 struct mwl8k_cmd_update_mac_addr* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct ieee80211_hw*,struct ieee80211_vif*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_11,
      struct ieee80211_vif *VAR_12, u8 *VAR_13, bool VAR_14)
{
 struct mwl8k_priv *VAR_15 = VAR_11->priv;
 struct mwl8k_vif *VAR_16 = FUNC_0(VAR_12);
 struct mwl8k_cmd_update_mac_addr *VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = VAR_5;
 if (VAR_12 != ((void*)0) && VAR_12->type == VAR_10) {
  if (VAR_16->macid + 1 == FUNC_2(VAR_15->sta_macids_supported))
   if (VAR_15->ap_fw)
    VAR_18 = VAR_8;
   else
    VAR_18 = VAR_6;
  else
   VAR_18 = VAR_8;
 } else if (VAR_12 != ((void*)0) && VAR_12->type == VAR_9) {
  if (VAR_16->macid + 1 == FUNC_2(VAR_15->ap_macids_supported))
   VAR_18 = VAR_5;
  else
   VAR_18 = VAR_7;
 }

 VAR_17 = FUNC_4(sizeof(*VAR_17), VAR_2);
 if (VAR_17 == ((void*)0))
  return -VAR_0;

 if (VAR_14)
  VAR_17->header.code = FUNC_1(VAR_4);
 else
  VAR_17->header.code = FUNC_1(VAR_3);

 VAR_17->header.length = FUNC_1(sizeof(*VAR_17));
 if (VAR_15->ap_fw) {
  VAR_17->mbss.mac_type = FUNC_1(VAR_18);
  FUNC_5(VAR_17->mbss.mac_addr, VAR_13, VAR_1);
 } else {
  FUNC_5(VAR_17->mac_addr, VAR_13, VAR_1);
 }

 VAR_19 = FUNC_6(VAR_11, VAR_12, &VAR_17->header);
 FUNC_3(VAR_17);

 return VAR_19;
}
