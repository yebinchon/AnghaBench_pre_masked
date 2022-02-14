
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tx_status {int retry; int failure; } ;
struct tx_retry_rate {int count; int* rate; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int ack_signal; TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ status; int flags; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int idx; int count; } ;


 int FUNC_0 (struct tx_retry_rate*) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ieee80211_tx_info*) ;
 int FUNC_4 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 struct tx_retry_rate* VAR_2 ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_3, struct sk_buff *VAR_4,
        int VAR_5, struct tx_status *VAR_6)
{
 struct ieee80211_tx_info *VAR_7 = FUNC_1(VAR_4);
 int VAR_8;
 int VAR_9 = 1, VAR_10 = 1;
 int VAR_11;
 const struct tx_retry_rate *VAR_12;

 FUNC_3(VAR_7);

 if (VAR_6) {
  VAR_9 = !VAR_6->failure;
  VAR_10 = VAR_6->retry + VAR_9;
 }

 if (VAR_9) {

  VAR_7->flags |= VAR_1;
 } else {

  VAR_7->flags &= ~VAR_1;
 }

 VAR_11 = VAR_7->status.rates[0].idx;
 FUNC_2(0<=VAR_11 && VAR_11<FUNC_0(VAR_2));
 VAR_12 = &VAR_2[VAR_11];
 FUNC_2(1 <= VAR_10 && VAR_10 <= VAR_12->count);

 VAR_7->status.rates[0].idx = VAR_12->rate[0];
 VAR_7->status.rates[0].count = 1;

 for (VAR_8=1; VAR_8<VAR_0-1 && VAR_8<VAR_10; VAR_8++) {
  VAR_7->status.rates[VAR_8].idx = VAR_12->rate[VAR_8];
  VAR_7->status.rates[VAR_8].count = 1;
 }
 for (; VAR_8<VAR_0 && VAR_8<VAR_10; VAR_8++) {
  VAR_7->status.rates[VAR_8].idx = VAR_12->rate[VAR_10 - 1];
  VAR_7->status.rates[VAR_8].count = 1;
 }
 if (VAR_8<VAR_0)
  VAR_7->status.rates[VAR_8].idx = -1;

 VAR_7->status.ack_signal = FUNC_5(VAR_3, VAR_5);
 FUNC_4(VAR_3, VAR_4);
}
