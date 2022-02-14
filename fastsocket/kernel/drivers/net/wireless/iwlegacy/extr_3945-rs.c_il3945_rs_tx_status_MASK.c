
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct il_priv {int retry_rate; } ;
struct il3945_rs_sta {int flush_pending; int lock; scalar_t__ flush_time; int rate_scale_flush; scalar_t__ last_partial_flush; scalar_t__ last_flush; int * win; int tx_packets; int il; } ;
struct TYPE_6__ {TYPE_2__* rates; } ;
struct ieee80211_tx_info {long flags; TYPE_3__ status; } ;
struct ieee80211_supported_band {TYPE_1__* bitrates; } ;
struct ieee80211_sta {int dummy; } ;
typedef int s8 ;
struct TYPE_5__ {int count; size_t idx; } ;
struct TYPE_4__ {int hw_value; } ;


 int FUNC_0 (char*,...) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct il3945_rs_sta*,int *,long,int,int) ;
 int FUNC_3 (struct il_priv*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_8(void *VAR_4, struct ieee80211_supported_band *VAR_5,
      struct ieee80211_sta *VAR_6, void *VAR_7,
      struct sk_buff *VAR_8)
{
 s8 VAR_9 = 0, VAR_10;
 int VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;
 struct il_priv *VAR_15 = (struct il_priv *)VAR_4;
 struct il3945_rs_sta *VAR_16 = VAR_7;
 struct ieee80211_tx_info *VAR_17 = FUNC_1(VAR_8);

 FUNC_0("enter\n");

 VAR_9 = VAR_17->status.rates[0].count;

 if (VAR_9 > VAR_2)
  VAR_9 = VAR_2;

 VAR_12 = VAR_5->bitrates[VAR_17->status.rates[0].idx].hw_value;
 if (VAR_12 < 0 || VAR_12 >= VAR_1) {
  FUNC_0("leave: Rate out of bounds: %d\n", VAR_12);
  return;
 }

 if (!VAR_7) {
  FUNC_0("leave: No STA il data to update!\n");
  return;
 }


 if (!VAR_16->il) {
  FUNC_0("leave: STA il data uninitialized!\n");
  return;
 }

 VAR_16->tx_packets++;

 VAR_11 = VAR_12;
 VAR_13 = VAR_12;
 while (VAR_9 > 1) {
  if ((VAR_9 - 1) < VAR_15->retry_rate) {
   VAR_10 = (VAR_9 - 1);
   VAR_13 = VAR_11;
  } else {
   VAR_10 = VAR_15->retry_rate;
   VAR_13 = FUNC_3(VAR_15, VAR_11);
  }



  FUNC_2(VAR_16, &VAR_16->win[VAR_11], 0,
           VAR_10, VAR_11);
  FUNC_0("Update rate %d for %d retries.\n", VAR_11,
         VAR_10);

  VAR_9 -= VAR_10;

  VAR_11 = VAR_13;
 }


 FUNC_0("Update rate %d with %s.\n", VAR_13,
        (VAR_17->flags & VAR_0) ? "success" : "failure");
 FUNC_2(VAR_16, &VAR_16->win[VAR_13],
          VAR_17->flags & VAR_0, 1,
          VAR_13);




 FUNC_5(&VAR_16->lock, VAR_14);

 if (!VAR_16->flush_pending &&
     FUNC_7(VAR_3, VAR_16->last_flush + VAR_16->flush_time)) {

  VAR_16->last_partial_flush = VAR_3;
  VAR_16->flush_pending = 1;
  FUNC_4(&VAR_16->rate_scale_flush,
     VAR_3 + VAR_16->flush_time);
 }

 FUNC_6(&VAR_16->lock, VAR_14);

 FUNC_0("leave\n");
}
