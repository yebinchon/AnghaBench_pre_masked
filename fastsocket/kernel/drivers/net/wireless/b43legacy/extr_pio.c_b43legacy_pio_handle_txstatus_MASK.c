
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* rates; } ;
struct ieee80211_tx_info {TYPE_3__ status; int flags; } ;
struct b43legacy_wldev {TYPE_4__* wl; } ;
struct b43legacy_txstatus {scalar_t__ rts_count; int frame_count; scalar_t__ acked; int cookie; } ;
struct b43legacy_txhdr_fw3 {int dummy; } ;
struct b43legacy_pioqueue {int txtask; int txqueue; int tx_devq_used; int tx_devq_packets; } ;
struct b43legacy_pio_txpacket {TYPE_6__* skb; } ;
struct TYPE_13__ {scalar_t__ len; } ;
struct TYPE_8__ {scalar_t__ short_frame_max_tx_count; } ;
struct TYPE_12__ {TYPE_1__ conf; } ;
struct TYPE_11__ {TYPE_5__* hw; } ;
struct TYPE_9__ {int count; int idx; } ;


 int FUNC_0 (int) ;
 struct ieee80211_tx_info* FUNC_1 (TYPE_6__*) ;
 int VAR_0 ;
 int FUNC_2 (struct b43legacy_pio_txpacket*,int) ;
 int FUNC_3 (struct ieee80211_tx_info*) ;
 int FUNC_4 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_5 (int *) ;
 struct b43legacy_pioqueue* FUNC_6 (struct b43legacy_wldev*,int ,struct b43legacy_pio_txpacket**) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct b43legacy_wldev *VAR_1,
       const struct b43legacy_txstatus *VAR_2)
{
 struct b43legacy_pioqueue *VAR_3;
 struct b43legacy_pio_txpacket *VAR_4;
 struct ieee80211_tx_info *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_6(VAR_1, VAR_2->cookie, &VAR_4);
 FUNC_0(!VAR_3);

 if (!VAR_4->skb)
  return;

 VAR_3->tx_devq_packets--;
 VAR_3->tx_devq_used -= (VAR_4->skb->len +
    sizeof(struct b43legacy_txhdr_fw3));

 VAR_5 = FUNC_1(VAR_4->skb);




 VAR_6 = VAR_5->status.rates[0].count;
 FUNC_3(VAR_5);

 if (VAR_2->acked)
  VAR_5->flags |= VAR_0;

 if (VAR_2->rts_count > VAR_1->wl->hw->conf.short_frame_max_tx_count) {







  VAR_5->status.rates[0].count = 0;
  VAR_5->status.rates[1].count = VAR_2->frame_count;
 } else {
  if (VAR_2->frame_count > VAR_6) {
   VAR_5->status.rates[0].count = VAR_6;
   VAR_5->status.rates[1].count = VAR_2->frame_count -
     VAR_6;

  } else {
   VAR_5->status.rates[0].count = VAR_2->frame_count;
   VAR_5->status.rates[1].idx = -1;
  }
 }
 FUNC_4(VAR_1->wl->hw, VAR_4->skb);
 VAR_4->skb = ((void*)0);

 FUNC_2(VAR_4, 1);



 if (!FUNC_5(&VAR_3->txqueue))
  FUNC_7(&VAR_3->txtask);
}
