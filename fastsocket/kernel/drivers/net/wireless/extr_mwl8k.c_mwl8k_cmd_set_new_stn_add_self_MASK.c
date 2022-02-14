
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_set_new_stn {TYPE_1__ header; int mac_addr; } ;
struct ieee80211_vif {int addr; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mwl8k_cmd_set_new_stn*) ;
 struct mwl8k_cmd_set_new_stn* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_vif*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_4,
       struct ieee80211_vif *VAR_5)
{
 struct mwl8k_cmd_set_new_stn *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->header.code = FUNC_0(VAR_3);
 VAR_6->header.length = FUNC_0(sizeof(*VAR_6));
 FUNC_3(VAR_6->mac_addr, VAR_5->addr, VAR_1);

 VAR_7 = FUNC_4(VAR_4, VAR_5, &VAR_6->header);
 FUNC_1(VAR_6);

 return VAR_7;
}
