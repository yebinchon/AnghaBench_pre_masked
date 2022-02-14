
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ath_txq {int axq_qnum; } ;
struct ath_tx_status {int ts_status; int ts_flags; int ts_rssi_ctl0; int ts_rssi_ctl1; int ts_rssi_ctl2; int ts_rssi_ext0; int ts_rssi_ext1; int ts_rssi_ext2; int ts_rateindex; int ts_shortretry; int ts_longretry; int ts_rssi; int tid; int qid; int ba_low; int ba_high; } ;
struct TYPE_6__ {TYPE_1__* txstats; } ;
struct TYPE_8__ {int tsidx; int samp_lock; TYPE_2__ stats; } ;
struct ath_softc {TYPE_4__ debug; } ;
struct ath_buf {TYPE_3__* bf_mpdu; } ;
struct TYPE_7__ {scalar_t__ len; } ;
struct TYPE_5__ {int tx_bytes_all; } ;
typedef int TX_SAMP_DBG ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (int,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct ath_buf*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

void FUNC_4(struct ath_softc *VAR_25, struct ath_buf *VAR_26,
         struct ath_tx_status *VAR_27, struct ath_txq *VAR_28,
         unsigned int VAR_29)
{


 int VAR_30 = VAR_28->axq_qnum;

 FUNC_0(VAR_30, VAR_21);
 VAR_25->debug.stats.txstats[VAR_30].tx_bytes_all += VAR_26->bf_mpdu->len;

 if (FUNC_1(VAR_26)) {
  if (VAR_29 & VAR_11)
   FUNC_0(VAR_30, VAR_13);
  else
   FUNC_0(VAR_30, VAR_12);
 } else {
  if (VAR_27->ts_status & VAR_4)
   FUNC_0(VAR_30, VAR_23);
  else
   FUNC_0(VAR_30, VAR_14);
 }

 if (VAR_27->ts_status & VAR_1)
  FUNC_0(VAR_30, VAR_22);
 if (VAR_27->ts_status & VAR_0)
  FUNC_0(VAR_30, VAR_18);
 if (VAR_27->ts_status & VAR_5)
  FUNC_0(VAR_30, VAR_24);
 if (VAR_27->ts_status & VAR_3)
  FUNC_0(VAR_30, VAR_20);
 if (VAR_27->ts_flags & VAR_9)
  FUNC_0(VAR_30, VAR_17);
 if (VAR_27->ts_flags & VAR_7)
  FUNC_0(VAR_30, VAR_15);
 if (VAR_27->ts_flags & VAR_8)
  FUNC_0(VAR_30, VAR_16);
}
