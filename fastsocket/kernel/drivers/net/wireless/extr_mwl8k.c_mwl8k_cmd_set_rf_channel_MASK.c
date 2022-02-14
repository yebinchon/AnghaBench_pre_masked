
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* length; void* code; } ;
struct mwl8k_cmd_set_rf_channel {TYPE_1__ header; int channel_flags; int current_channel; void* action; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {struct ieee80211_channel* chan; } ;
struct ieee80211_conf {TYPE_2__ chandef; } ;
struct ieee80211_channel {scalar_t__ band; int hw_value; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mwl8k_cmd_set_rf_channel*) ;
 struct mwl8k_cmd_set_rf_channel* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ieee80211_hw*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_10,
        struct ieee80211_conf *VAR_11)
{
 struct ieee80211_channel *VAR_12 = VAR_11->chandef.chan;
 enum nl80211_channel_type VAR_13 =
  FUNC_0(&VAR_11->chandef);
 struct mwl8k_cmd_set_rf_channel *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_1);
 if (VAR_14 == ((void*)0))
  return -VAR_0;

 VAR_14->header.code = FUNC_1(VAR_5);
 VAR_14->header.length = FUNC_1(sizeof(*VAR_14));
 VAR_14->action = FUNC_1(VAR_4);
 VAR_14->current_channel = VAR_12->hw_value;

 if (VAR_12->band == VAR_2)
  VAR_14->channel_flags |= FUNC_2(0x00000001);
 else if (VAR_12->band == VAR_3)
  VAR_14->channel_flags |= FUNC_2(0x00000004);

 if (VAR_13 == VAR_9 ||
     VAR_13 == VAR_6)
  VAR_14->channel_flags |= FUNC_2(0x00000080);
 else if (VAR_13 == VAR_7)
  VAR_14->channel_flags |= FUNC_2(0x000001900);
 else if (VAR_13 == VAR_8)
  VAR_14->channel_flags |= FUNC_2(0x000000900);

 VAR_15 = FUNC_5(VAR_10, &VAR_14->header);
 FUNC_3(VAR_14);

 return VAR_15;
}
