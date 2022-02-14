
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct iwl_tx_cmd {int dummy; } ;
struct iwl_mvm {int trans; } ;
struct iwl_device_cmd {scalar_t__ payload; } ;
struct TYPE_2__ {scalar_t__ hw_key; } ;
struct ieee80211_tx_info {struct iwl_device_cmd** driver_data; struct iwl_device_cmd status; TYPE_1__ control; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct iwl_mvm*,struct sk_buff*,struct iwl_tx_cmd*,struct ieee80211_tx_info*,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_tx_info*,struct iwl_tx_cmd*,struct sk_buff*) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_tx_cmd*,struct ieee80211_tx_info*,struct ieee80211_sta*,int ) ;
 struct iwl_device_cmd* FUNC_4 (int ) ;
 int FUNC_5 (struct iwl_device_cmd*,int ,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct iwl_device_cmd *
FUNC_7(struct iwl_mvm *VAR_0, struct sk_buff *VAR_1,
        struct ieee80211_sta *VAR_2, u8 VAR_3)
{
 struct ieee80211_hdr *VAR_4 = (struct ieee80211_hdr *)VAR_1->data;
 struct ieee80211_tx_info *VAR_5 = FUNC_0(VAR_1);
 struct iwl_device_cmd *VAR_6;
 struct iwl_tx_cmd *VAR_7;

 VAR_6 = FUNC_4(VAR_0->trans);

 if (FUNC_6(!VAR_6))
  return ((void*)0);

 FUNC_5(VAR_6, 0, sizeof(*VAR_6));
 VAR_7 = (struct iwl_tx_cmd *)VAR_6->payload;

 if (VAR_5->control.hw_key)
  FUNC_2(VAR_0, VAR_5, VAR_7, VAR_1);

 FUNC_1(VAR_0, VAR_1, VAR_7, VAR_5, VAR_3);

 FUNC_3(VAR_0, VAR_7, VAR_5, VAR_2, VAR_4->frame_control);

 FUNC_5(&VAR_5->status, 0, sizeof(VAR_5->status));

 VAR_5->driver_data[0] = ((void*)0);
 VAR_5->driver_data[1] = VAR_6;

 return VAR_6;
}
