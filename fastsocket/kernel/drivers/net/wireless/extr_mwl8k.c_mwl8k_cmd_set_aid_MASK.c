
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {void* length; void* code; } ;
struct mwl8k_cmd_update_set_aid {TYPE_2__ header; int supp_rates; void* protection_mode; int bssid; void* aid; } ;
struct TYPE_3__ {int aid; int ht_operation_mode; scalar_t__ use_cts_prot; int bssid; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_cmd_update_set_aid*) ;
 struct mwl8k_cmd_update_set_aid* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct ieee80211_hw*,TYPE_2__*) ;

__attribute__((used)) static int
FUNC_6(struct ieee80211_hw *VAR_9,
    struct ieee80211_vif *VAR_10, u32 VAR_11)
{
 struct mwl8k_cmd_update_set_aid *VAR_12;
 u16 VAR_13;
 int VAR_14;

 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_0;

 VAR_12->header.code = FUNC_0(VAR_4);
 VAR_12->header.length = FUNC_0(sizeof(*VAR_12));
 VAR_12->aid = FUNC_0(VAR_10->bss_conf.aid);
 FUNC_4(VAR_12->bssid, VAR_10->bss_conf.bssid, VAR_1);

 if (VAR_10->bss_conf.use_cts_prot) {
  VAR_13 = VAR_5;
 } else {
  switch (VAR_10->bss_conf.ht_operation_mode &
   VAR_3) {
  case 129:
   VAR_13 = VAR_6;
   break;
  case 128:
   VAR_13 = VAR_7;
   break;
  default:
   VAR_13 = VAR_8;
   break;
  }
 }
 VAR_12->protection_mode = FUNC_0(VAR_13);

 FUNC_3(VAR_12->supp_rates, VAR_11);

 VAR_14 = FUNC_5(VAR_9, &VAR_12->header);
 FUNC_1(VAR_12);

 return VAR_14;
}
