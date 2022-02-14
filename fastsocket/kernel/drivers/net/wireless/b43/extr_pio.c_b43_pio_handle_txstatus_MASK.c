
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211_tx_info {int dummy; } ;
struct b43_wldev {TYPE_1__* wl; } ;
struct b43_txstatus {int cookie; } ;
struct b43_pio_txqueue {unsigned int buffer_used; int free_packet_slots; int stopped; int queue_prio; int packets_list; } ;
struct b43_pio_txpacket {int list; TYPE_2__* skb; } ;
struct TYPE_5__ {unsigned int len; } ;
struct TYPE_4__ {int hw; } ;


 int FUNC_0 (int) ;
 struct ieee80211_tx_info* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct b43_wldev*,struct ieee80211_tx_info*,struct b43_txstatus const*) ;
 unsigned int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *) ;
 struct b43_pio_txqueue* FUNC_7 (struct b43_wldev*,int ,struct b43_pio_txpacket**) ;
 unsigned int FUNC_8 (unsigned int,int) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct b43_wldev *VAR_0,
        const struct b43_txstatus *VAR_1)
{
 struct b43_pio_txqueue *VAR_2;
 struct b43_pio_txpacket *VAR_3 = ((void*)0);
 unsigned int VAR_4;
 struct ieee80211_tx_info *VAR_5;

 VAR_2 = FUNC_7(VAR_0, VAR_1->cookie, &VAR_3);
 if (FUNC_9(!VAR_2))
  return;
 FUNC_0(!VAR_3);

 VAR_5 = FUNC_1(VAR_3->skb);

 FUNC_2(VAR_0, VAR_5, VAR_1);

 VAR_4 = VAR_3->skb->len + FUNC_3(VAR_0);
 VAR_4 = FUNC_8(VAR_4, 4);
 VAR_2->buffer_used -= VAR_4;
 VAR_2->free_packet_slots += 1;

 FUNC_4(VAR_0->wl->hw, VAR_3->skb);
 VAR_3->skb = ((void*)0);
 FUNC_6(&VAR_3->list, &VAR_2->packets_list);

 if (VAR_2->stopped) {
  FUNC_5(VAR_0->wl->hw, VAR_2->queue_prio);
  VAR_2->stopped = 0;
 }
}
