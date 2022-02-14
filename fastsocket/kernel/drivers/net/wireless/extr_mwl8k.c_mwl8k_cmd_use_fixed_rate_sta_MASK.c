
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* length; void* code; } ;
struct mwl8k_cmd_use_fixed_rate_sta {TYPE_1__ header; void* rate_type; void* action; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct mwl8k_cmd_use_fixed_rate_sta*) ;
 struct mwl8k_cmd_use_fixed_rate_sta* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_5)
{
 struct mwl8k_cmd_use_fixed_rate_sta *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->header.code = FUNC_0(VAR_2);
 VAR_6->header.length = FUNC_0(sizeof(*VAR_6));
 VAR_6->action = FUNC_1(VAR_4);
 VAR_6->rate_type = FUNC_1(VAR_3);

 VAR_7 = FUNC_4(VAR_5, &VAR_6->header);
 FUNC_2(VAR_6);

 return VAR_7;
}
