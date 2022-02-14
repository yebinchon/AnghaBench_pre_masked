
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_5__ status; } ;
struct b43_wldev {TYPE_3__* wl; } ;
struct b43_txstatus {int frame_count; scalar_t__ rts_count; scalar_t__ acked; } ;
struct TYPE_9__ {int count; int idx; } ;
struct TYPE_8__ {TYPE_2__* hw; } ;
struct TYPE_6__ {scalar_t__ short_frame_max_tx_count; } ;
struct TYPE_7__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_tx_info*) ;

bool FUNC_1(struct b43_wldev *VAR_2,
         struct ieee80211_tx_info *VAR_3,
         const struct b43_txstatus *VAR_4)
{
 bool VAR_5 = 1;
 int VAR_6;




 VAR_6 = VAR_3->status.rates[0].count;
 FUNC_0(VAR_3);

 if (VAR_4->acked) {

  VAR_3->flags |= VAR_1;
 } else {

  if (!(VAR_3->flags & VAR_0)) {

   VAR_5 = 0;
  }
 }
 if (VAR_4->frame_count == 0) {

  VAR_3->status.rates[0].count = 0;
 } else if (VAR_4->rts_count > VAR_2->wl->hw->conf.short_frame_max_tx_count) {







  VAR_3->status.rates[0].count = 0;
  VAR_3->status.rates[1].count = VAR_4->frame_count;
 } else {
  if (VAR_4->frame_count > VAR_6) {
   VAR_3->status.rates[0].count = VAR_6;
   VAR_3->status.rates[1].count = VAR_4->frame_count -
     VAR_6;

  } else {
   VAR_3->status.rates[0].count = VAR_4->frame_count;
   VAR_3->status.rates[1].idx = -1;
  }
 }

 return VAR_5;
}
