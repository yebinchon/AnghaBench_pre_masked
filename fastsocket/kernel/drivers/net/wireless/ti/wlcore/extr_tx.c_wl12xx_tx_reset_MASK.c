
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wl1271_tx_hw_descr {int dummy; } ;
struct wl1271 {int num_tx_desc; int quirks; int hw; struct sk_buff** tx_frames; scalar_t__* tx_queue_count; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_3__* rates; } ;
struct TYPE_6__ {TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {TYPE_4__ status; TYPE_2__ control; } ;
struct TYPE_7__ {int idx; scalar_t__ count; } ;
struct TYPE_5__ {scalar_t__ cipher; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int ,char*,struct sk_buff*) ;
 int FUNC_6 (struct wl1271*,int) ;
 int FUNC_7 (struct wl1271*) ;
 int FUNC_8 (struct wl1271*,int) ;
 scalar_t__ FUNC_9 (struct wl1271*) ;
 int FUNC_10 (struct wl1271*,struct sk_buff*) ;

void FUNC_11(struct wl1271 *VAR_6)
{
 int VAR_7;
 struct sk_buff *VAR_8;
 struct ieee80211_tx_info *VAR_9;


 if (FUNC_9(VAR_6) != 0) {
  for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
   FUNC_8(VAR_6, VAR_7);

  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
   VAR_6->tx_queue_count[VAR_7] = 0;
 }






 FUNC_7(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_6->num_tx_desc; VAR_7++) {
  if (VAR_6->tx_frames[VAR_7] == ((void*)0))
   continue;

  VAR_8 = VAR_6->tx_frames[VAR_7];
  FUNC_6(VAR_6, VAR_7);
  FUNC_5(VAR_0, "freeing skb 0x%p", VAR_8);

  if (!FUNC_10(VAR_6, VAR_8)) {




   VAR_9 = FUNC_0(VAR_8);
   FUNC_4(VAR_8, sizeof(struct wl1271_tx_hw_descr));
   if ((VAR_6->quirks & VAR_5) &&
       VAR_9->control.hw_key &&
       VAR_9->control.hw_key->cipher ==
       VAR_4) {
    int VAR_10 = FUNC_1(VAR_8);
    FUNC_3(VAR_8->data + VAR_2,
     VAR_8->data, VAR_10);
    FUNC_4(VAR_8, VAR_2);
   }

   VAR_9->status.rates[0].idx = -1;
   VAR_9->status.rates[0].count = 0;

   FUNC_2(VAR_6->hw, VAR_8);
  }
 }
}
