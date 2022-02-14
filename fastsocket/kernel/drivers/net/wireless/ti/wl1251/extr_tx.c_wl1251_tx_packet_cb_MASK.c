
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
struct TYPE_8__ {int retry_count; } ;
struct wl1251 {struct sk_buff** tx_frames; int hw; TYPE_3__ stats; } ;
struct tx_result {size_t id; int status; int rate; int ack_failures; } ;
struct tx_double_buffer_desc {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {TYPE_4__* hw_key; } ;
struct TYPE_7__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_5__ control; TYPE_2__ status; } ;
struct TYPE_9__ {scalar_t__ cipher; } ;
struct TYPE_6__ {scalar_t__ count; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (int *,int *,int) ;
 int * FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int ,char*,size_t,struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_6 (char*,size_t) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct wl1251 *VAR_6,
    struct tx_result *VAR_7)
{
 struct ieee80211_tx_info *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10;
 u8 *VAR_11;

 VAR_9 = VAR_6->tx_frames[VAR_7->id];
 if (VAR_9 == ((void*)0)) {
  FUNC_6("SKB for packet %d is NULL", VAR_7->id);
  return;
 }

 VAR_8 = FUNC_0(VAR_9);

 if (!(VAR_8->flags & VAR_1) &&
     (VAR_7->status == VAR_3))
  VAR_8->flags |= VAR_2;

 VAR_8->status.rates[0].count = VAR_7->ack_failures + 1;
 VAR_6->stats.retry_count += VAR_7->ack_failures;





 VAR_11 = FUNC_4(VAR_9, sizeof(struct tx_double_buffer_desc));
 if (VAR_8->control.hw_key &&
     VAR_8->control.hw_key->cipher == VAR_5) {
  VAR_10 = FUNC_1(VAR_9);
  FUNC_3(VAR_11 + VAR_4, VAR_11, VAR_10);
  FUNC_4(VAR_9, VAR_4);
 }

 FUNC_5(VAR_0, "tx status id %u skb 0x%p failures %u rate 0x%x"
       " status 0x%x (%s)",
       VAR_7->id, VAR_9, VAR_7->ack_failures, VAR_7->rate,
       VAR_7->status, FUNC_7(VAR_7->status));


 FUNC_2(VAR_6->hw, VAR_9);

 VAR_6->tx_frames[VAR_7->id] = ((void*)0);
}
