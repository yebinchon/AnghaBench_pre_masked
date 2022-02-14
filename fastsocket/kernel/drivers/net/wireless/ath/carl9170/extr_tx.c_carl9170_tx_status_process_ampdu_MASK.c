
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_7__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ status; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int dummy; } ;
struct carl9170_sta_tid {scalar_t__ state; int lock; } ;
struct carl9170_sta_info {TYPE_5__* stats; int * agg; } ;
struct ar9170 {int dummy; } ;
struct TYPE_9__ {scalar_t__ cnt; scalar_t__ rix; } ;
struct TYPE_8__ {int mac_control; } ;
struct _carl9170_tx_superframe {TYPE_4__ s; TYPE_3__ f; scalar_t__ frame_data; } ;
struct TYPE_10__ {int clear; int req; scalar_t__ ampdu_ack_len; scalar_t__ ampdu_len; } ;
struct TYPE_6__ {int count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ieee80211_sta* FUNC_0 (struct ar9170*,struct sk_buff*) ;
 int FUNC_1 (struct ar9170*,struct carl9170_sta_tid*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hdr*) ;
 size_t FUNC_4 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_5 (int) ;
 struct carl9170_sta_tid* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct ar9170 *VAR_7,
 struct sk_buff *VAR_8, struct ieee80211_tx_info *VAR_9)
{
 struct _carl9170_tx_superframe *VAR_10 = (void *) VAR_8->data;
 struct ieee80211_hdr *VAR_11 = (void *) VAR_10->frame_data;
 struct ieee80211_sta *VAR_12;
 struct carl9170_sta_info *VAR_13;
 struct carl9170_sta_tid *VAR_14;
 u8 VAR_15;

 if (!(VAR_9->flags & VAR_2) ||
     VAR_9->flags & VAR_3)
  return;

 FUNC_7();
 VAR_12 = FUNC_0(VAR_7, VAR_8);
 if (FUNC_11(!VAR_12))
  goto out_rcu;

 VAR_15 = FUNC_4(VAR_11);

 VAR_13 = (void *) VAR_12->drv_priv;
 VAR_14 = FUNC_6(VAR_13->agg[VAR_15]);
 if (!VAR_14)
  goto out_rcu;

 FUNC_9(&VAR_14->lock);
 if (FUNC_5(VAR_14->state >= VAR_1))
  FUNC_1(VAR_7, VAR_14, FUNC_3(VAR_11));

 if (VAR_13->stats[VAR_15].clear) {
  VAR_13->stats[VAR_15].clear = 0;
  VAR_13->stats[VAR_15].req = 0;
  VAR_13->stats[VAR_15].ampdu_len = 0;
  VAR_13->stats[VAR_15].ampdu_ack_len = 0;
 }

 VAR_13->stats[VAR_15].ampdu_len++;
 if (VAR_9->status.rates[0].count == 1)
  VAR_13->stats[VAR_15].ampdu_ack_len++;

 if (!(VAR_9->flags & VAR_4))
  VAR_13->stats[VAR_15].req = 1;

 if (VAR_10->f.mac_control & FUNC_2(VAR_0)) {
  VAR_10->s.rix = VAR_13->stats[VAR_15].ampdu_len;
  VAR_10->s.cnt = VAR_13->stats[VAR_15].ampdu_ack_len;
  VAR_9->flags |= VAR_5;
  if (VAR_13->stats[VAR_15].req)
   VAR_9->flags |= VAR_6;

  VAR_13->stats[VAR_15].clear = 1;
 }
 FUNC_10(&VAR_14->lock);

out_rcu:
 FUNC_8();
}
