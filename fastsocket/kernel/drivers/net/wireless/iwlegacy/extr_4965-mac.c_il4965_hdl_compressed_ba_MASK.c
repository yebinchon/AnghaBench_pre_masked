
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
typedef size_t u16 ;
struct TYPE_10__ {size_t read_ptr; scalar_t__ low_mark; int n_bd; } ;
struct il_tx_queue {TYPE_5__ q; } ;
struct il_compressed_ba_resp {int sta_id; int tid; int scd_ssn; int scd_flow; int bitmap; int seq_ctl; int sta_addr_lo32; } ;
struct TYPE_6__ {struct il_compressed_ba_resp compressed_ba; } ;
struct il_rx_pkt {TYPE_1__ u; } ;
struct il_rx_buf {int dummy; } ;
struct TYPE_7__ {size_t max_txq_num; } ;
struct il_priv {int sta_lock; scalar_t__ mac80211_registered; TYPE_4__* stations; struct il_tx_queue* txq; TYPE_2__ hw_params; } ;
struct il_ht_agg {size_t txq_id; size_t start_idx; scalar_t__ state; scalar_t__ bitmap; int wait_for_ba; } ;
struct TYPE_9__ {TYPE_3__* tid; } ;
struct TYPE_8__ {struct il_ht_agg agg; } ;


 int FUNC_0 (char*,size_t,unsigned long long,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct il_priv*,int,int,int) ;
 int FUNC_3 (struct il_priv*,size_t,int) ;
 int FUNC_4 (struct il_priv*,struct il_ht_agg*,struct il_compressed_ba_resp*) ;
 int FUNC_5 (struct il_priv*,int,int,size_t) ;
 int FUNC_6 (size_t,int ) ;
 scalar_t__ FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (struct il_priv*,struct il_tx_queue*) ;
 size_t FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 struct il_rx_pkt* FUNC_11 (struct il_rx_buf*) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void
FUNC_15(struct il_priv *VAR_1, struct il_rx_buf *VAR_2)
{
 struct il_rx_pkt *VAR_3 = FUNC_11(VAR_2);
 struct il_compressed_ba_resp *VAR_4 = &VAR_3->u.compressed_ba;
 struct il_tx_queue *VAR_5 = ((void*)0);
 struct il_ht_agg *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 unsigned long VAR_10;


 u16 VAR_11 = FUNC_9(VAR_4->scd_flow);



 u16 VAR_12 = FUNC_9(VAR_4->scd_ssn);

 if (VAR_11 >= VAR_1->hw_params.max_txq_num) {
  FUNC_1("BUG_ON scd_flow is bigger than number of queues\n");
  return;
 }

 VAR_5 = &VAR_1->txq[VAR_11];
 VAR_8 = VAR_4->sta_id;
 VAR_9 = VAR_4->tid;
 VAR_6 = &VAR_1->stations[VAR_8].tid[VAR_9].agg;
 if (FUNC_14(VAR_6->txq_id != VAR_11)) {






  FUNC_0("BA scd_flow %d does not match txq_id %d\n",
      VAR_11, VAR_6->txq_id);
  return;
 }


 VAR_7 = FUNC_6(VAR_12 & 0xff, VAR_5->q.n_bd);

 FUNC_12(&VAR_1->sta_lock, VAR_10);

 FUNC_0("N_COMPRESSED_BA [%d] Received from %pM, " "sta_id = %d\n",
     VAR_6->wait_for_ba, (u8 *) &VAR_4->sta_addr_lo32,
     VAR_4->sta_id);
 FUNC_0("TID = %d, SeqCtl = %d, bitmap = 0x%llx," "scd_flow = "
     "%d, scd_ssn = %d\n", VAR_4->tid, VAR_4->seq_ctl,
     (unsigned long long)FUNC_10(VAR_4->bitmap),
     VAR_4->scd_flow, VAR_4->scd_ssn);
 FUNC_0("DAT start_idx = %d, bitmap = 0x%llx\n", VAR_6->start_idx,
     (unsigned long long)VAR_6->bitmap);


 FUNC_4(VAR_1, VAR_6, VAR_4);




 if (VAR_5->q.read_ptr != (VAR_12 & 0xff)) {

  int VAR_13 = FUNC_3(VAR_1, VAR_11, VAR_7);
  FUNC_2(VAR_1, VAR_8, VAR_9, VAR_13);

  if (FUNC_7(&VAR_5->q) > VAR_5->q.low_mark &&
      VAR_1->mac80211_registered &&
      VAR_6->state != VAR_0)
   FUNC_8(VAR_1, VAR_5);

  FUNC_5(VAR_1, VAR_8, VAR_9, VAR_11);
 }

 FUNC_13(&VAR_1->sta_lock, VAR_10);
}
