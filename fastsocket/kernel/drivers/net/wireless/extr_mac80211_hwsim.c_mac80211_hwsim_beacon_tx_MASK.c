
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct mac80211_hwsim_data {scalar_t__ tsf_offset; scalar_t__ abs_bcn_ts; struct ieee80211_hw* hw; } ;
struct ieee80211_vif {scalar_t__ type; int chanctx_conf; } ;
struct TYPE_6__ {int rates; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_rate {int bitrate; } ;
struct TYPE_7__ {int timestamp; } ;
struct TYPE_8__ {TYPE_2__ beacon; } ;
struct ieee80211_mgmt {TYPE_3__ u; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_9__ {int chan; } ;
struct TYPE_10__ {TYPE_4__ def; } ;


 int FUNC_0 (int ) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ieee80211_vif*) ;
 struct sk_buff* FUNC_4 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 struct ieee80211_rate* FUNC_5 (struct ieee80211_hw*,struct ieee80211_tx_info*) ;
 int FUNC_6 (struct ieee80211_vif*,int *,struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct ieee80211_hw*,struct sk_buff*,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(void *VAR_4, u8 *VAR_5,
         struct ieee80211_vif *VAR_6)
{
 struct mac80211_hwsim_data *VAR_7 = VAR_4;
 struct ieee80211_hw *VAR_8 = VAR_7->hw;
 struct ieee80211_tx_info *VAR_9;
 struct ieee80211_rate *VAR_10;
 struct ieee80211_mgmt *VAR_11;
 struct sk_buff *VAR_12;

 FUNC_3(VAR_6);

 if (VAR_6->type != VAR_1 &&
     VAR_6->type != VAR_2 &&
     VAR_6->type != VAR_0)
  return;

 VAR_12 = FUNC_4(VAR_8, VAR_6);
 if (VAR_12 == ((void*)0))
  return;
 VAR_9 = FUNC_1(VAR_12);
 if (VAR_3)
  FUNC_6(VAR_6, ((void*)0), VAR_12,
           VAR_9->control.rates,
           FUNC_0(VAR_9->control.rates));

 VAR_10 = FUNC_5(VAR_8, VAR_9);

 VAR_11 = (struct ieee80211_mgmt *) VAR_12->data;

 VAR_7->abs_bcn_ts = FUNC_7();
 VAR_11->u.beacon.timestamp = FUNC_2(VAR_7->abs_bcn_ts +
            VAR_7->tsf_offset +
            24 * 8 * 10 / VAR_10->bitrate);

 FUNC_8(VAR_8, VAR_12,
    FUNC_9(VAR_6->chanctx_conf)->def.chan);
}
