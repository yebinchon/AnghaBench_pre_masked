
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {int n_bd; size_t read_ptr; int write_ptr; } ;
struct il_tx_queue {TYPE_5__ q; int * skbs; int time_stamp; } ;
struct TYPE_7__ {int * raw; } ;
struct TYPE_6__ {int sequence; } ;
struct il_rx_pkt {TYPE_2__ u; TYPE_1__ hdr; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {struct il_tx_queue* txq; } ;
struct il3945_tx_resp {int failure_frame; int rate; int status; } ;
struct TYPE_9__ {TYPE_3__* rates; } ;
struct ieee80211_tx_info {scalar_t__ band; int flags; TYPE_4__ status; } ;
struct TYPE_8__ {int idx; int count; } ;


 int FUNC_0 (char*,int,int ,int,int ,int) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ VAR_0 ;
 struct ieee80211_tx_info* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct ieee80211_tx_info*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct il_priv*,int,int) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int) ;
 int VAR_6 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct il_rx_pkt* FUNC_13 (struct il_rx_buf*) ;

__attribute__((used)) static void
FUNC_14(struct il_priv *VAR_7, struct il_rx_buf *VAR_8)
{
 struct il_rx_pkt *VAR_9 = FUNC_13(VAR_8);
 u16 VAR_10 = FUNC_11(VAR_9->hdr.sequence);
 int VAR_11 = FUNC_5(VAR_10);
 int VAR_12 = FUNC_4(VAR_10);
 struct il_tx_queue *VAR_13 = &VAR_7->txq[VAR_11];
 struct ieee80211_tx_info *VAR_14;
 struct il3945_tx_resp *VAR_15 = (void *)&VAR_9->u.raw[0];
 u32 VAR_16 = FUNC_12(VAR_15->status);
 int VAR_17;
 int VAR_18;

 if (VAR_12 >= VAR_13->q.n_bd || FUNC_10(&VAR_13->q, VAR_12) == 0) {
  FUNC_3("Read idx for DMA queue txq_id (%d) idx %d "
         "is out of range [0-%d] %d %d\n", VAR_11, VAR_12,
         VAR_13->q.n_bd, VAR_13->q.write_ptr, VAR_13->q.read_ptr);
  return;
 }

 VAR_13->time_stamp = VAR_6;
 VAR_14 = FUNC_2(VAR_13->skbs[VAR_13->q.read_ptr]);
 FUNC_6(VAR_14);


 VAR_17 = FUNC_8(VAR_15->rate);
 if (VAR_14->band == VAR_0)
  VAR_17 -= VAR_2;

 VAR_18 = VAR_15->failure_frame;

 VAR_14->status.rates[0].idx = VAR_17;
 VAR_14->status.rates[0].count = VAR_18 + 1;


 VAR_14->flags |=
     ((VAR_16 & VAR_4) ==
      VAR_5) ? VAR_1 : 0;

 FUNC_0("Tx queue %d Status %s (0x%08x) plcp rate %d retries %d\n", VAR_11,
      FUNC_7(VAR_16), VAR_16, VAR_15->rate,
      VAR_15->failure_frame);

 FUNC_1("Tx queue reclaim %d\n", VAR_12);
 FUNC_9(VAR_7, VAR_11, VAR_12);

 if (VAR_16 & VAR_3)
  FUNC_3("TODO:  Implement Tx ABORT REQUIRED!!!\n");
}
