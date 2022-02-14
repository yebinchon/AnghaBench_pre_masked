
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ath5k_vif {struct ath5k_buf* bbuf; } ;
struct ath5k_hw {size_t bhalq; int bmisscount; scalar_t__ opmode; int num_ap_vifs; int num_mesh_vifs; int bintval; int bsent; int hw; TYPE_1__* cabq; int * txqs; struct ieee80211_vif** bslot; int reset_work; } ;
struct ath5k_buf {int desc; scalar_t__ daddr; int * skb; } ;
struct TYPE_2__ {scalar_t__ txq_len; scalar_t__ txq_max; } ;


 int FUNC_0 (struct ath5k_hw*,int ,char*,...) ;
 int FUNC_1 (struct ath5k_hw*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ath5k_hw*,char*,...) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,struct ieee80211_vif*) ;
 scalar_t__ FUNC_5 (struct ath5k_hw*) ;
 scalar_t__ FUNC_6 (struct ath5k_hw*,size_t) ;
 int FUNC_7 (struct ath5k_hw*,size_t,scalar_t__) ;
 int FUNC_8 (struct ath5k_hw*,size_t) ;
 int FUNC_9 (struct ath5k_hw*,size_t) ;
 int FUNC_10 (int ,struct sk_buff*,TYPE_1__*) ;
 struct sk_buff* FUNC_11 (int ,struct ieee80211_vif*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct ath5k_hw*,int *,int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(struct ath5k_hw *VAR_7)
{
 struct ieee80211_vif *VAR_8;
 struct ath5k_vif *VAR_9;
 struct ath5k_buf *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12;

 FUNC_1(VAR_7, VAR_0, "in beacon_send\n");
 if (FUNC_14(FUNC_6(VAR_7, VAR_7->bhalq) != 0)) {
  VAR_7->bmisscount++;
  FUNC_0(VAR_7, VAR_0,
   "missed %u consecutive beacons\n", VAR_7->bmisscount);
  if (VAR_7->bmisscount > 10) {
   FUNC_0(VAR_7, VAR_0,
    "stuck beacon time (%u missed)\n",
    VAR_7->bmisscount);
   FUNC_0(VAR_7, VAR_1,
      "stuck beacon, resetting\n");
   FUNC_12(VAR_7->hw, &VAR_7->reset_work);
  }
  return;
 }
 if (FUNC_14(VAR_7->bmisscount != 0)) {
  FUNC_0(VAR_7, VAR_0,
   "resume beacon xmit after %u misses\n",
   VAR_7->bmisscount);
  VAR_7->bmisscount = 0;
 }

 if ((VAR_7->opmode == VAR_3 && VAR_7->num_ap_vifs +
   VAR_7->num_mesh_vifs > 1) ||
   VAR_7->opmode == VAR_4) {
  u64 VAR_13 = FUNC_5(VAR_7);
  u32 VAR_14 = FUNC_3(VAR_13);
  int VAR_15 = ((VAR_14 % VAR_7->bintval) * VAR_2) / VAR_7->bintval;
  VAR_8 = VAR_7->bslot[(VAR_15 + 1) % VAR_2];
  FUNC_0(VAR_7, VAR_0,
   "tsf %llx tsftu %x intval %u slot %u vif %p\n",
   (unsigned long long)VAR_13, VAR_14, VAR_7->bintval, VAR_15, VAR_8);
 } else
  VAR_8 = VAR_7->bslot[0];

 if (!VAR_8)
  return;

 VAR_9 = (void *)VAR_8->drv_priv;
 VAR_10 = VAR_9->bbuf;






 if (FUNC_14(FUNC_9(VAR_7, VAR_7->bhalq))) {
  FUNC_2(VAR_7, "beacon queue %u didn't start/stop ?\n", VAR_7->bhalq);

 }


 if (VAR_7->opmode == VAR_3 ||
     VAR_7->opmode == VAR_4) {
  VAR_12 = FUNC_4(VAR_7->hw, VAR_8);
  if (VAR_12)
   return;
 }

 if (FUNC_14(VAR_10->skb == ((void*)0) || VAR_7->opmode == VAR_6 ||
       VAR_7->opmode == VAR_5)) {
  FUNC_2(VAR_7, "bf=%p bf_skb=%p\n", VAR_10, VAR_10->skb);
  return;
 }

 FUNC_13(VAR_7, VAR_10->skb, &VAR_7->txqs[VAR_7->bhalq]);

 FUNC_7(VAR_7, VAR_7->bhalq, VAR_10->daddr);
 FUNC_8(VAR_7, VAR_7->bhalq);
 FUNC_0(VAR_7, VAR_0, "TXDP[%u] = %llx (%p)\n",
  VAR_7->bhalq, (unsigned long long)VAR_10->daddr, VAR_10->desc);

 VAR_11 = FUNC_11(VAR_7->hw, VAR_8);
 while (VAR_11) {
  FUNC_10(VAR_7->hw, VAR_11, VAR_7->cabq);

  if (VAR_7->cabq->txq_len >= VAR_7->cabq->txq_max)
   break;

  VAR_11 = FUNC_11(VAR_7->hw, VAR_8);
 }

 VAR_7->bsent++;
}
