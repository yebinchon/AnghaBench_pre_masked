
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct wl1271_link {TYPE_3__* wlvif; int * tx_queue; } ;
struct wl1271 {int* tx_queue_count; int wl_lock; int hw; struct wl1271_link* links; } ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {TYPE_2__ status; } ;
struct TYPE_6__ {int* tx_queue_count; } ;
struct TYPE_4__ {int idx; scalar_t__ count; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char*,struct sk_buff*) ;
 int FUNC_6 (struct wl1271*) ;
 int FUNC_7 (struct wl1271*,struct sk_buff*) ;

void FUNC_8(struct wl1271 *VAR_2, u8 VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;
 unsigned long VAR_6;
 struct ieee80211_tx_info *VAR_7;
 int VAR_8[VAR_1];
 struct wl1271_link *VAR_9 = &VAR_2->links[VAR_3];

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_8[VAR_5] = 0;
  while ((VAR_4 = FUNC_2(&VAR_9->tx_queue[VAR_5]))) {
   FUNC_5(VAR_0, "link freeing skb 0x%p", VAR_4);

   if (!FUNC_7(VAR_2, VAR_4)) {
    VAR_7 = FUNC_0(VAR_4);
    VAR_7->status.rates[0].idx = -1;
    VAR_7->status.rates[0].count = 0;
    FUNC_1(VAR_2->hw, VAR_4);
   }

   VAR_8[VAR_5]++;
  }
 }

 FUNC_3(&VAR_2->wl_lock, VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_2->tx_queue_count[VAR_5] -= VAR_8[VAR_5];
  if (VAR_9->wlvif)
   VAR_9->wlvif->tx_queue_count[VAR_5] -= VAR_8[VAR_5];
 }
 FUNC_4(&VAR_2->wl_lock, VAR_6);

 FUNC_6(VAR_2);
}
