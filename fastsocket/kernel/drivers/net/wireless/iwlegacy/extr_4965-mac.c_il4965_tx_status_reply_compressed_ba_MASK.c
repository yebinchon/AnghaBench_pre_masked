
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct il_priv {TYPE_1__* txq; } ;
struct il_ht_agg {int start_idx; int frame_count; int bitmap; int rate_n_flags; scalar_t__ wait_for_ba; } ;
struct il_compressed_ba_resp {int bitmap; int seq_ctl; int scd_flow; } ;
struct TYPE_4__ {int ampdu_ack_len; int ampdu_len; } ;
struct ieee80211_tx_info {TYPE_2__ status; int flags; } ;
struct TYPE_3__ {int * skbs; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct il_priv*,int ,struct ieee80211_tx_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct il_priv *VAR_3, struct il_ht_agg *VAR_4,
         struct il_compressed_ba_resp *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 u16 VAR_9 = FUNC_5(VAR_5->seq_ctl);
 u16 VAR_10 = FUNC_5(VAR_5->scd_flow);
 int VAR_11 = 0;
 struct ieee80211_tx_info *VAR_12;
 u64 VAR_13, VAR_14;

 if (FUNC_8(!VAR_4->wait_for_ba)) {
  if (FUNC_8(VAR_5->bitmap))
   FUNC_2("Received BA when not expected\n");
  return -VAR_0;
 }


 VAR_4->wait_for_ba = 0;
 FUNC_0("BA %d %d\n", VAR_4->start_idx, VAR_5->seq_ctl);


 VAR_7 = VAR_4->start_idx - FUNC_3(VAR_9 >> 4);
 if (VAR_7 < 0)
  VAR_7 += 0x100;

 if (VAR_4->frame_count > (64 - VAR_7)) {
  FUNC_0("more frames than bitmap size");
  return -1;
 }


 VAR_13 = FUNC_6(VAR_5->bitmap) >> VAR_7;



 VAR_14 = VAR_13 & VAR_4->bitmap;



 VAR_6 = 0;
 while (VAR_14) {
  VAR_8 = VAR_14 & 1ULL;
  VAR_11 += VAR_8;
  FUNC_0("%s ON i=%d idx=%d raw=%d\n", VAR_8 ? "ACK" : "NACK",
      VAR_6, (VAR_4->start_idx + VAR_6) & 0xff, VAR_4->start_idx + VAR_6);
  VAR_14 >>= 1;
  ++VAR_6;
 }

 FUNC_0("Bitmap %llx\n", (unsigned long long)VAR_13);

 VAR_12 = FUNC_1(VAR_3->txq[VAR_10].skbs[VAR_4->start_idx]);
 FUNC_7(&VAR_12->status, 0, sizeof(VAR_12->status));
 VAR_12->flags |= VAR_1;
 VAR_12->flags |= VAR_2;
 VAR_12->status.ampdu_ack_len = VAR_11;
 VAR_12->status.ampdu_len = VAR_4->frame_count;
 FUNC_4(VAR_3, VAR_4->rate_n_flags, VAR_12);

 return 0;
}
